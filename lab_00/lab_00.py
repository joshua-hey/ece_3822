'''
Lab 00

Description: <This file outputs the average of the data in data.txt>

@Author: <Joshua Hey>
@Contact: <joshua.hey@temple.edu>
@Date: <28.08.2025>

Example:
    This file can be run by in the course server by typing:
    python lab_00.py 
    OR if you would prefer to upload and use a different data file (ex: mydata.txt):
    python lab_00.py mydata.txt

Sources: 
    Claude AI
    Stack Overflow

Remember to include types in your method input/output
'''

import sys

def compute_average(nums: list[int]) -> float:

    # compute the average of a list of numbers of arbitrary length
    avg = sum(nums) / len(nums)
    return avg

def display_value(val: float) -> None:

    # display a floating point number with two significant digits
    print(f'{float(f"{val:.2g}"):g}') #found in stack overflow post


def main(argv: list[str]) -> None:

    # don't mess with this part
    filename = "/data/courses/ece_3822/current/lab_00/data.txt"
    if len(argv) > 1:
        filename = argv[1]

    # This is some demo code to show you how to read a list of integers out of a 
    # text file. There are other ways to do this but I like this one.
    with open(filename) as f:
        x = [int(line) for line in f]

    avg = compute_average(x)
    display_value(avg)    

if __name__=="__main__":
    main(sys.argv)