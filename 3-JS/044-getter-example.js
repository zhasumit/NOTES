class Person {
    constructor(firstName, lastName, age) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.age = age;
    }

    set firstName(userInput) {
        (typeof userInput === "string" && userInput.length > 0) ?
            this._firstName = userInput :
            console.error("Invalid first name!");
    }
    set lastName(userInput) {
        (typeof userInput === "string" && userInput.length > 0) ?
            this._lastName = userInput :
            console.error("Invalid last name!");
    }
    set age(userInput) {
        (typeof age === "number" && (age > 0 && age <= 120)) ?
            this._age = userInput :
            console.error("Invalid age!");
    }

    // getters To make property readable
    get firstName() { return this._firstName; }
    get lastName() { return this._lastName; }
    get age() { return this._age; }
    get fullName() { return `${this.firstName} ${this.lastName}`; }
}

let person1 = new Person("Sumit", "Jha", 22);

console.log(person1.firstName);
console.log(person1.lastName);
console.log(person1.age);
console.log(person1.fullName);



