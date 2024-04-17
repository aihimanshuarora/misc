// Sample product data (replace with actual data from backend)

// Function to display products on the page
function displayProducts() {
    const productList = document.getElementById("product-list");
    productList.innerHTML = ""; // Clear previous content
  
    products.forEach((product) => {
      const productCard = document.createElement("div");
      productCard.classList.add("product-card");
      productCard.innerHTML = `
        <h3>${product.name}</h3>
        <p>Price: $${product.price}</p>
        <button onclick="trackPrice(${product.id})">Track Price</button>
      `;
      productList.appendChild(productCard);
    });
  }
  
  // Function to track price (sample function, implement actual functionality)
  function trackPrice(productId) {
    const emailInput = document.getElementById("emailInput").value;
    if (emailInput.trim() === "") {
      alert("Please enter your email for notifications.");
      return;
    }
  
    // Simulating sending notification to console (replace with actual notification logic)
    console.log(
      Notification sent to ${emailInput}: Price tracking not implemented for Product ID ${productId}
    );
  }
  
  // Event listener for search button
  document.getElementById("searchButton").addEventListener("click", () => {
    const searchInput = document.getElementById("searchInput").value;
    // Perform search functionality (not implemented in this example)
    alert(Searching for: ${searchInput});
  });
  
  // Initial display of products on page load
  displayProducts();