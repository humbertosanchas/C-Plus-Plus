#pragma once
#include <string>

using namespace std;
//Header class for the BackpackType class
//Paul Boyko March 9th 2015

class BackpackType
{
	private:
		//enum for item
		string currentItem;
		int maxWeight;

	public:
		//setter and getters
		void SetCurrentItem(string item) { currentItem = item; }
		string GetCurrentItem() { return currentItem; }
		void SetMaxWeight(int weight) { maxWeight = weight; }
		int GetMaxWeight() { return maxWeight; }

		//display for backpack
		void DisplayBackPack();

		//default and parameterized constructors
		BackpackType();
		BackpackType( /*enum for item,*/ string item, int weight);

		//default destructor
		~BackpackType();
};