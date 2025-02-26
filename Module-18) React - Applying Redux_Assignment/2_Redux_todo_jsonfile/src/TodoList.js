import React, { useState } from 'react';
import { useDispatch, useSelector } from 'react-redux';
import { Addlist, deletelist } from './reducer2';

export default function TodoList() {
    const [data, setData] = useState('');
    const list = useSelector((st) => st.xyz);
    const dispatch = useDispatch();

    const Deletedata = (id) => {
        dispatch(deletelist(id));
    };

    return (
        <div className="container mt-5">
            <div className="card shadow-lg p-4">
                <h2 className="text-center text-primary mb-4">Todo List</h2>
                <div className="input-group mb-3">
                    <input 
                        type="text" 
                        className="form-control" 
                        placeholder="Enter task..." 
                        value={data} 
                        onChange={(e) => setData(e.target.value)}
                    />
                    <button 
                        className="btn btn-primary" 
                        onClick={() => { 
                            dispatch(Addlist({ id: list.length + 1, name: data }));
                            setData('');
                        }}
                        disabled={!data.trim()}
                    >
                        Add Task
                    </button>
                </div>
                <div className="table-responsive">
                    <table className="table table-bordered table-hover">
                        <thead className="table-dark">
                            <tr>
                                <th>ID</th>
                                <th>Task</th>
                                <th>Action</th>
                            </tr>
                        </thead>
                        <tbody>
                            {list && list.length > 0 ? (
                                list.map((v) => (
                                    <tr key={v.id}>
                                        <td>{v.id}</td>
                                        <td>{v.name}</td>
                                        <td>
                                            <button 
                                                className="btn btn-danger btn-sm"
                                                onClick={() => Deletedata(v.id)}
                                            >
                                                Delete
                                            </button>
                                        </td>
                                    </tr>
                                ))
                            ) : (
                                <tr>
                                    <td colSpan="3" className="text-center text-muted">No tasks available</td>
                                </tr>
                            )}
                        </tbody>
                    </table>
                </div>
            </div>
        </div>
    );
}