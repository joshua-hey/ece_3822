/*
Lab 00

Description: <This file outputs the average of the data in data.txt.>

@Author: <Joshua Hey>
@Contact: <joshua.hey@temple.edu>
@Date: <28.08.2025>

Example:
    This file can be compiled by typing:
    <g++ -o lab_00.out lab_00.cpp>

    This file can be run by typing:
    <./lab_00> 
    OR if you would prefer to upload and use a different data file (ex: mydata.txt):
    <./lab_00 mydata.txt>

Sources: 
    Stack Overflow
    cppreference.com
    Claude AI
*/

#include<iomanip>
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
    float s = 0;
    int n = 0;
    double avg = 0;
    string line;
    float val;

    // step 2 open file
    ifstream file_id(filename);
    
    // step 3 read values from file
    // this is just an example to demonstrate syntax
    while (getline(file_id,line)){
        val = stof(line);
        s += val;
        n++;
    }

    avg = s / n;

    // step 4 print value
    cout << "The average value is " << setprecision(2) << fixed << avg << endl;

    file_id.close();

    return 0;
}
