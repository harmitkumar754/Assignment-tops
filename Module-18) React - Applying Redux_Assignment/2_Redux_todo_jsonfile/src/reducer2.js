import { createSlice } from "@reduxjs/toolkit";

const TodoList = createSlice({
    name:"todo",
    initialState:[],
    reducers:{
        Addlist:(state,action)=>{
            
            state.push(action.payload)
        },
        deletelist:(state,action)=>{
            
            return state.filter((v)=>v.id!=action.payload)

        }
    }
})
export default  TodoList.reducer
export const {Addlist,deletelist} = TodoList.actions