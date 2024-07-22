// callback : function passed as an argument to another function
// used to handle asynchronous operations
// Reading a file 
// Network requests
// Interacting with databases

// When you are done executing call this next 

// dont put () otherwise it will call the function immediately

hello(goodbye);
function hello(callback) {
    console.log("Hello");
    callback();
}


function wait(callback) {
    console.log("Waiting...");
    callback();
}

function leave(callback) {
    console.log("Leaving");
    callback();
}

function goodbye() {
    console.log("Goodbye");
}




sum(4, 6, displayResult);
function sum(a, b, callback) {
    let result = a + b;
    callback(result);
}

function displayResult(result) {
    console.log("Result:", result);
}

