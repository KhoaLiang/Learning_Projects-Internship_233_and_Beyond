import React, { useState, useEffect } from 'react';

const url = 'https://api.github.com/users';

// second argument

const UseEffectFetchData = () => {
  const [users, setUsers] = useState([]);
  //async function to fetch data
  //in this case, we are fetching data from github users
  //we are using useEffect to fetch data when the component mounts
  //by using async await, we are waiting for the data to be fetched
  //then we are setting the data to the state
  const getUsers = async () => {
    //fetch data by using fetch api and store it in response
    //we used await to wait for the response
    const response = await fetch(url);

    //we used await to wait for the data to be converted to json
    const users = await response.json();
    setUsers(users);
    // console.log(users);
  };

  useEffect(() => {
    getUsers();
  }, []);
  return (
    <>
      <h3>github users</h3>
      <ul className='users'>
        {users.map((user) => {
          const { id, login, avatar_url, html_url } = user;
          return (
            <li key={id}>
              <img src={avatar_url} alt={login} />
              <div>
                <h4>{login}</h4>
                <a href={html_url}>profile</a>
              </div>
            </li>
          );
        })}
      </ul>
    </>
  );
};

export default UseEffectFetchData;
