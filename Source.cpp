#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	//Initializing Variables
	int Input = 0, InputCopy = 0, Remainder = 0, Count = -1, Power = 0;

	//Taking Input
	cout << "Please Enter Any Positive Number:- ";
	cin >> Input;

	//Making A Duplicate Of Input
	InputCopy = Input;

	//While Loop To Revere The Number To Count Number Of Digits In Number
	while (Input>0)
	{
		Remainder = Input % 10;
		Input = Input / 10;
		Count++;
	}

	//While Loop To Segregate The Input
	while (Count >= 0)
	{
		Power = pow(10, Count);
		cout << InputCopy / Power << ",";
		InputCopy = InputCopy%Power;
		Count--;
	}

	_getch();
}
