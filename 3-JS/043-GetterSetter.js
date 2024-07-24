// getter : makes property readable
// setters : makes property writable

// used to VALIDATE a value at Read/write

// underscore before variable : private properties
class Rectangle {
    constructor(width, height) {
        this.width = width;
        this.height = height;
    }

    set width(newWidth) {
        (newWidth > 0) ?
            this._width = newWidth :
            console.error("Width should be positive");
    }
    set height(newHeight) {
        (newHeight > 0) ?
            this._height = newHeight :
            console.error("Height should be positive");
    }
    get width() { return this._width.toFixed(2); }
    get height() { return this._height.toFixed(2); }

    // access some properties using getters and setters (even if it is not there)
    get area() { return (this._width * this._height).toFixed(2); }
    get perimeter() { return (2 * (this._width + this._height)).toFixed(2); }
    get diagonal() { return Math.sqrt(this._width ** 2 + this._height ** 2).toFixed(2); }
}

// const rectangle1 = new Rectangle(-1000, "pizza"); // without getters and setters
const rectangle2 = new Rectangle(1000, 2000); // with getters and setters
console.log(rectangle2.width);
console.log(rectangle2.height);

rectangle2.width = 5000;
rectangle2.height = 4000;

// if the changes are valid then it will be updated otherwise it will throw an error.
console.log(rectangle2.width);
console.log(rectangle2.height);

rectangle2.height = -1000; // this will throw an error
rectangle2.width = -1000; // this will throw an error
console.log(rectangle2.width);
console.log(rectangle2.height);

// if we access private properties directly then it will not throw an error
rectangle2._height = -1000;
rectangle2._width = -1000;
console.log(rectangle2.width);
console.log(rectangle2.height);



const rectangle3 = new Rectangle(2000, 3000);
console.log(rectangle3.area);
console.log(`Area      ${rectangle3.area}`);
console.log(`Perimeter ${rectangle3.perimeter}`);
console.log(`Diagonal  ${rectangle3.diagonal}`);



