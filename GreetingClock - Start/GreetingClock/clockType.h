//----------------------------------------------------------------------
// Clock class definition 
//----------------------------------------------------------------------
#pragma once

class clockType
{
	public:
		static int clockCount;		//static class variable --ALL clock objects share this variable

		//function members (prototypes)
		void setTime(int inHour, int inMin, int inSec);
		void getTime(int& outHour, int& outMin, int &outSec) const;
		void setHours(int inHours) { hours = inHours; }
		int getHours() { return hours; }
		void setMinutes(int inMinutes) { mins = inMinutes; }
		int getMinutes() { return mins; }
		void setSeconds(int inSeconds) { secs = inSeconds; }
		int getSeconds() { return secs; }
		void displayTime() const;
		void incrementSecs();
		void incrementMins();
		void incrementHours();
		bool equalTime(const clockType& inClock) const;

		//Constructors
		clockType();											// default constructor
		clockType(int inHours, int inMinutes, int inSeconds);	// parameterized constructor
		~clockType();											// destructor

	private:
		//data members
		int hours; // 0..23
		int mins; // 0..59
		int secs; // 0.. 59
};