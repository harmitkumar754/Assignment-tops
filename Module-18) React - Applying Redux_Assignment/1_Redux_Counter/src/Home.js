import React from 'react'
import { useDispatch, useSelector } from 'react-redux'
import { decrement, increment } from './Reducer';


function Home() {
    const count=useSelector(v=>v.data.value)
    const dispatch=useDispatch();
const incriment = () => {
 dispatch(increment({type:'INCREMENT'}))
}
const decriment = () => {
 dispatch(decrement({type:'DECREMENT'}))
}
  return (
    <div>
        <button onClick={decriment}>-</button>
        <span>{count}</span>
        <button onClick={incriment}>+</button>
    </div>
  )
}

export default Home