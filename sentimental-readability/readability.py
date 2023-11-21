def calculate_readability(text):
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
        return "Before Grade 1"
    elif index >= 16:
        return "Grade 16+"
    else:
        return f"Grade {round(index)}"

# Prompt the user to enter a text
user_input_text = input("Enter a text to analyze its readability level: ")
readability_level = calculate_readability(user_input_text)
print(readability_level)


