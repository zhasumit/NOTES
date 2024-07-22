// switches else if tree replacement
let day = 2;
if (day === 1)
    console.log("Sunday");
else if (day === 2)
    console.log("Monday");
else if (day === 3)
    console.log("Tuesday");
else if (day === 4)
    console.log("Wednesday");
else if (day === 5)
    console.log("Thursday");
else if (day === 6)
    console.log("Friday");
else if (day === 7)
    console.log("Saturday");
else
    console.log("Invalid day");



// using the switch statement
switch (day) {
    case 1: console.log("Sunday"); break;
    case 2: console.log("Monday"); break;
    case 3: console.log("Tuesday"); break;
    case 4: console.log("Wednesday"); break;
    case 5: console.log("Thursday"); break;
    case 6: console.log("Friday"); break;
    case 7: console.log("Saturday"); break;
    default: console.log("Invalid day"); break;
}



// using the ternary operator to replace the switch statement
day === 1 ? console.log("Sunday") :
    day === 2 ? console.log("Monday") :
        day === 3 ? console.log("Tuesday") :
            day === 4 ? console.log("Wednesday") :
                day === 5 ? console.log("Thursday") :
                    day === 6 ? console.log("Friday") :
                        day === 7 ? console.log("Saturday") :
                            console.log("Invalid day");




// Another example of switch statement
let testScore = 98;
let letterGrade;
switch (true) {
    case testScore >= 90: letterGrade = "A"; break;
    case testScore >= 80: letterGrade = "B"; break;
    case testScore >= 70: letterGrade = "C"; break;
    case testScore >= 60: letterGrade = "D"; break;
    default: letterGrade = "F"; break;
}
console.log(`Your letter grade is ${letterGrade}`);