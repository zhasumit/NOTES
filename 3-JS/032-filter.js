// filter: creates a new array after filtering elements on a condition
let numbers = [3, 4, 1, 5, 2, 4, 2, 5, 7, 9, 67, 8, 9, 34, 5, 62, 54];
let evenNumbers = numbers.filter(isEven);
let oddNumbers = numbers.filter(isOdd);
console.log(evenNumbers);
console.log(oddNumbers);

function isEven(num) {
    return num % 2 === 0;
}
function isOdd(num) {
    return num % 2 !== 0;
}




// ----------- EXAMPLE 2 -----------
let ages = [16, 17, 17, 18, 19, 20, 65];
let adults = ages.filter(isAdult);
let children = ages.filter(isChild);

console.log(children);

function isAdult(element) {
    return element >= 18;
}

function isChild(element) {
    return element < 18;
}

// ----------- EXAMPLE 3 -----------
const words = ['apple', 'orange', 'kiwi', 'banana', 'pomegranate', 'coconut',];
const longWords = words.filter(getLongWords);
const shortWords = words.filter(getShortWords);

console.log(shortWords);
console.log(longWords);

function getShortWords(element) {
    return element.length <= 6;
}

function getLongWords(element) {
    return element.length > 6;
}