// forEach() = method used to iterate over the elements
//              of an array and apply a specified function (callback) to each element

//              array.forEach(callback)
//              element, index, array are provided

const numbers = [1, 2, 3, 4, 5];
numbers.forEach(displayResult);
numbers.forEach(doubleNumber)


function displayResult(number) {
    console.log(number);
}

function doubleNumber(element, index, array) {
    array[index] = element * 2;
}
console.log(numbers); // [2, 4, 6, 8, 10]

function square(element, index, array) {
    array[index] = element * element;
}



// iterate and apply a function to an array
let fruits = ["apple", "banana", "orange", "coconut", "grape", "mango"];
fruits.forEach(makeUpperCase);
fruits.forEach(makeLowerCase);
fruits.forEach(capitaliseFirstLetter);

function makeUpperCase(fruit, index, fruits) {
    fruits[index] = fruit.toUpperCase();
}
console.log(fruits);

function makeLowerCase(fruit, index, fruits) {
    fruits[index] = fruit.toLowerCase();
}

function capitaliseFirstLetter(fruit, index, fruits) {
    fruits[index] = fruit[0].toUpperCase() + fruit.slice(1).toLowerCase();
}