#ifndef H_CLOCKTYPE
#define H_CLOCKTYPE

class clockType
{
	
public:
	static int objectCount;

	void setTime(int inHours, int inMinutes, int inSeconds );
    void getTime(int& outHours, int& outMinutes, int& outSeconds) const;  
    void printTime() const;
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
    bool equalTime(const clockType& otherClock) const;

	//Accessor Functions ( inline functions )
	void SetHour ( int inHr ) { hour = inHr; };
	int GetHour() const { return hour;};

	void SetMin ( int inMinutes ) { min = inMinutes; };
	int GetMin() const { return min;};

	void SetSec ( int inSeconds ) { sec = inSeconds; };
	int GetSec() const { return sec; };

	//Constructors

	clockType();
	clockType( int inHours, int inMinutes, int inSeconds);

	//Destructors
	 ~clockType();
protected:
	int hour;
	int min;
	int sec;

};

#endif