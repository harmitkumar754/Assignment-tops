import './App.css';
import { BrowserRouter, Route, Routes } from 'react-router-dom';
import Home from './Home';
import AddProd from './AddProd';
import EditProd from './EditProd';
import { useDispatch } from 'react-redux';
import { useEffect } from 'react';
import { pushData } from './reducer';

function App() {
  const dispatch = useDispatch();

  useEffect(()=>{
    fetch('http://localhost:1234/products')
    .then((res)=>{ return res.json()})
    .then((data)=>{
      dispatch(pushData(data))    
    })
  })
  return (
    <div className="App">
     <BrowserRouter>
     <Routes>
      <Route path='/' element={<Home/>}></Route>
      <Route path='/addprod' element={<AddProd/>}></Route>
      <Route path='/EditProd/:id' element={<EditProd/>}></Route>
     </Routes>
     </BrowserRouter>
    </div>
  );
}

export default App;
