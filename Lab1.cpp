// Lab1.cpp
// Sidney Jensen
// Need to read files and get count of numbers, along with first and last two numbers.

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;

int main()
{
	int count = 0;
	double temp, first = 0, second = 0, third = 0, fourth = 0;
	ifstream file;
	string filename;
	cin >> filename; //get filename
	file.open(filename); //open file
	if (file.is_open()) { //testing to see if open

		while(!file.fail()) { //checking to make sure it is working, and to end

				if (file >> temp) {	//reading a number from the file.
					count++;	//increasing the count
					if (count == 1) {	//if first number, put into first.
						first = temp;
					}
					else if (count == 2) {	//if second number, put into the second.
						second = temp;
					}
					else {
						third = fourth;	//takes the privous last value and puts it into second to last value
						fourth = temp;	//puts most recent value into the last value
					}
				}
			}
		file.close();	//closes file
		cout << "count: " << count << endl;
		cout << "first two: " << first << " and " << second << endl;
		cout << "last two: " << third << " and " << fourth << endl;	//prints all the info gained.
	}


	return 0;
}

