#include "rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle() 
{
	width = height = 1;
}

Rectangle::Rectangle(int w, int h)
{
	width = w;
	height = h;
}

Rectangle::Rectangle(int length)
{
	width = height = length;
}

bool Rectangle::isSquare() 
{
	if (width == height) return true;
	else false;
}

int main() 
{
	Rectangle rec1;
	Rectangle rec2(5,3);
	Rectangle rec3(5);

	if (rec1.isSquare()) cout << "true";
	if (rec2.isSquare()) cout << "true";
	if (rec3.isSquare()) cout << "true";
}
