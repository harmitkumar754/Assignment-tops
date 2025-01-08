import React, {Component} from 'react'

export default class Q3 extends Component
 {
    render()
    {
        return (
            <div>
                <h3><u>Question:3</u> Create a React component that renders the following JSX elements.</h3>
                <h4><u>Question:3(i)</u>  A heading with the text "Welcome to JSX".</h4>
                <h2>"Welcome to JSX"</h2>
                <h4><u>Question:3(ii)</u>  A paragraph explaining JSX with dynamic data (use curly braces to 
                    insertvariables).</h4>
                    <p>JSX (JavaScript XML) is a syntax extension for JavaScript used in React to describe what the UI should look like. It allows you to write HTML-like code directly in your JavaScript, making the code more readable and expressive. One of JSX's powerful features is its ability to incorporate dynamic data using curly braces {}. By placing variables, expressions, or functions inside these braces, you can dynamically render data in your UI. For example,
                         if you have a variable const name = "John";, you can use it in JSX like <h6>Hello, {"name"}!</h6>. This will dynamically display "Hello, John!" on the screen. Similarly, you can include more complex expressions, such as calculations or method calls, making JSX highly flexible for building dynamic and interactive interfaces.</p>
            </div>
          )
    }
 
}
