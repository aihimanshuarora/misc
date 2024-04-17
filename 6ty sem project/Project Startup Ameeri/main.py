import requests
from bs4 import BeautifulSoup
import sqlite3
import smtplib

sender_email = "heroku2arinsharma@gmail.com"
sender_password = "dimy zttw exkt bfly"
recipient_email = "ai.himanshuarora@gmail.com"
conn = sqlite3.connect("product_data.db")
cursor = conn.cursor()
cursor.execute(
    """CREATE TABLE IF NOT EXISTS products (
                                    item_name TEXT PRIMARY KEY,
                  price REAL
                )"""
)
conn.commit()


def scrape_flipkart(url):
    try:
        response = requests.get(url)
        response.raise_for_status()
        soup = BeautifulSoup(response.text, "html.parser")
        item_name_element = soup.find("span", class_="B_NuCI")
        price_element = soup.find("div", class_="_30jeq3 _16Jk6d")
        if item_name_element and price_element:
            item_name = item_name_element.text.strip()
            price = price_element.text.strip().replace("₹", "")
            price = price_element.text.strip().replace(",", "")
            return item_name, price
        else:
            print(f"Failed to extract data from {url}")
            return None
    except requests.exceptions.RequestException as e:
        print(f"Error fetching data from {url}: {e}")
        return None


def store_data(item_name, price):
    cursor.execute("SELECT price FROM products WHERE item_name = ?", (item_name,))
    data = cursor.fetchone()
    if data is None:
        send_email_notification(item_name, price)
        cursor.execute(
            "INSERT INTO products (item_name, price) VALUES (?, ?)", (item_name, price)
        )
        conn.commit()
    else:
        print(f"Item already exists. Price: {data[0]}")
        if data[0] <= price:
            cursor.execute(
                "Update products set price=? where item_name=?", (price, item_name)
            )
        else:
            drop_notification(item_name, data[0])


def send_email_notification(item_name, price):
    message = f"Subject: Set Price Drop Alert Of Product on Flipkart! \n\nThank You For Registering for price drop alert of product :\nItem Name: {item_name}\nPrice at time of registration: ₹{price}"
    message = (message).encode("ascii", "ignore")
    with smtplib.SMTP_SSL("smtp.gmail.com", 465) as server:
        server.login(sender_email, sender_password)
        server.sendmail(sender_email, recipient_email, message)


def drop_notification(item_name, price):
    message = f"Subject: Price Dropped Alert Of Product on Flipkart! \n\nItem Name: {item_name}\nPrice: ₹{price}"
    message = (message).encode("ascii", "ignore")
    with smtplib.SMTP_SSL("smtp.gmail.com", 465) as server:
        server.login(sender_email, sender_password)
        server.sendmail(sender_email, recipient_email, message)


def main():
    product_url = "https://www.flipkart.com/vivo-t2-pro-5g-new-moon-black-256-gb/p/itm1230688cdef18?pid=MOBGT4RZMZFEWDY7&lid=LSTMOBGT4RZMZFEWDY7EEVQUQ&marketplace=FLIPKART&store=tyy%2F4io&spotlightTagId=BestsellerId_tyy%2F4io&srno=b_1_1&otracker=browse&fm=organic&iid=0d774dbd-da24-4d78-8956-8a24d6cca13f.MOBGT4RZMZFEWDY7.SEARCH&ppt=browse&ppn=browse&ssid=v9baagpnsw0000001712988528245"
    item_name, price = scrape_flipkart(product_url)
    if item_name and price:
        store_data(item_name, price)
    else:
        print("Something Went Wrong")


if __name__ == "__main__":
    main()
    conn.close()
