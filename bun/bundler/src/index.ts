import fetchUserData from "./githubAPI";

(async () => {
    const userData = await fetchUserData("zhasumit");
    document.querySelector("h1").innerHTML = JSON.stringify(userData);
})();

// for bundling we use $ bun build
