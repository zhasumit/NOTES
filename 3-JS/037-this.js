// this : refers to the current object where THIS is being used 
//          (the object depends on immediate context)
//          person,name = this.name;


const person1 = {
    name: "Sumit Jha",
    favoriteFood: "fish curry",
    hello: function () { console.log(`Hello I am ${this.name}!`) },
    eat: function () { console.log(`${this.name} is eating ${this.favoriteFood}!`) }
}
person1.hello();
person1.eat();


const person2 = {
    name: "Sushmita sinu",
    favoriteFood: "lamb kabab",
    hi: () => console.log(`Hi I am ${this.name}!`),
    hello: function () { console.log(`Hello I am ${this.name}!`) },
    eat: function () { console.log(`${this.name} is eating ${this.favoriteFood}!`) }
}
// this doesnot work with the arrow functions 

person2.hi(); 
person2.hello();
person2.eat();