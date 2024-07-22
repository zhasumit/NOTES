// logical operators =  used to combine or manipulate Boolean values 
//                                    (true or false)

// AND = &&
// OR  = ||
// NOT = !

// AND (both the conditions shoule be true) => returns true
let temp = 20;
temp > 10 && temp < 30 ?
    console.log("Good weather") :
    temp > 30 && temp < 50 ?
        console.log("Ah Hot Hot Hot") :
        console.log("Nasty weather");



let hasTicket = true;
let hasBoardPass = false;
hasTicket || hasBoardPass ? console.log("You can ride") : console.log("You can't ");


// NOT (one of the conditions should be false) => returns true
const isSunny = true;
!isSunny ?
    console.log("Cloudy") :
    console.log("Sunny");