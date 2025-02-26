import React, {  useEffect, useState } from 'react'
import { Link, useParams } from 'react-router-dom'

function View_Student() {
    const {id} = useParams()
    
    const [stud, setstud] = useState([])
    useEffect(() => {
        fetch("http://localhost:5000/student/"+id)
            .then((r) => { return r.json() })
            .then((v) => { setstud(v) })
    }, [])
    
    return (
        <div>
            <div className='container my-3'>
                <div className='row justify-content-center ' style={{ boxShadow: '2px 2px 10px black' }}>
                    <div className='col-xl-6 text-center'>
                        <h3> View Student Data</h3>
                        <div className='text-center ' style={{ boxShadow: '2px 2px 10px black' }}>
                            <h3>Id : {stud.id}  </h3>
                            <h3>Name :  {stud.name} </h3>
                            <h3>Email :  {stud.email}</h3>
                        </div>
                        <Link to="/" className='btn btn-primary m-1'>Go Back</Link>
                    </div>

                </div>
            </div>
        </div>

    )
}

export default View_Student