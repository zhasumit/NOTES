// Ternary Operaor : a ? b : c
// A shortcut for conditional expressions. if{} else{}
// condition? TRUE part: FALSE part;
let age = 16;
let message = age >= 18 ? "Adult" : "Child";
console.log(`You are ${message}`);



let time = 16;
let greeting = time >= 5 ? "Good Morning" : time >= 12 && time < 18 ? "Good afternoon" : time >= 18 && time <= 24 ? "Good evening" : "Good night";
console.log(greeting);



let isStudent = true;
console.log(isStudent ? "You are a student" : "You are not a student");



let purchaseAmount = 110;
let discount = purchaseAmount > 100 ? 5 : 0;
console.log(`Total : ${purchaseAmount - purchaseAmount * (discount / 100)}%`);
console.log(`Discounted price: ${purchaseAmount * (discount / 100)}`);