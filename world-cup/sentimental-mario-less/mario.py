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
                height = het_int("Heigth: ")

                for in in range(1, height + 1):
                    print(" " * (height - i) + "#" * i)