import requests
import csv
from bs4 import BeautifulSoup

link = "https://www.flipkart.com/noise-colorfit-icon-2-1-8-display-bluetooth-calling-ai-voice-assistant-smartwatch/p/itmd4cd819eadb9f?pid=SMWGEH7VGYMGCP3V&lid=LSTSMWGEH7VGYMGCP3VTODMR3&marketplace=FLIPKART&store=ajy%2Fbuh&srno=b_1_1&otracker=browse&fm=organic&iid=en_ERPI5Lap5jzyfvDe0kqOsMc1EOBoqJd1Ye9c1SKI_1hroE3cOUGU2UmbZeOYRW6cCdWaKbwdS5q_zBUXaC034PUFjCTyOHoHZs-Z5_PS_w0%3D&ppt=None&ppn=None&ssid=1hn7qk5vkw0000001710264928899"
data = requests.get(link)
# print(data)
sdata = BeautifulSoup(data.text, "html.parser")
# print(sdata)
elements = sdata.find_all("div", class_="_30jeq3 _16Jk6d")
with open("random.csv", "w") as fp:
    for a in elements:

        print(a.text[1:])
        fp.writelines(link)
        fp.writelines(",")

        fp.writelines(a.text[1:])
# writer.writerow([a])
