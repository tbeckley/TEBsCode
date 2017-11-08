#include<cmath>
#include<iostream>
#include<ctime>
#include<fstream>
#include<string.h>

int main()
{
    // open input file stream
    ifstream infile("marks.txt");
    if (infile.fail())
    {
        cout << "failed to open marks.txt." << endl;
        exit(1);
    } // open output file stream
    ofstream outfile("grades.txt");
    if (outfile.fail())
    {
        cout << "Error opening output file grades.txt" << endl;
        exit(1);
    } // set output stream formatting
    outfile.setf(ios::fixed);
    outfile.precision(1);
    process_grades(infile, outfile);
    infile.close();
    outfile.close();
    return 0;
}