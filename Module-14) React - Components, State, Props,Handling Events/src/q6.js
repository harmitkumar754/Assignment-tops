import React from 'react'

function Q6({data}) {
  return (
    <div>
         <h3><u>Question:6</u> Create a React component UserCardthat accepts name, age, and locationasprops
         and displays them in a card format.</h3>
         <div style={{ display: 'flex', flexWrap: 'wrap' ,gap:'10px'}}>
            {
                data.map((item)=>(
                    <div style={{ border: '1px solid red', background:'skyblue',padding:'20px' }}>
                        <h2>{item.name}</h2>
                        <h2>{item.age}</h2>
                        <h2>{item.location}</h2>
                    </div>
                ))
            }
            
         </div>
    </div>
  )
}

export default Q6