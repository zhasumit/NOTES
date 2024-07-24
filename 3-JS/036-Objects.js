// Object : collection of properties and methods
//          represent real world entities or concepts
//          object = {key: value, key: value, ...}

// object contains somethings that are related to a particular entity

const person1 = {
    firstName: "Sumit",
    lastName: "Jha",
    age: 23,
    employed: false,
    sayHi: function () { console.log("Hello!"); },
    eat: function () { console.log("I am eating momo!"); }
};
console.log(person1);
console.log(person1.firstName);
console.log(person1.lastName);
console.log(person1.age);
console.log(person1.employed);
person1.sayHi();
person1.eat();





const person2 = {
    firstName: "Supriya",
    lastName: "Thas",
    age: 22,
    employed: false,
    // Here using arrow function to bind 'this' keyword
    sayHi: () => console.log(`Hello I am Sumit!`),
    eat: () => console.log("I am eating dal tadka...")
};
console.log(person2);
person2.eat();
person2.sayHi();