// Errors : something went wrong in the execution
//          occurs often for user inputs, incorrect data, network issues etc.
//          Error object is created to represent the problem

// console.lag("hi") // misspelled log as lag uncaught type error 
// Errors interrupt the normal flow of the program  

console.log("Hi");
console.log("END");



// uncaught Reference error : trying to access a variable that has not been declared
// console.log(nonDeclaredVariable); 




// Network issues
// Promise Rejection
// Security errors


// try { } = Encloses code that might potentially cause an error
// catch { } = Catch and handle any thrown Errors from try { }
// finally { } = (optional) Always executes. Used mostly for clean up
//                     ex. close files, close connections, release resources


// try : to try somethings (like box for containing something bad)
try {
    console.log(nonDeclaredVariable);
} catch (error) {
    console.log("An error occurred: ", error);
} finally {
    console.log("This will always run");
    // closing connections, Files (that was opened in try block)
    // do any cleanup at the end 
}


try {
    console.log("Hello");
} catch (error) {
    console.log("An error occurred: ", error);
} 
// finally block is optional


