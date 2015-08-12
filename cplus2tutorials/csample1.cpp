// cplus2tutorials.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int a, b, c, x;
	cout << "Find the largest number from 3 different numbers: " << endl;
	cout << "Enter your 1st number please: " << endl;
	cin >> a;
	cout << "Then your 2nd number please: " << endl;
	cin >> b;
	cout << "And your last number please: " << endl;
	cin >> c;

	if (a > b){
		if (c > a){
			x = c;
		}
		else{
			x = a;
		}
	}
	else{
		if (c > b){
			x = c;
		}
		else{
			x = b;
		}
	}
	cout << "The largest number is: " << x << endl;
	return 0;
}

