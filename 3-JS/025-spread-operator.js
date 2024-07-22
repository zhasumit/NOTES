// spread operator =  ... allows an iterable such as an
//                                  array or string to be expanded
//                                   in to separate elements
//                                  (unpacks the elements)

const numbers = [1, 2, 3, 4, 5];
console.log(...numbers); // 1 2 3 4 5

let maximum = Math.max(...numbers);
console.log(maximum); // 5

let minimum = Math.min(...numbers);
console.log(minimum); // 1

let userName = "Sumit Kumar Jha"
let letters = [...userName];
let words = userName.split(" ")
console.log(words)
console.log(letters); // [ 'S', 'u', 'm', 'i', 't


// unpacking using the spread operator 
let fruits = ["apple", "orange", "banana", "kiwi"]
let vegetables = ["carrots", "Muinga", "Parwal", "Aloo"]
let foods = [...fruits, ...vegetables, "eggs", "milk"]
console.log(foods) // combined both the arrays 



