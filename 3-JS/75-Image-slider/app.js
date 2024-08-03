const slides = document.querySelectorAll(".slides img");
let index = 0;
let intervalId = null;

document.addEventListener("keydown", (e) => {
    if (e.key === "ArrowRight") nextSlide();
    else if (e.key === "ArrowLeft") prevSlide();
});

document.addEventListener("DOMContentLoaded", initialiseslide);
function initialiseslide() {
    if (slides.length > 0) {
        slides[index].classList.add("displaySlide");
        intervalId = setInterval(nextSlide, 10000);
    }
}
function showslide(ind) {
    if (ind > slides.length) index = 0;
    else if (ind < 0) index = slides.length - 1;
    slides.forEach((slide) => slide.classList.remove("displaySlide"));
    slides[index].classList.add("displaySlide");
}
function prevSlide() {
    index--;
    showslide(index);
}
function nextSlide() {
    index++;
    showslide(index);
}
