#pragma once
#include <string>

#include "gameObjectType.h"
#include "colourClassType.h"

using namespace std;

//Paul Boyko March 30th 2016

//const to limit number of particle effect in string arrary
const int MAX_PARTICLES = 5;

class particleEffetType : public gameObjectType
{
	//public enum of particle effects allowed
	public:
		static enum effect { SPARKS, DUST, WATER_DROPS, ENERGY_BURST, BLOOD_DROPS };
	
	//privat datamembers of the particleEffectType class
	private:
		effect effectStyle;
		float duration;
		colourClassType colour;
		static string particles[MAX_PARTICLES];
		
	public:
		//public setter and getters
		effect GetEffectStyle() { return this->effectStyle; }
		void SetEffectStyle(effect style) { this->effectStyle = style; }
		float GetDuration() { return this->duration; }
		void SetDuration(float time) { this->duration = time; }
		colourClassType GetColour() { return this->colour; }
		void SetColour(colourClassType colour) { this->colour = colour; }

		//header for the display method
		void DisplayGameObj();

		//header for default constructor and destructor and parameterized constructor
		particleEffetType();
		particleEffetType(string name, int id, bool hasMoved,effect effectStyle, float duration,  int red, int green, int blue);
		~particleEffetType();			
};