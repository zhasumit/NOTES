// class = (ES6 feature) provides a more structured and cleaner way to 
//               work with objects compared to traditional constructor functions
//               ex. static keyword, encapsulation, inheritance

class Product {
    salesTax = 0.08; // a member of class cannot have const (as it is static)
    constructor(name, price) {
        this.name = name;
        this.price = price;
    }

    displayProduct() {
        console.log(`Product Name: ${this.name}`);
        console.log(`Product Price: $${this.price.toFixed(2)}`);
    }

    calculateTotalPrice() {
        return this.price + (this.price * this.salesTax);
    }
}

const product1 = new Product("Luminous", 121.47);
const product2 = new Product("Amaron", 252.62);
const product3 = new Product("inspironBattery", 30.44);

product1.displayProduct();
product2.displayProduct();
product3.displayProduct();

console.log(product1.calculateTotalPrice());
console.log(product2.calculateTotalPrice());
console.log(product3.calculateTotalPrice());