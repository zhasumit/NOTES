// function declaration : block of code to perform a task
function hello() {
    console.log("Hello!");
}
hello();

// function expression : anonymous function that can be stored in a variable
const Hello = function () {
    console.log("Hello!");
}
Hello();

// setTimeout(callback, delay) (using function expression as callback)
setTimeout(Hello, 2000);

// writing the callback on the spot 
setTimeout(function () {
    console.log("Namaste");
}, 3000);







// function as value or expression is called function expression 
// make less pollution in the global scope 
// we donot name the function (since we use it and throw that part)
const numbers = [1, 2, 3, 4, 5];
const sqaures = numbers.map(square)

function square(num) {
    return num * num;
}
console.log(sqaures); // [1, 4, 9, 16, 25]

// using function expression we use function as argument (value in function)
const cubes = numbers.map(function (num) {
    return num * num * num;
})
console.log(cubes); // [1, 8, 27, 64, 125]


const evenNumebers = numbers.filter(function (num) {
    return num % 2 === 0;
})
console.log(evenNumebers); // [2, 4]

const total = numbers.reduce(function (accumulator, element) {
    return accumulator + element;
})
console.log(total); // 15