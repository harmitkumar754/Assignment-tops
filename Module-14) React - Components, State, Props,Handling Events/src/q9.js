import React, { useState } from 'react'

export default function Q9() {
    const[name,setname]=useState()
    const edit=(e)=>
    {
        setname(e.target.value)
    }
  return (
    <div>
         <h3><u>Question:9</u>  Create a form with an input field in React. Display the value of the input 
fielddynamically as the user types in it.</h3>

        <input type="text" value={name} onChange={edit}/>
        <h2>{name}</h2>
    </div>
  )
}
