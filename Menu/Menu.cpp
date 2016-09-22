// Menu.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <iomanip>
#include <windows.h> // using windows.h header for coord and handle to be used with console


using namespace std;




void mainMenu();
//void cursorLocation(int, int);
//void gotoxy(int, int);
void battleshipLogo();
void settings();
void removeBlinkingCursor(HANDLE);

int main()
{
	HANDLE window = GetStdHandle(STD_OUTPUT_HANDLE);  // used handle to place cursor location within the console window. (windows console pointer)
	removeBlinkingCursor(window);
	system("color 17");
	mainMenu();
	

    return 0;
}

void mainMenu()
{
	system("cls");
	int selection;
	
	battleshipLogo();
	cout << "\t\t\t\t\t\tMAIN MENU" << endl;
	cout << "\n\t\t\t\tPlease make a selection from below" << endl;
	cout << "\n\t\t\t\t1. Instructions for playing battleship" << endl;
	cout << "\t\t\t\t2. Settings" << endl;
	cout << "\t\t\t\t3. Start new game" << endl;
	cin >> selection;	

	switch (selection)
	{
	case 1: 
		break;
	case 2: settings();
		break;
	default: cout << "you have made an invalid selection." << endl;
		break;
	}
}

// working on having a cursor to move down selections with arrow keys on keyboard

//void gotoxy(int x, int y)
//{
//	//HANDLE window = GetStdHandle(STD_OUTPUT_HANDLE);  // used handle to place cursor location within the console window
//
//	_COORD location;                        // coord for providing the x y cordinance, to be used in console
//	location.X = x;
//	location.Y = y;
//	
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), location);
//}

void battleshipLogo()
{
	cout << "\t\t\t\t _" << endl;
	cout << "\t\t\t\t| |       _____     _           _     _" << endl;
	cout << "\t\t\t\t| |      |_   _|___| |         | |   (_)" << endl;
	cout << "\t\t\t\t| |__   _,_| |_   _| | ___  ___| |__  _ _ _" << endl;
	cout << "\t\t\t\t|  _ \\/  _ | | | | | |/ _ \\/ __|  _ \\| |  _'\\ " << endl;
	cout << "\t\t\t\t| |_) | (_|| | | | | |  __/\\\__\\| | | | | |_) |" << endl;
	cout << "\t\t\t\t|_.__\/ \\_,_|_| |_| |_|____||__/|_| |_|_|  __/" << endl;
	cout << "\t\t\t\t		                       | |" << endl;
	cout << "\t\t\t\t		                       |_|" << endl;
}

void settings()
{
	system("cls");
	int color;

	battleshipLogo();

	cout << "\t\t\t\t\t\tSETTINGS" << endl;
	cout << "\n\t\t\t\t\tSelect the colors for your game" << endl;
	cout << "\n\t\t\t\t\t1. White on black" << endl;
	cout << "\t\t\t\t\t2. Blue on green" << endl;
	cout << "\t\t\t\t\t3. White on blue" << endl;
	cout << "\t\t\t\t\t4. Red on black" << endl;
	cout << "\t\t\t\t\t5. black on red" << endl;
	cout << "\t\t\t\t\t6. Return to main menu" << endl;
	cin >> color;

	switch (color)
	{
	case 1: system("color 07");
		break;
	case 2: system("color 2b");
		break;
	case 3: system("color 17");
		break;
	case 4: system("color 04");
		break;
	case 5: system("color 40");
		break;
	case 6: mainMenu();
		break;
	default: cout << "You have made an invalid selection" << endl;
		break;
	}
	mainMenu();
}

void removeBlinkingCursor(HANDLE window)
{
	CONSOLE_CURSOR_INFO cursorState;
	GetConsoleCursorInfo(window, &cursorState);
	cursorState.bVisible = false;
	SetConsoleCursorInfo(window, &cursorState);
}
