import logo from './logo.svg';
import './App.css';
import LoginForm from './LoginForm';
import { createContext, useState } from 'react';
import Register from './Register';
import { BrowserRouter, Route, Routes } from 'react-router-dom';

export const themecontex=createContext()
function App() {
 
  const[theme,settheme]=useState("dark")
  const gettheme=(val)=>{
   settheme(val)
   console.log(val)
  }
  return (
    <div >
      <themecontex.Provider value={theme} >
     
    <BrowserRouter>
    <Routes>
      <Route path='/' element={<LoginForm passtheme={gettheme}></LoginForm>}></Route>
      <Route path='/Register' element={<Register></Register>}></Route>
    </Routes>
    </BrowserRouter>


      </themecontex.Provider>
    
    </div>
  );
}

export default App;
