// closure = A function defined inside of another function,
//                  the inner function has access to the variables
//                  and scope of the outer function.
//                  Allow for private variables and state maintenance
//                  Used frequently in JS frameworks: React, Vue, Angular

// =====================================EXAMPLE1========================================
// function capsulate variables
// inner functions are not exposed outside of the outer function
// outer function has no access to the inner function (but can call it)
// but the inner function has access to the outer function's variables

function outerFunction() {
    let outerVariable = "Hello";
    function innerFunction() {
        let innerVariable = "World";
        console.log(outerVariable); // can call since p|arent has this scope
    };
    // console.log(innerVariable); // gives error
    innerFunction();
}

console.log(outerFunction());
// console.log(innerFunction()); // gives error

// console.log(outerVariable); // gives error inside the child scope
// console.log(innerVariable); // cannot access inner variable from outside






// =====================================EXAMPLE2========================================
// we can maintaint the state of the variables using closures
function incrementCounter() {
    let count = 0;
    count++;
    console.log(`Count: ${count}`);
}
incrementCounter();
incrementCounter();
incrementCounter();
incrementCounter();
incrementCounter();


// function return the object (something like class)
function counter() {
    let count = 0;
    function increment() {
        count++;
        console.log(`Count: ${count}`);
    }
    return { increment };
}

let counter1 = counter();

counter1.increment();
counter1.increment();
counter1.increment();
counter1.increment();






// Making the closure for explicit properties
let score = 0;
function incrementScore(points) {
    score += points;
    console.log(`Score: ${score}`);
}

function decreaseScore(points) {
    score -= points;
    console.log(`Score: ${score}`);
}

function getScore() { return score; }

// score = 10; // scores can be set anything since there is no clousure
incrementScore(5);
decreaseScore(3);
console.log(getScore());




// using the closure to make private points 
function createGame() {
    let score = 0;
    function incrementScore(points) {
        score += points;
        console.log(`Score: ${score}`);
    }
    function decreaseScore(points) {
        score -= points;
        console.log(`Score: ${score}`);
    }
    function getScore() { return score; }
    function resetScore() {
        score = 0;
        console.log("Score reseted");
    }
    return { incrementScore, decreaseScore, getScore, resetScore };
}

const game1 = createGame();
game1.incrementScore(5);
game1.decreaseScore(3);
game1.incrementScore(4);
game1.decreaseScore(1);
game1.resetScore();

console.log(game1.getScore());






