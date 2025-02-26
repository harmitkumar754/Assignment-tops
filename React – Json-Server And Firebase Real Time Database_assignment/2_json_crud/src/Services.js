import React from 'react'
import { BrowserRouter, Route, Routes, Link, Outlet   } from 'react-router-dom'

function Services() {
  return (
    <div>
       
        <h2>Services</h2>
        <Link className='btn btn-info m-1' to="/services/ServicesA">ServiceA</Link>
        <Link className='btn btn-info m-1' to="/services/ServicesB">ServiceB</Link>
        <Outlet/>
    </div>
  )
}

export default Services