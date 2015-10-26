// PacmanGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Coordinate.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	Coordinate  a(5, -3), b(0, 0);
	cout << a.GetX() << endl;
	Coordinate c = a + b;
	cout << c.GetY() << endl;
	a += b;
	cout << a.GetX() << endl;
	if (a == b)
		cout << "OK" << endl;
	else
		cout << "So close" << endl;
}

