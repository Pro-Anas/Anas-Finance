#def get_int(prompt):
    while True:
        try:
            number = int(input(prompt))
            if 1 <= number <= 8:
                return number
            else:
                print("Height must be between 1 and 8.")
        except ValueError:
            print("Invalid input. Please input a positive integer.")

def main():
    height = get_int("Height: ")

    for i in range(1, height + 1):
        print(" " * (height - i) + "#" * i)

if __name__ == "__main__":
    main()

