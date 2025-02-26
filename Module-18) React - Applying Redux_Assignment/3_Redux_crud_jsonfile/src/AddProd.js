import React, { useState } from 'react'
import { useDispatch } from 'react-redux'
import { Link, useNavigate } from 'react-router-dom'
import { addProd } from './reducer'

function AddProd() {
    const [name,setname] = useState("")
    const [price,setprice] = useState("")

    const dispatch = useDispatch()

    const navigate = useNavigate()


    const handleAdd =(e)=>{

        e.preventDefault()

        dispatch(addProd({name,price}))

        navigate('/')
        window.location.reload()
    }
  return (
    <div>
        <Link to="/" className='btn btn-outline-primary my-3'>Go Back</Link>
       <form onSubmit={handleAdd}>
       <table className='table table-hover table-dark'>
            <thead>
                <tr>
                    <th colSpan={2}>Add Product</th>
                </tr>

            </thead>
            <tbody>
                <tr>
                    <td>Enter Product Name : </td>
                    <td><input type='text'  value={name}  onChange={(e)=>{setname(e.target.value)}}/> </td>
                </tr>
                <tr>
                    <td>Enter Product Price : </td>
                    <td><input type='text'  value={price} onChange={(e)=>{setprice(e.target.value)}}/> </td>
                </tr>
              
                <tr  className='text-center'>
                   <td colSpan={2}><button className='btn btn-success '>Add Product</button></td> 
                </tr>
            </tbody>
        </table>
       </form>
    </div>
  )
}


export default AddProd