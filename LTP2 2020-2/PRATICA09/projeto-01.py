# A very simple Flask Hello World app for you to get started with...

from flask import Flask

app = Flask(__name__)

@app.route('/')
def hello_world():
    return 'Hello from Flask!'

@app.route('/ola')
def ola():
    return "Ola Mundo!\nMeu nome é Fabio Rodrigues da Silva!"

@app.route('/pagina')
def primerira_pagina():
    return """
    <!DOCTYPE html>
<html>
<head>
<title>Page Title</title>
</head>
<body>

<h1>This is a Heading</h1>
<p>This is a paragraph.</p>

</body>
</html>
    """
@app.route('/pagina2')
def segunda_pagina():
    return """
    <!DOCTYPE html>
<html>
<head>
<title>Meu Site umPouco Melhor</title>
</head>
<body>

<h1>Informações</h1>
<p>Mais detalhes no futuro!.</p>
<iframe width="560" height="315" src="https://www.youtube.com/embed/T-t-wLa7XHQ" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
</body>
</html>
    """
