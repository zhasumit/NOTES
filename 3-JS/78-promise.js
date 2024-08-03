// in promises no need of callbacks
function walkDog() {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            const walkedDog = true;
            if (walkedDog) resolve("Walked the dog 🐕");
            else reject("Didn't walk the dog");
        }, 5000);
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

// we use method chaining
walkDog()
    .then((value) => {
        console.log(value);
        //after one tasks value do next task
        //same like callback hell with care for next thing
        return takeShower();
    })
    .then((value) => {
        console.log(value);
        // go for next task
        return haveDinner();
    })
    .then((value) => {
        console.log(value);
    })
    .catch((err) => console.log(err));
