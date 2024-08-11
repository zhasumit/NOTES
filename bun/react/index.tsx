import React from "react"
import { createRoot } from "react-dom"
const root = createRoot(document.getElementById("root"));

const App = () => {
    const [count, setCount] = React.useState(0);
    return (
        <div>
            <h2>{count}</h2>
            <button onClick={() => setCount((c) => c + 1)} >+</button>
            <button onClick={() => setCount((c) => c - 1)} >-</button>
        </div>
    );
}

root.render(<App />);