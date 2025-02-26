import React, { useEffect, useState } from "react";


function FetchData() {
  const [users, setUsers] = useState([]);

  useEffect(() => {
    fetch("https://jsonplaceholder.typicode.com/users")
      .then((res) => res.json())
      .then((data) => setUsers(data))
      .catch((error) => console.error("Error fetching data:", error));
  }, []);

  return (
    <div className="container mt-4">
        <h3>task:1=Create a React component that fetches data from a public API (e.g., a list of
            users)and displays it in a table format.</h3>
      <h2 className="text-center mb-4">User List</h2>
      <div className="table-responsive">
        <table className="table table-bordered table-hover">
          <thead className="thead-dark">
            <tr>
              <th>ID</th>
              <th>Name</th>
              <th>Username</th>
              <th>Email</th>
              <th>Address</th>
              <th>Phone</th>
              <th>Website</th>
            </tr>
          </thead>
          <tbody>
            {users.map((user) => (
              <tr key={user.id}>
                <td>{user.id}</td>
                <td>{user.name}</td>
                <td>{user.username}</td>
                <td>{user.email}</td>
                <td>
                  {user.address.street}, {user.address.city}, {user.address.zipcode}
                </td>
                <td>{user.phone}</td>
                <td>
                  <a href={`http://${user.website}`} target="_blank" rel="noopener noreferrer">
                    {user.website}
                  </a>
                </td>
              </tr>
            ))}
          </tbody>
        </table>
      </div>
    </div>
  );
}

export default FetchData;
