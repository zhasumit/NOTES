// making the object again and again to make  (helps code reusablity)
function Car(make, model, color, year) {
    this.make = make;
    this.model = model;
    this.color = color;
    this.year = year;
    this.drive = function () { console.log(`I am driving my ${this.make} ${this.color} ${this.model}`) }
}

const car1 = new Car("Toyota", "Camry", "Blue", 2023);
const car2 = new Car("Ford", "Mustand", "Red", 2025);
const car3 = new Car("Rolls-Royce", "Phantom", "Black", 2024);

console.log(car1);
car1.drive();
console.log(car2);
car2.drive();
console.log(car3);
car3.drive();