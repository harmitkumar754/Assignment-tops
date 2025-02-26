import React from 'react'
import { Provider } from 'react-redux'
import { store2 } from './Store2'
import TodoList from './TodoList'

export default function Q2Home() {
  return (
    <div>
        <Provider store={store2}>
          <TodoList/>
        </Provider>
    </div>
  )
}
