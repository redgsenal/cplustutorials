// csample3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	int a, b, x, z;
	float t, v;
	cout << "Calculate the average value of the all numbers between two values:" << endl;
	cout << "Enter starting value: " << endl;
	cin >> a;
	cout << "Enter ending value: " << endl;
	cin >> b;

	if ((a > b) || (a == b) || (a < 1) || (b < 1)){
		cout << "Invalid value entry. Make sure the first value is smaller than the second value and both values are greater than zero." << endl;
		return 0;
	}
	x = a;
	t = 0;
	while (x < b){
		t = t + (x++);
	}
	v = t / (b - a);
	cout << "Total average: " << v << endl;

	cout << "Press enter to continue..." << endl;
	cin >> z;
	return 0;
}
