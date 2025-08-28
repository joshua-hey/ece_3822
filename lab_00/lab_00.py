'''
Lab 00

Description: <a brief description of what this file does>

@Author: <Joshua Hey>
@Contact: <joshua.hey@temple.edu>
@Date: <27.08.2025>

Example:
    This file can be run by typing
    <tell me what to type at the command line to get this file to run>

Sources: 
    List any sources you used for help
    This includes classmates, text books, the internet, and AI

Remember to include types in your method input/output
'''

import sys

def compute_average(nums):
    # compute the average of a list of numbers of arbitrary length

    # input: array of integers
    # returns: the floating point average of those numbers

    # YOUR CODE HERE
    return avg

def display_value(val):
    # display a floating point number with two significant digits

    # input: a single floating point value
    # returns: none

    # YOUR CODE HERE
    pass

def main(argv):

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