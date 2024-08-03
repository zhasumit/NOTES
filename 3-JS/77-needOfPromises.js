function walkDog(callback) {
    setTimeout(() => {
        console.log("Walked the dog 🐕");
        callback();
    }, 5000);
}

function takeShower(callback) {
    setTimeout(() => {
        console.log("Took a shower 🚿");
        callback();
    }, 2000);
}
function haveDinner() {
    setTimeout(() => {
        console.log("Had dinner 🍽️");
    }, 1000);
}

walkDog(() => takeShower(() => haveDinner(() => console.log("Done with day"))));
// if alot of tasks are there -> a pyramid of doom is formed
// any one task fails -> whole day will fail
