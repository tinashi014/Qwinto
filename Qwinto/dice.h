#include <iostream>

#include "colour.h"
using namespace std;


struct Dice
{
	//variables:
	const Colour colour;
	int faceValue;
	
		
	//methods (in requirement):
	
	//change face value randomly between 1 and 6 and return it
	int roll();
		
	//overload << operator to print Dice
    friend ostream& operator<<(ostream& _os, const Dice& _dice);
};
