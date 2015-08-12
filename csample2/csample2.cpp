// csample2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	float c, f;
	cout << "Convert Celsius to Fahrenheit: " << endl;
	cout << "Enter temperature in Celsius: " << endl;
	cin >> c;
	f = (c * (1.8)) + 32;
	cout << "This is equals to " << f << " Fahrenheit" << endl;
	return 0;
}

