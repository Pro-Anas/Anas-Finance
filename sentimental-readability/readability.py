# TODO
text = "Your text goes here"  # Replace this with the actual text
letters = 0
words = 1
sentences = 0

for i in text:
    if i.isalpha():
        letters += 1
    elif i == " ":
        words += 1
    elif i in [".", "!", "?"]:
        sentences += 1

index = 0.0588 * (letters / words * 100) - 0.296 * (sentences / words * 100) - 15.8

if index < 1:
    print("Before Grade 1")
elif index >= 16:
    print("Grade 16+")
else:
    print("Grade", round(index))

