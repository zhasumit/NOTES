// inheritance is taking the methods and properties of one class and adding them to another class
class Animal {
    alive = true;
    eat() { console.log(`this ${this.name} eats`); }
    sleep() { console.log(`this ${this.name} sleeps`); }
}

class Dog extends Animal {
    name = "Dog";
    bark() {
        if (this.alive)
            console.log(`This ${this.name} barks... woof`);
        else
            console.log(`This ${this.name} is dead`);
    }
}

class Cat extends Animal {
    name = "Cat";
    meow() {
        if (this.alive)
            console.log(`This ${this.name} meows`);
        else
            console.log(`This ${this.name} is dead`);
    }
    // we donot need to write eat() or sleep() method as it is inherited from Animal class
}

const hachi = new Dog();
const siliya = new Cat();

hachi.eat();
siliya.eat();
hachi.bark();

siliya.meow();
siliya.sleep(); // inherited from Animal class
siliya.alive = false; // overridden property from Animal class
siliya.meow(); // will not print as it is overridden in Cat class
