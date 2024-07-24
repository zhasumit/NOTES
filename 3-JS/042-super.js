// super : use the parent attributes and methods
//          this : this object refers to the current object
//          super : use the parent constructor (basically DRY (using lesser code))

class Animal {
    constructor(name, age) {
        this.name = name;
        this.age = age;
    }
    eat() { console.log(`${this.name} is eating.`); }
    move(speed) { console.log(`${this.name} is moving @${speed} KmPh.`); }
}

class Dog extends Animal {
    constructor(name, age, runSpeed) {
        super(name, age);   // this calls for parent constructor (DRY)
        this.runSpeed = runSpeed;
    }
    run() {
        console.log(`${this.name} can run `);
        super.move(this.runSpeed);
    }
}

class Fish extends Animal {
    constructor(name, age, swimSpeed) {
        super(name, age);   // this calls for parent constructor (DRY)
        this.swimSpeed = swimSpeed;
    }
    swim() {
        console.log(`${this.name} can swim `);
        super.move(this.swimSpeed);
    }
}

class Hawk extends Animal {
    constructor(name, age, flySpeed) {
        super(name, age);   // this calls for parent constructor (DRY)
        this.flySpeed = flySpeed;
    }
    fly() {
        console.log(`${this.name} can fly `);
        super.move(this.flySpeed);
    }
}

let hawk = new Hawk("Broody", 10, 100);
let dog = new Dog("Hank", 4, 30);
let fish = new Fish("Dory", 2, 20);

console.log(hawk.name); // Broody
console.log(hawk.age); // 10 
console.log(hawk.flySpeed); // 100 
hawk.eat(); // Broody is eating.

console.log(dog.name); // Hank
console.log(dog.age); // 4 
console.log(dog.runSpeed); // 30 
dog.eat(); // Hank is eating.

console.log(fish.name); // Dory
console.log(fish.age); // 2
console.log(fish.swimSpeed); // 20
fish.eat(); // Dory is eating.



// dog.move(10)
dog.run()
fish.swim()
hawk.fly()
