from flask import Flask,render_template

app = Flask(__name__)

@app.route("/")    #homepage
def homepage():
    return render_template('index.html')


app.run(debug=True, port=5001)