// Menu.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <iomanip>
using namespace std;

void mainMenu();
int main()
{
	
	mainMenu();



    return 0;
}

void mainMenu()
{
	int selection;

	cout << "\t\t\t\t _" << endl;
	cout << "\t\t\t\t| |       _____     _           _     _" << endl;
	cout << "\t\t\t\t| |      |_   _|___| |         | |   (_)" << endl;
	cout << "\t\t\t\t| |__   _,_| |_   _| | ___  ___| |__  _ _ _" << endl;
	cout << "\t\t\t\t|  _ \\/  _ | | | | | |/ _ \\/ __|  _ \\| |  _'\\ " << endl;
	cout << "\t\t\t\t| |_) | (_|| | | | | |  __/\\\__\\| | | | | |_) |" << endl;
	cout << "\t\t\t\t|_.__\/ \\_,_|_| |_| |_|____||__/|_| |_|_|  __/" << endl;
	cout << "\t\t\t\t		                       | |" << endl;
	cout << "\t\t\t\t		                       |_|" << endl;

	cout << "\n\t\t\t\tPlease make a selection from below" << endl;
	cout << "\n\t\t\t\t1. Instructions for playing battleship" << endl;
	cout << "\t\t\t\t2. Start new game" << endl;
	cin >> selection;

	switch (selection)
	{
	case 1:
		break;
	case 2:
		break;
	default: cout << "you have made an invalid selection." << endl;
		break;
	}
}
