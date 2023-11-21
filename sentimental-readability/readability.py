# TODO
from Cs50 import get_string

text = get_string("Text: ")

letters = 0
words = 1
setences = 0

for i in text:
    if i.isalpha():
        letters += 1
    elif i == " ":

        word +=1

    elif i == "," or i == "!" or i == "?":
        sentences += 1
