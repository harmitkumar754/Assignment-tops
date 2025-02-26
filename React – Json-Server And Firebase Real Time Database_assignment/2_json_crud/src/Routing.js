import React from 'react'
import { BrowserRouter, Route, Routes, Link   } from 'react-router-dom'
import Home1 from './home1'
import About1 from './About1'
import Services from './Services'
import ServicesA from './ServicesA'
import ServicesB from './servicesB'
import Addstudent from './Addstudent'
import View_Student from './View_Student.js';
import Edit_Student from './Edit_Student.js';


function Routing() {
  return (
    <div>
        <h1><u>Routing & Json Crud</u></h1>

    <BrowserRouter>
    <Link className='btn btn-primary m-1'  to="/">Home</Link>
    <Link className='btn btn-primary m-1' to="/About">About</Link>
    <Link className='btn btn-primary m-1' to="/services">Services</Link>
    <Routes>
        <Route path='/' element={<Home1/>}></Route>
        <Route path='/About' element={<About1/>}></Route>
        <Route path='/services' element={<Services/>}>
            <Route path='/services/ServicesA' element={<ServicesA/>}></Route>
            <Route path='/services/ServicesB' element={<ServicesB/>}></Route>
        </Route>
        <Route path='/Addstudent' element={<Addstudent/>}></Route>
        <Route path='/View_Student/:id' element={<View_Student/>} />
        <Route path='/Edit_Student/:id' element={<Edit_Student/>} />
    </Routes>
   
    </BrowserRouter>


    </div>
  )
}

export default Routing