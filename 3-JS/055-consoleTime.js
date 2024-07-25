// console.time() = tool that allows you to measure the time it takes
//                               for a section of code or process to execute
//                               Great for identifying performance "bottlenecks"


console.time("Time for loop");

for (let i = 0; i < 1000000; i++) {
    // Code to be measured
}

console.timeEnd("Time for loop"); // Ends the timer and logs the time taken



function loadSomeData() {
    console.time("Loading data...");
    for (let i = 0; i < 10000000; i++) {
        // Pretend to load some data 
    }
    console.timeEnd("Loading data...");
}
loadSomeData(); // Calls the function to measure the time for loading data


function processData() {
    console.time("Processing data...");
    for (let i = 0; i < 10000000; i++) {
        // Pretend to process some data
    }
    console.timeEnd("Processing data...");
}
processData(); // Calls the function to measure the time for processing data




// Helps in identifying performance bottlenecks

