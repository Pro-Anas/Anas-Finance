# TODO
def get_int (prompt):

    while True:
        try:
            return int(input(prompt))
        except ValueError:
            print("Invalud input, Please input a positve integer,")

            height = get_int("Height: ")

            while height < 1 or height > 8:
                print ("Height must be between 1 and 8")
                height = get_int("Heigth: ")

                for i in range(1, height + 1):
                    print(" " * (height - i) + "#" * i)