// JSON = javascript object notation data-internchange format 
// // JSON is a syntax for storing and exchanging data.
// Used for exchanging data between a browser and a server.
// JSON file {key: value} or {value1, value2, value3}

// JSON.stringify() //converts a JavaScript object to a JSON string
// JSON.parse() //parses a JSON string, constructing the JavaScript value or object described by the string

async function fetchPerson() {
    try {
        const response = await fetch('person.json');
        const person = await response.json();
        console.log(person);
        let html = '';
        person.forEach((person) => {
            html += `<div class="person">
            <div class="name">${person.name}</div>
            <div class="age">${person.age}</div>
            <div class="city">${person.isEmployed}</div>`;
        });
        document.querySelector('body').innerHTML = html;
    } catch (error) {
        console.error('Error fetching person:', error);
    }
}

fetchPerson();

