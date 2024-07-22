// rest parameters = (...rest) allow a function work with a variable
//                                  number of arguments by bundling them into an array

//                                  spread = expands an array into separate elements
//                                  rest = bundles separate elements into an array

function openFridge(...items) {
    console.log(items);
}

function getFood(...items) {
    console.log(...items);
}

openFridge("potatoes", "carrots", "onions");
getFood("chicken", "fish", "vegetables");
// spread operator is used in the function call, not in the function definition.


function sum(...numbers) {
    let result = 0;
    for (num of numbers)
        result += num;
    return result;
}

console.log(sum(24, 15, 64, 17));
console.log(sum(11, 4, 6, 8));

function avg(...numbers) {
    let result = 0;
    for (num of numbers)
        result += num;
    return result / numbers.length;
}
console.log(avg(24, 15, 64, 17));
console.log(avg(11, 4, 6, 8));



function combineStrings(...str) {
    return str.join(' ');
}
console.log(combineStrings("Mr.", "Spongebob", "squarepants", "IV"));
