#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <ctime>
#include <string>
#include "letterCount.h"

using namespace std;

int main (void)
{
	string inputFileName = "input.txt";
	cout << "Where are you inputing from? ";
	cin >> inputFileName;
	
	if(inputFileName.find(".txt")==-1)
		inputFileName.append(".txt"); // Adds file extension if they forgot it
	
	ifstream instream(inputFileName.c_str());
	ofstream outstream (outputFile.c_str());
	cout << "Fail: " << outstream.fail() << endl;
	cout << "Open: " << outstream.is_open() << endl;

	performCounting(instream, outstream);
	
	instream.close();
	outstream.close();
	
	system("pause");
	return 42; //The answer to it all :-)
}
