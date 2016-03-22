#pragma once
#include <string>

using namespace std;
//Header class for the BackpackType class
//Paul Boyko March 2015

class BackpackType
{
	public:
		//public enum to limit backpack Items
		enum backpackItems { NOTHING, GIN, TONIC, LIME, CUP, FOOD };

	private:
		
		//private data member
		backpackItems currentItem;
		int maxWeight;
		int static const MAX_ITEMS = 6;
		string static backpackItemsString[MAX_ITEMS];

	public:
		
		// public setters and getters		
		void SetCurrentItem(backpackItems item) { currentItem = item; }
		backpackItems GetCurrentItem() { return currentItem; }
		void SetMaxWeight(int weight) { maxWeight = weight; }
		int GetMaxWeight() { return maxWeight; }

		//display for backpack
		void DisplayBackPack();

		//default and parameterized constructors
		BackpackType();
		BackpackType(backpackItems item, int weight);

		//default destructor
		~BackpackType();
};