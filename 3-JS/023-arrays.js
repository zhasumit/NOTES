// array : variable like structure that holds multiple values
let fruits = ["apple", "banana", "orange"];

console.log(fruits); // [ 'apple', 'banana', 'orange' ]
console.log(fruits[0]); // apple
console.log(fruits[1]); // banana
console.log(fruits[2]); // orange

// for loop
for (let i = 0; i < fruits.length; i++)
    console.log(fruits[i]);

// for of loop
for (let fruit of fruits)
    console.log(fruit);

fruits.sort().reverse();
console.log(fruits); // [ 'orange', 'grape', 'apple' ]


// Changing value at some index
fruits[1] = "grape";
console.log(fruits); // [ 'apple', 'grape', 'orange' ]

fruits.push("kiwi");
console.log(fruits); // [ 'apple', 'grape', 'orange', 'kiwi' ]

fruits.pop();
console.log(fruits); // [ 'apple', 'grape', 'orange' ]

fruits.unshift("mango");
console.log(fruits); // [ 'mango', 'apple', 'grape', 'orange' ]

console.log(fruits.length); // 4
console.log(fruits.includes("banana")); // true
console.log(fruits.includes("pear")); // false

console.log(fruits.indexOf("banana")); // 1

