// here we make server object
const server = Bun.serve({
    port: process.env.PORT || 8000,
    // port: Bun.env.PORT || 8000, //alternative
    fetch(req) {
        return new Response("Hello world from Bun");
    },
});

// $ bun --watch fileName.extension : like nodemon (watch mode)
// NO NEED of env package
console.log(`Server started on port ${server.port}`);
