const express = require('express');
const app = express();

app.use(express.static('public'));

app.get('/endpoint/', (req, res) => {
	res.send('Hello');
});

app.listen(8080);
