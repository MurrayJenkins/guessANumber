//============================================================================
// Name        : main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
using namespace std;

int getRandomNumber()
{
	int randomNumber = 10;

	return randomNumber;
}

int main() {

	int rand = getRandomNumber();
	int input;

	while (input != rand)
	{
		cout << "Enter a number between 1 and 100." << endl;
		cin >> input;


		if (input < rand)
		{
			cout << "It's a higher number." << endl;
		}
		else if (input > rand)
		{
			cout << "It's a lower number." << endl;
		}
		else
		{
			cout << "You did it!" << endl;
			break;
		}
	}



	return 0;
}
