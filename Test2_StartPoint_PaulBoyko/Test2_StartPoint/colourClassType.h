#pragma once

class colourClassType
{
public:
	
	void setRedValue(int inRValue);
	//Function to set the red component for the colour
	//PostCondition: rValue is set to inRValue

	void setGreenValue(int inGValue);
	//Function to set the green component for the colour
	//PostCondition: gValue is set to inGValue

	void setBlueValue(int inBValue);
	//Function to set the blue component for the colour
	//PostCondition: bValue is set to inBValue

	int getRedValue() const;
	//Function to return the red component of the colour.     
    //Postcondition: The value of rValue is returned.

	int getGreenValue() const;
	//Function to return the green component of the colour.     
    //Postcondition: The value of gValue is returned.
	
	int getBlueValue() const;
	//Function to return the blue component of the colour.     
    //Postcondition: The value of bValue is returned.

	void printColour() const;
	//Function to output the colour in the form RGB (RED, GREEN, BLUE).

	colourClassType();
	//Constructor to set the default values for the RGB member variables (rValue, gValue, bValue). 

	colourClassType( int inRValue, int inGValue, int inBValue);
	//The member variables rValue, gValue and bValue are set according to the parameters
	//Postcondition: rValue = inRValue; gValue = inGValue; bValue = inBValue;

protected:
	int rValue;  //holds the red component for an RGB colour
	int gValue;  //holds the green component for an RGB colour
	int bValue;  //holds the blue component for an RGB colour
};


