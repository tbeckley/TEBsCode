#include <iostream>
#include <fstream>
#include "matrixmath.h"
using namespace std;

int main(void)
{
    ifstream infile("matrices.txt");
    if (infile.fail())
    {
        cout << "failed to open matrices.txt." << endl;
        exit(1);
    }

    ofstream outfile("resultant.txt");
    if (outfile.fail())
    {
        cout << "Error opening output file resultant.txt" << endl;
        exit(1);
    }

    outfile.setf(ios::fixed);
    outfile.precision(1);

    calc_result(infile, outfile);

    infile.close();
    outfile.close();

    system("pause");
    return 0;
}