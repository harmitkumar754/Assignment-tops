import React,{useState} from 'react'
import { Link,useNavigate } from 'react-router-dom'

function Addstudent() 
{

const [name,setname]=useState('')
const [email,setemail]=useState('')
const navigate=useNavigate()
const handleAdd=(e)=>{
    e.preventDefault()
    const dataobj={name,email};
    fetch("http://localhost:5000/student",{
        method:'POST',
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
                        <h3> Add Student Data</h3>
                       
                    </div>

        <div className=''>
        <form onSubmit={handleAdd}>
    <div className="mb-3">
    <label  className="form-label">
      Enter Name
    </label>
    <input
      type="text"
      className="form-control"
      id="exampleInputPassword1"
      value={name}
      onChange={(e)=>{setname(e.target.value)}}
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
      onChange={(e)=>{setemail(e.target.value)}}
    />
    <div id="emailHelp" className="form-text">
      We'll never share your email with anyone else.
    </div>
  </div>
  
  
  <button type="submit" className="btn btn-primary">
    Submit
  </button> <Link to="/" className='btn btn-primary m-1'>Go Back</Link>
</form>

        </div>

                </div>
            </div>
        </div>
    </div>
  )
}


export default Addstudent