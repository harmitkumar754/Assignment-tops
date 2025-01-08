import React from 'react'

export default function Q8()
{
    const click =()=>
    {
        document.querySelector('.h2').innerHTML='"Clicked"';
    }
  return (
    <div>
            <h3><u>Question:8</u>  Create a button in a React component that, when clicked, changes the text 
            from"Not Clicked" to "Clicked!" using event handling.</h3>
            <h2 className='h2'>"Not Clicked"</h2>
            <button onClick={click}>click</button>

    </div>
  )
}
