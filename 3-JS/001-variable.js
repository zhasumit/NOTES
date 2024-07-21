// variable = A container that stores a value.
// Behaves as if it were the value it contains.


// declaring        let x 
// assignment       x = 100;



// Numbers 
let age = 23;
let price = 10.5;
let CPI = 7.8;

console.log(`Age: ${age}`, typeof age);
console.log(`price: ${price}`, typeof price);
console.log(`CPI: ${CPI}`);




// Strings
let firstName = "Sumit";
let favoriteFood = "Fish";
let email = "sumitzha2057@gmail.com";

console.log(`Name: ${firstName}`, typeof firstName);
console.log(`Favorite food: ${favoriteFood}`, typeof favoriteFood);
console.log(`Email: ${email}`, typeof email);




// Booleans
let online = true;
let isMarried = false;
let isStudent = false;
let isCoder = true;

console.log(`Online status: ${online}`, typeof online);
console.log(`Married status: ${isMarried}`);
caches.log(`Is student? ${isStudent}`);
caches.log(`Is a coder? ${isCoder}`);




// some tweaking of the HTML contents via the getElementById function.
let fullName = "Sumit Jha";
console.log(`"Hello, my name is ${fullName}`);
console.log(`"I am ${age} years old"`);
console.log(`"I am student? ${isStudent}"`);

// Accessing the HTML elements by their id and updating their text content.
document.getElementById("p1").textContent = `Your name is ${fullName}`;
document.getElementById("p2").textContent = `You are ${age} years old`;
document.getElementById("p3").textContent = `Enrolled: ${isStudent}`;