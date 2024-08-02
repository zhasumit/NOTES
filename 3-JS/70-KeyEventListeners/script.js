// eventListener
// listens for specific events to create interactive web pages
// events : keydown (pressing some key)
// events : keyup (releasing some key)

const myBox = document.querySelector(".box");
const info = document.getElementById("desc");
document.addEventListener("keydown", function (event) {
    myBox.style.backgroundColor = "lightcoral";
    myBox.textContent = "🫤";
    console.log("Key pressed: " + event.key);
});

document.addEventListener("keyup", function (event) {
    myBox.textContent = "😄";
    myBox.style.backgroundColor = "lightblue";
    console.log("Key released: " + event.key);
    desc.textContent = event.key;
});

let x = 0,
    y = 0;
document.addEventListener("keydown", (event) => {
    if (event.key.startsWith("Arrow")) {
        switch (event.key) {
            case "ArrowUp":
                y -= 10;
                break;
            case "ArrowDown":
                y += 10;
                break;
            case "ArrowLeft":
                x -= 10;
                break;
            case "ArrowRight":
                x += 10;
                break;
        }
        myBox.style.top = `${y}px`
        myBox.style.left = `${x}px`
    }
});
