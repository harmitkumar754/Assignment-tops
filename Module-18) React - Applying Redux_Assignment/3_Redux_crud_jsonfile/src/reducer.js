import { createSlice } from '@reduxjs/toolkit'



const prodslice=createSlice({
    name:"Product",
    initialState:[],
    reducers:{
                 pushData:(state,action)=>{

                     state.push(action.payload)

                                         },
                 addProd:(state,action)=>{
                    fetch('http://localhost:1234/products',{
                        method:"post",
                        headers:{"content-type":"application/json"},
                        body: JSON.stringify(action.payload)
                    })
        
                    state.push(action.payload)
                 },
                 editProd:(state,action)=>{
                    fetch('http://localhost:1234/products/'+action.payload.id,{
                        method:"put",
                        headers:{"content-type":"application/json"},
                        body: JSON.stringify(action.payload)
                    })
        
                   
                 },
                 deleteProd:(state,action) =>{
                    fetch('http://localhost:1234/products/'+action.payload.id,{
                        method:"delete",
                       
                    })
                 }
                                                                

              }

})
export const {pushData,addProd,editProd, deleteProd} = prodslice.actions
export default prodslice.reducer;