#include <iostream>
#include "runnerType.h"

using namespace std;

int main()
{
	
	runnerType *runner = NULL;
		
	runner = new runnerType("Hunter", "Boyko", 4, 4, 4, 2, 2, 1, runnerType::FIVEK); //dynamic runnerType

	//using pointer to access the methods of the pointer
	runner->printInfo();
	runner->setFirstName("Abbie");
	runner->setLastName("BOYKO");
	runner->setBestRaceType(runnerType::HALF);
	runner->bestTime.setTime(1, 1, 1);
	runner->printInfo();

	delete runner;
	runner = NULL;

	
	system("pause");
	return 0;
}
