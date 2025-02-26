import { createSlice } from "@reduxjs/toolkit";

const counterslice = createSlice({
  name: 'user',
    initialState: {value:0 },
    reducers:{
        increment: (state) => { 
           
            state.value += 1;
        },
        decrement: (state) => {
            state.value -= 1;
        }
       
    }
      
});
export const {increment,decrement}=counterslice.actions;
export default counterslice.reducer;