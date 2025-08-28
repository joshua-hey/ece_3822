/*
Lab 00

Description: <a brief description of what this file does>

@Author: <your name>
@Contact: <your email>
@Date: <the date>

Example:
    This file can be compiled by typing:
    <tell me what to type at the command line to get this file to compile>

    This file can be run by typing:
    <tell me what to type at the command line to get this file to run>

Sources: 
    List any sources you used for help
    This includes classmates, text books, the internet, and AI
*/


#include<iostream>
#include<fstream>
using namespace std;

/*
    Read in all the values from the file. Keep a running sum and then
    compute the average by dividing by the number of values in the file.

    Print the average value with two decimal places.
*/

int main(int argc, char** argv){

    // step 0 - you can ignore this bit
    string filename = "/data/courses/ece_3822/current/lab_00/data.txt";
    if (argc>1)
        filename = argv[1];

    // step 1 init variables
    int s = 0;
    int n = 0;
    double avg = 0;
    string line;
    int val;

    // step 2 open file
    ifstream file_id(filename);
    
    // step 3 read values from file
    // this is just an example to demonstrate syntax
    while (getline(file_id,line)){
        val = stof(line);
    }

    // step 4 print value
    cout << "The average value is " << avg << endl;

    file_id.close();

    return 0;
}
