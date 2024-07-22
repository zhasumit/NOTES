// arrow functions = a concise way to write function expressions
//                   good for simple functions that you use only once

const hello = function () {
    console.log("Hello!");
}
hello();

// Note : function keyword is also not required 
// = () => is the same as function() {... }
// if single line => return not required 
// for multiple lines => return is required inside {...}
const greet = (name = "") => console.log(`Greetings ${name}!`);
greet();
greet("Sandeep");

const sayHi = (name = "", age = 18) => {
    console.log(`Hello ${name}!`);
    console.log(`You are ${age} years old.`);
}
sayHi("Dusty", 25);



// Using Callbacks
setTimeout(hello, 2000);
// Using function expression as callback
setTimeout(function () {
    console.log("Namaste Ji!");
}, 2000);
// using arrow function as callback
setTimeout(() => console.log("Adios Amigo!"), 4000);





const numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
// for one parameter brackets are optional, also return in one line is optional
const squares = numbers.map(num => num * num);

// for multiple lines {} and return are required
const cubes = numbers.map((num) => {
    return num * num * num;
});

console.log(squares);
console.log(cubes);



const evenNumbers = numbers.filter(num => num % 2 === 0);
const oddNumbers = numbers.filter((num) => {
    return (num % 2 !== 0)
});

console.log(evenNumbers);
console.log(oddNumbers); 

const total = numbers.reduce((accumulator, element) => accumulator + element);
console.log(total); // 55