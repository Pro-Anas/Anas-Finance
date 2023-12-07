from flask import Flask, render_template,request

app = Flask(_name_)


@app.route("/")
def index():
    return "hello, world"
