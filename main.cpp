/** 
* \file     main.cpp (in debugExample)
* \author   Stephen Graham
* \date     2022-09-21
* \brief    Demonstration program for interactive debugging
* \todo     Debug this program
**/
#include <iostream>
using namespace std;

void instructions(); // prototype

int main() {
	double dAverage = 0.0;
	int score = 0, totalScores = 0;
	int counter = 0;

	instructions();
	cout << "Enter a score out of 100 (enter a negative number to stop):";

	do {
		cin >> score;
		totalScores += score;
		counter++;
		cout << "Enter another score out of 100 (enter a negative number to stop):";
	} while (score != -1);

	dAverage = totalScores / counter;

	cout << "The average score for ";
	cout << counter;
	cout << " students is ";
	cout << dAverage;
	cout << endl;

	return 0;
}

void instructions() {
	cout << "This program will calculate the average score on a test" << endl;
	cout << "When you first try this code, it will have some bugs in it.\n";
	cout << "We will use this sample code to try interactive debugging." << endl;
	return;
}