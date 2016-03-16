#ifndef H_PERSON_TYPE

#include <string>
using namespace std;

class personType
{
public:
	void setFirstName(string inFName);
	string getFirstName();

	void setLastName(string inLName);
	string getLastName();

	void printInfo();

	personType(); 
	personType( string inFName, string inLName);

protected:
	string firstName;
	string lastName;
};


#endif