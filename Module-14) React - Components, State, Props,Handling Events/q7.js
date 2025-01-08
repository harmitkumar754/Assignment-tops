import React, { Component } from 'react'

class Q7 extends Component {
    state={num:1};
        
    Inc=()=>
    {
        this.setState({num:this.state.num+1})
        
    }
    render()
    {
       
        return (
            <div>
                 <h3><u>Question:7</u>  Create a Countercomponent with a button that increments a count value using
                 React state. Display the current count on the screen.</h3>
                 <h2>{this.state.num}</h2>
                 <button onClick={this.Inc}>+</button>
            </div>
          )
    }

 
}

export default Q7