const Btn = document.getElementById("btn");
const image = document.getElementById("image");

Btn.addEventListener("click", () => {
    if (image.style.visibility === "hidden") {
        image.style.visibility = "visible";
        Btn.textContent = "Hide";
        Btn.style.backgroundColor = "tomato";
    } else {
        image.style.visibility = "hidden";
        Btn.textContent = "UN hide";
        Btn.style.backgroundColor = "steelblue";
    }
});
