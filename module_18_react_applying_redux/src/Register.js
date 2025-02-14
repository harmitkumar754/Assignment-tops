import React, { useContext, useState } from 'react'
import './Style.css';
import { themecontex } from './App';
import { Link } from 'react-router-dom';

function Register() {

  const theme=useContext(themecontex)
 
 console.log(theme)
  return (
  <>
  <div className='mainbox' >
  <div className="login-container" style={{background:(theme!="light")?"white":"black",color:(theme!="light")?"black":"white"}}>
    <div className='text-end'>
      
     
   
   
    </div>
  
  <h4 className="text-center mb-3  "> Amazing Service</h4>
  
  <h5 className="text-center">Register in</h5>
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
      Create Account
    </button>
    <div className="text-center my-2">OR</div>
    <Link to="/" type="button" className="btn btn-success w-100">
       Have Alredy Account?
    </Link>
  </form>
</div>
  </div>
  

  </>
  )
}

export default Register