// gives the nesting (objects inside of another object)
const person1 = {
    fullName: "Spongebob Squarepants",
    age: 25,
    gender: "male",
    hobbies: ["reading", "cooking", "gardening"],
    address: {
        street: "321 Pearl Street",
        city: "Bikini bottom",
        state: "Atari",
        zip: "741343",
        country: "International Water"
    },
}

displayPerson = (userObject) => {
    for (const [key, value] of Object.entries(userObject))
        console.log(`${key}: ${value}`);

    // for the address properties
    for (let property in userObject.address)
        console.log(userObject.address[property]);
}

displayPerson(person1);




