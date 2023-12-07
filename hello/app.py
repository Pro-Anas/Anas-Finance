from flask import Flask, render_template,request

app = Flask(__name__)


@app.route("/")
def index():
    if "name" in request.agrs:
        name = request.args["name"]
    else:
        name ="world"

    return render_template("index.html")

