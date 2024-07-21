// Type conversion : change the data type of a variable to antoher type (strings, numbers, booleans)

let age = prompt("Enter your age"); // this will get a string
age = parseInt(age); // convert the string to a number
age += 1;
console.log(age); // will print the number



let x = "pizza"
let y = "pizza"
let z = "pizza"
x = Number(x);
y = String(y);
z = Boolean(z);
console.log(x, typeof x);
console.log(y, typeof y);
console.log(z, typeof z);



x = "0"
y = "0"
z = "0"
x = Number(x);
y = String(y);
z = Boolean(z);
console.log(x, typeof x);   // 0 in number
console.log(y, typeof y);   // 0 in string
console.log(z, typeof z);   // true since "0" is not empty string



x = ""
y = ""
z = ""
x = Number(x);
y = String(y);
z = Boolean(z);
console.log(x, typeof x);   // 0 in number
console.log(y, typeof y);   // empty string
console.log(z, typeof z);   // false since "" is empty string



let X;
let Y;
let Z;
X = Number(X);
Y = String(Y);
Z = Boolean(Z);
console.log(X, typeof X);   // NaN since it was undefined 
console.log(Y, typeof Y);   // undefined string
console.log(Z, typeof Z);   // false since undefined