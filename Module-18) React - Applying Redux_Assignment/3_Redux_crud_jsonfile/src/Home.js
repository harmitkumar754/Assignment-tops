import React from 'react'
import { useDispatch, useSelector } from 'react-redux'
import { Link } from 'react-router-dom'
import { deleteProd } from './reducer'

function Home() {
    const product = useSelector(state=>state.ProductData[0])
   const dispatch=useDispatch()
    const ondelete=(id)=>{
        dispatch( deleteProd({id}))
        window.location.reload()
    }
  return (
    <div>
        <div className=''>
            <h2>All Product Show</h2>
        <Link to="/addprod" className='btn btn-outline-primary my-3'>Add New Product</Link>
            <table className='table table-hover table-dark '>
                <thead>
                    <tr>
                        <th>Id</th>
                        <th>Name</th>
                        <th>Price</th>
                        <th>Action</th>

                    </tr>
                </thead>
                <tbody>
             {
                      product && product.map((item)=>(<tr key={item.id}>
                        <td>{item.id}</td>
                        <td>{item.name}</td>
                        <td>{item.price}</td>
                        <td><Link to={"/EditProd/"+ item.id} className='btn btn-outline-warning me-3'>Edit</Link>
                            <button onClick={()=>{ondelete(item.id)}} className='btn btn-outline-danger me-3'>Delete</button>
                        </td>
                        </tr>))
             } 
                    
                    
                </tbody>
            </table>

        </div>
    </div>
  )
}

export default Home