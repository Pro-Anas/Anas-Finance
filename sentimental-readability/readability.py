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

     index = 0.0588 * (letters/words*100) - 0.296 * (sentences/words*100) - 15.8

        if index < 1:
            print("Before Grade 1")

        elif index >= 16:
            print("Grade 16+")

        else
            print("Grade ", round(index)
