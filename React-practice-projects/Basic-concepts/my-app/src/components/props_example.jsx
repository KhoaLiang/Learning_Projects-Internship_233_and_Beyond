import React from 'react'; // Import React library for creating components

// User component: Renders information for a single user
function User({ name, age }) {
  return (
    <div>
      <h2>{name}</h2>
      <p>Age: {age}</p>
    </div>
  );
}

// UserList component: Renders a list of User components based on an array of users
function UserList({ users }) {
  return (
    <div>
      {users.map((user) => (
        <User key={user.id} name={user.name} age={user.age} /> // Render a User component for each user
      ))}
    </div>
  );
}

// App component: Defines the main application structure and renders the UserList component
function Props_Example() {
  const usersData = [
    { id: 1, name: 'Alice', age: 30 },
    { id: 2, name: 'Bob', age: 25 },
    { id: 3, name: 'Charlie', age: 35 },
  ];

  return (
    <div>
      <UserList users={usersData} />  {/* Pass user data as a prop to UserList */}
    </div>
  );
}

export default Props_Example;
