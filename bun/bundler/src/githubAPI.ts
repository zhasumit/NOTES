import axios from "axios";
async function fetchUserData(user) {
    const res = await axios.get(`https://api.github.com/users/${user}`);
    return res.data;
}

export default fetchUserData;
