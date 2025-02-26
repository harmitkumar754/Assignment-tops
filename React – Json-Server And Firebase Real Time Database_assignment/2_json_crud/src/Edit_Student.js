
import React, { useEffect, useState } from "react";
import { Link, useNavigate, useParams } from "react-router-dom";

function Edit_Student() {
    
    const {id} = useParams();
    console.log(id)
    const [name,setName] = useState('')
    const [email,setEmail] = useState('')
    useEffect(()=>{
        fetch('http://localhost:5000/student/'+id)
        .then((res)=>{return res.json()})
        .then((data)=>{
            setName(data.name)
            setEmail(data.email)
      })
    },[])

   
    const navigate=useNavigate()
    const handleEdit=(e)=>{
        e.preventDefault()
        const dataobj={name,email};
        fetch("http://localhost:5000/student/"+id,{
            method:'Put',
            headers:{"Content-Type":"application/json"},
            body:JSON.stringify(dataobj)
        })
        .then((res)=>{if(res)
          {
            navigate('/')
          }
        })
        // .then((v)=>{console.log(v)})
      }
  
    
  return (
    <div>
    <div className='container my-3'>
        <div className='row justify-content-center ' style={{boxShadow:'2px 2px 10px black'}}>
            <div className='col-xl-6 text-center'>
                <div>
                    <h3> Edit Student Data</h3>
                   
                </div>

    <div className=''>
    <form onSubmit={handleEdit}>
<div className="mb-3">
<label  className="form-label">
  Enter Name
</label>
<input
  type="text"
  className="form-control"
  id="exampleInputPassword1"
  value={name}
  onChange={(e)=>{setName(e.target.value)}}
/>
</div>

<div className="mb-3">
<label  className="form-label">
  Email address
</label>
<input
  type="email"
  className="form-control"
  id="exampleInputEmail1"
  aria-describedby="emailHelp"
  value={email}
  onChange={(e)=>{setEmail(e.target.value)}}
/>
<div id="emailHelp" className="form-text">
  We'll never share your email with anyone else.
</div>
</div>


<button type="submit" className='btn btn-success m-1'>Update</button> 
<Link to="/" className='btn btn-primary m-1'>Go Back</Link>
</form>

    </div>

            </div>
        </div>
    </div>
</div>
  )
}

export default Edit_Student