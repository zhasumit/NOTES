let age = 12;

if (age > 18)
    console.log("Allowed to enter");
else
    console.log("No allowed ");





let time = 15;
time = time % 24; // to get the remainder of the division of time by 24
if (time > 0)
    console.log("Good Morning");
else if (time > 12)
    console.log("Good Afternoon");
else if (time >= 17)
    console.log("Good Evening");
else
    console.log("Good Night");






const isStudent = true;
if (isStudent)
    console.log("You are a student");
else
    console.log("You are not a student");






let driverAge = 16;
let hasLicense = true;
if (driverAge >= 18 && hasLicense) // using combined conditions
    console.log("You are eligible to drive");
else
    console.log("You are not eligible to drive");


// without using combined conditions (nested if-else)
if (driverAge >= 18)
    if (hasLicense)
        console.log("You are eligible to drive");
    else
        console.log("You are not eligible to drive");
else
    console.log("You are not eligible to drive");