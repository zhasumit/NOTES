// synchronous  = Executes line by line consecutively in a sequential manner
//                             Code that waits for an operation to complete.

// asynchronous = Allows multiple operations to be performed
//                               concurrently without waiting. Doesn't block the execution
//                               flow and allows the program to continue.
//                               (I/O operations, network requests, fetching data)
//                               Handled with: Callbacks, Promises, Async/Await


setTimeout(() => console.log("A"), 2800); // this is in different thread (works later)
setTimeout(() => console.log("B"), 2000); // this is in different thread (works later)
setTimeout(() => console.log("C"), 1500); // this is in different thread (works later)

console.log("D")
console.log("E")
console.log("F")


function func1(callback) {
    setTimeout(() => console.log("func1"), 5000);
    callback();
}

function func2() {
    console.log("i");
    console.log("ii");
    console.log("iii");
}

func1(func2);