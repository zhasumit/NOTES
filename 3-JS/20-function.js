// function = A section of reusable code.
//                    Declare code once, use it whenever you want.
//                    Call the function to execute that code.

function happyBirthday(name = "", age = 18) {
    console.log(`Happy birthday to you!`);
    console.log(`Happy birthday to you!`);
    console.log(`Happy birthday dear ${name}!`);
    console.log(`Happy birthday to you!`);
    console.log(`You are ${age} years old`);
}

happyBirthday("Sumit", 24);
happyBirthday("Spongbob", 20);
happyBirthday("Hans");



function add(a, b) {
    return a + b;
}
function subtract(a, b) {
    return a - b;
}
function multiply(a, b) {
    return a * b;
}
function divide(a, b) {
    if (b === 0)
        throw new Error("Cannot divide by zero.");
    return a / b;
}
function isEven(num) {
    return (num % 2 === 0) ? true : false;
}

function isValidEmail(email) {
    return (email.include("@") && email.includes("."))
}

console.log(isValidEmail("bro@fake.com"));
console.log(isValidEmail("ElonMusk@elonmusk.com"));
console.log(isValidEmail("FuskDort.com"));
