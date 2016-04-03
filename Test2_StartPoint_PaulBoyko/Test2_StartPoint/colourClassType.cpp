#include <iostream>
#include "colourClassType.h"

using namespace std;

//------------------------------------------------------
void colourClassType::setRedValue(int inRValue)
{
	rValue = inRValue;
}

//------------------------------------------------------
void colourClassType::setGreenValue(int inGValue)
{
	gValue = inGValue;
}
	
//------------------------------------------------------
void colourClassType::setBlueValue(int inBValue)
{
	bValue = inBValue;
}
	
//------------------------------------------------------
int colourClassType::getRedValue() const
{
	return rValue;
}
	
//------------------------------------------------------
int colourClassType::getGreenValue() const
{
	return gValue;
}
	
//------------------------------------------------------
int colourClassType::getBlueValue() const
{
	return bValue;
}
	
//------------------------------------------------------
void colourClassType::printColour() const
{
	cout << "The RGB colour is (" << rValue << "," << gValue << "," << bValue << "). \n";
}

//------------------------------------------------------
colourClassType::colourClassType()
{
	rValue = 0;
	gValue = 0;
	bValue = 0;
}

//------------------------------------------------------
colourClassType::colourClassType(int inRValue, int inGValue, int inBValue)
{
	rValue = inRValue;
	gValue = inGValue;
	bValue = inBValue;
}
	