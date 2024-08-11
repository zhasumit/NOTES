const fileContents = await Bun.file("output.txt");
console.log("Response:", fileContents);
console.log("Content:", await fileContents.text());
console.log(`size: ${await fileContents.size} bytes`);
console.log("Stream:", await fileContents.stream());
console.log("Stream:", await fileContents.arrayBuffer());
