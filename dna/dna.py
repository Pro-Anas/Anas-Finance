import csv
import sys

def longest_match(sequence, subsequence):
    """Returns length of the longest run of subsequence in sequence."""
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    for i in range(sequence_length):
        count = 0
        while True:
            start = i + count * subsequence_length
            end = start + subsequence_length
            if sequence[start:end] == subsequence:
                count += 1
            else:
                break
        longest_run = max(longest_run, count)

    return longest_run

def main():
    if len(sys.argv) != 3:
        print("Usage: python dna.py data.csv sequence.txt")
        sys.exit(1)

    # Read database file
    with open(sys.argv[1], "r") as database_file:
        reader = csv.DictReader(database_file)
        database = [row for row in reader]

    # Read DNA sequence file
    with open(sys.argv[2], "r") as sequence_file:
        sequence = sequence_file.read()

    # Find longest match of each STR in DNA sequence
    str_counts = {}
    for key in database[0]:
        if key != "name":
            str_counts[key] = longest_match(sequence, key)

    # Check database for matching profiles
    for row in database:
        match = True
        for key in row:
            if key != "name":
                if int(row[key]) != str_counts[key]:
                    match = False
                    break
        if match:
            print(row["name"])
            return

    print("No Match")

if __name__ == "__main__":
    main()
