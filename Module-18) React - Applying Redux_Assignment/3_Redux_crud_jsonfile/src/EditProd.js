import React, { useEffect, useState } from 'react'
import { useDispatch } from 'react-redux'
import { Link, useNavigate, useParams } from 'react-router-dom'
import { editProd } from './reducer'

function EditProd() {
    const {id}=useParams()
    const [name,setname] = useState("")
    const [price,setprice] = useState("")

    const dispatch = useDispatch()
    const navigate = useNavigate()

    useEffect(()=>{
        fetch("http://localhost:1234/products/"+id)
        .then((res)=>{return res.json()})
        .then((data)=>{setname(data.name);setprice(data.price)})
    },[id])
    const handleEdit =(e)=>{

        e.preventDefault()

        dispatch(editProd({id,name,price}))

        navigate('/')
        window.location.reload()
    }
  return (
    <div>
    <Link to="/" className='btn btn-outline-primary my-3'>Go Back</Link>
   <form onSubmit={handleEdit}>
   <table className='table table-hover table-dark'>
        <thead>
            <tr>
                <th colSpan={2}>Edit Product</th>
            </tr>

        </thead>
        <tbody>
            <tr>
                <td>Enter Product Name : </td>
                <td><input type='text' value={name}  onChange={(e)=>{setname(e.target.value)}}/> </td>
            </tr>
            <tr>
                <td>Enter Product Price : </td>
                <td><input type='text' value={price} onChange={(e)=>{setprice(e.target.value)}}/> </td>
            </tr>
          
            <tr  className='text-center'>
               <td colSpan={2}><button className='btn btn-success '>Save Changes</button></td> 
            </tr>
        </tbody>
    </table>
   </form>
</div>
  )
}

export default EditProd