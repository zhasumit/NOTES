// while some condition is true, do something
const userName = "";
while (userName === "" || userName === null)
    userName = prompt("Please enter your name");
console.log("Hi", userName)



// if dont give any initialisation value -> undefined 
let user;
do {
    user = prompt("Please enter your name");
} while (user === "" || user === null);



// for loop = repeat some code a LIMITED amount of times
// ------- INCREMENT -------
for (let i = 1; i <= 10; i++)
    console.log(i);

// ------- DECREMENT -------
for (let i = 10; i > 0; i--)
    console.log(i);

for (let i = 1; i <= 10; i++) {
    if (i === 4)
        continue;
    console.log(i);
}

for (let i = 1; i <= 10; i++) {
    if (i === 4)
        break;
    console.log(i);
}



