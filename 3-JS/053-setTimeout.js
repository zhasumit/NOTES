// setTimeout : call a function after a certain delay in milliseconds
//              used to schedule a task to be executed after a certain delay
// setTimeout(callback, delay);
setTimeout(() => console.log("5 seconds passed"), 5000)

// using the normal function as callback (callback : using function as a parameter)
setTimeout(function () {
    console.log("3 seconds passed");
}, 3000);



// after 10 seconds the callback stops and we saved it in some variable
const tenSecondTimer = setTimeout(() => console.log("10 seconds passed"), 10000);
// we can stop the timer using clearTimeout(timerId)
clearTimeout(tenSecondTimer); // will stop the timer from running after 10 seconds 



