//   = assignment operator                  (simply assigns a value to a variable)
//  == comparison operator                  (compare if values are equal)
// === strict equality operator             (compare if values & datatype are equal)
//  != inequality operator                  (compare if values are equal)
// !== strict inequality operator           (compare if values & datatype are not equal)

const PI = 3.14; // assignment of pi
(PI == "3.14") ?
    console.log("PI") :
    console.log("NOT pi");

(PI != "3.14") ?
    console.log("NOT pi") :
    console.log("PI");

// since we are comparing a number to a string, => returns false
(PI === "3.14") ?
    console.log("PI") :
    console.log("NOT Pi");


(PI !== 6.14) ?
    console.log("That is NOT Pi") :
    console.log("That is Pi");