import React from "react";
import "./styles/app.scss";
const App = () => {
    return (
        <div>
            App
            <div className="box">A</div>
            <p>
                <span className="smallBox">A</span>
                <span className="smallBox darkBox">
                    <span>B</span>
                </span>
                <span className="smallBox">E</span>
            </p>
            <div className="productCard">
                <h2>Smaple Product</h2>
                <a href="#">sample Link</a>
            </div>
            <button>Button</button>
            <br />
            <br />
            <p className="buttonLikePara">
                Lorem ipsum dolor sit amet consectetur?
            </p>

            <button className="customButton">mixin button</button>
        </div>
    );
};

export default App;
