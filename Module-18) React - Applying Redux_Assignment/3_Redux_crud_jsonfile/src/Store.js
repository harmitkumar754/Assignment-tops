import { configureStore } from "@reduxjs/toolkit";
import reducer from "./reducer";

export const storeData = configureStore({
    reducer:{
        ProductData:reducer
    }
})