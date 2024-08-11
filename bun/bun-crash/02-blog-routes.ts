const server = Bun.serve({
    port: process.env.PORT || 8000,
    fetch(req) {
        const url = new URL(req.url);
        if (url.pathname === "/") return new Response("🏠");
        if (url.pathname === "/about") return new Response("🤗");
        return new Response("4️⃣0️⃣4️⃣");
    },
});

console.log(`Server up!! http://localhost:${server.port}/`);
