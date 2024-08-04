// Async/Await = Async = makes a function return a promise
//               Await = makes an async function wait for a promise
// Allows you write asynchronous code in a synchronous manner
// Async doesn't have resolve or reject parameters
// Everything after Await is placed in an event queue

function walkDog() {
    return new Promise((resolve, reject) => {
        // in async there is no resolve or reject, empty promise
        // async returns a promise object
        setTimeout(() => {
            const walkedDog = true;
            if (walkedDog) resolve("Walked the dog 🐕");
            else reject("Didn't walk the dog");
        }, 1500);
    });
}

function takeShower() {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            const tookShower = false;
            if (tookShower) resolve("Took a shower 🚿");
            else reject("Didn't take shower");
        }, 2000);
    });
}

function haveDinner() {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            const hadDinner = true;
            if (hadDinner) resolve("Had dinner 🍽️");
            else reject("Didn't have dinner");
        }, 1000);
    });
}

async function doChores() {
    try {
        const walkedDog = await walkDog();
        console.log(walkedDog);

        const tookShower = await takeShower();
        console.log(tookShower);

        const hadDinner = await haveDinner();
        console.log(hadDinner);
        console.log("Done with day");
    } catch (err) {
        console.log(err);
    }
}

doChores();
