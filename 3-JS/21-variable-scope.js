// variable scope = where a variable is recognized
//                               and accessible (local vs global)            

let x = 3; // global scope

function function1(){
    let x = 1; // local scope
    console.log(x);
}

function function2(){
    let x = 2; // local scope
    console.log(x);
}

// functions are like houses the people in the houses can see outside (global scope)
console.log(x); // global scope
function1();
function2();