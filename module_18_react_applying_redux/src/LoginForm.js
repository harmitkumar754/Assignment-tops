import React, { useContext, useState } from 'react'
import './Style.css';
import { Link } from 'react-router-dom';
import { themecontex } from './App';

function LoginForm({passtheme}) {

  const[theme,settheme]=useState("light")

  const themei=useContext(themecontex)

  const changetheme=(th)=>{

      settheme(th)
      passtheme(theme)
  }
  return (
  <>
  <div className='mainbox' >
  <div className="login-container" style={{background:(themei!="light")?"white":"black",color:(themei!="light")?"black":"white"}}>
    <div className='text-end'>
      {
           (theme=="light")? <i class="fa-solid fa-moon fs-3 " onClick={()=>changetheme("dark")}></i>: <i class="fa-solid fa-sun fs-3"  onClick={()=>changetheme("light")}></i> 
      }
     
   
   
    </div>
  
  <h4 className="text-center mb-3  "> Amazing Service</h4>
  
  <h5 className="text-center">Log in</h5>
  <form>
    <div className="mb-3">
      <label className="form-label">Email</label>
      <input
        type="email"
        className="form-control"
        placeholder="Enter your email"
      />
    </div>
    <div className="mb-3">
      <label className="form-label">Password</label>
      <input
        type="password"
        className="form-control"
        placeholder="Enter your password"
      />
    </div>
    <button type="submit" className="btn btn-primary w-100">
      Log in
    </button>
    <div className="text-center my-2">OR</div>
    <Link to="/Register" className="btn btn-success w-100">
       Create account
    </Link>
  </form>
</div>
  </div>
  

  </>
  )
}

export default LoginForm