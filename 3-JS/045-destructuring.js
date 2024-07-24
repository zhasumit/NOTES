// destructuring =  extract values from arrays and objects,
//                              then assign them to variables in a convenient way
//                              [] = to perform array destructuring
//                              {} = to perform object destructuring

// swapping two values without using a temporary variable
let a = 10, b = 20;
console.log(`Before swapping: a = ${a}, b = ${b}`);

[a, b] = [b, a];
console.log(`After swapping: a = ${a}, b = ${b}`);









// swap two elements in an array 
const colors = ["red", "blue", "green", "yellow", "pink", "orange", "purple"];
[colors[0], colors[4]] = [colors[4], colors[0]];
console.log(colors); // ["pink", "blue", "green", "yellow", "red", "orange", "








// Assign array elements to variables using destructuring
const [color1, color2, color3, ...extraColors] = colors;

// extraColors is the rest parameter (contains the remaining colors) 
console.log(`Color 1: ${color1}`);
console.log(`Color 2: ${color2}`);
console.log(`Color 3: ${color3}`);
console.log(`Extra colors: ${extraColors}`);









// extract value from object using destructuring
const person1 = {
    firstName: "Spongebob",
    lastName: "Squarepants",
    age: 23,
    job: "Marine Biologist"
}

// destructuring object properties in seperate variables
// let { firstName, lastName, age, job } = person1;
// console.log(`Name: ${firstName} ${lastName}, Age: ${age}, Job: ${job}`);

const person2 = {
    firstName: "Patrick",
    lastName: "Squidward",
    age: 30,
}

// default value for job property is unemployed
let { firstName, lastName, age, job = "unemplyed" } = person2;
console.log(`Name: ${firstName} ${lastName}, Age: ${age}, Job: ${job}`);









// destructure in function parameter 
function displayPerson({ firstName, lastName, age, job = "unemployed" }) {
    console.log(`\nName: ${firstName} ${lastName}, Age: ${age}, Job: ${job}`);
}

displayPerson(person1);
displayPerson(person2);