// Callback Hell = Situation in JavaScript where callbacks
//                            are nested within other callbacks to the
//                           degree where the code is difficult to read.
//                           Old pattern to handle asynchronous functions.
//                           Use Promises + async/await to avoid Callback Hell

// without the callback the execution otder is not clear 
// so we add callback to call next function for execution
function task1(callback) {
    setTimeout(() => {
        console.log("Task 1 complete");
        callback();
    }, 2000);
}

function task2(callback) {
    setTimeout(() => {
        console.log("Task 2 complete");
        callback();
    }, 1000);
}

function task3(callback) {
    setTimeout(() => {
        console.log("Task 3 complete");
        callback();
    }, 3000);
}

function task4(callback) {
    setTimeout(() => {
        console.log("Task 4 complete");
        callback();
    }, 1500);
}

// callback HELL : calling function one after another   
// task1(() => task2(() => task3(() => task4())));
// nesting callbacks one after another (nesting makes pyramid of hell)
task1(() => {
    task2(() => {
        task3(() => {
            task4(() => console.log("All tasks completed"));
        });
    });
});
