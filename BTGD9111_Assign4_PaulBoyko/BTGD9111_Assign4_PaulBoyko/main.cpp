#pragma once
#include <string>
#include <iostream>
//#include "BackpackType.h"
#include "SoldierType.h"

using namespace std;
//main.cpp file
//Paul Boyko March 2015

int main()
{
	//default constructor to make soldier1
	SoldierType soldier1;
	//parameterized constructor to make soldier2
	SoldierType soldier2(SoldierType::PRIVATE, 1000, "Francis Boyko", 'f', 2.2, BackpackType::FOOD, 5);
	
	//display all data for soldier 1 and 2
	soldier1.DiplayAllDataOfSoldier();	
	soldier2.DiplayAllDataOfSoldier();

	//use all setters for soldier1 to give it a vaild data
	soldier1.SetPersonName("Paul Boyko");
	soldier1.SetPersonGender('d');
	soldier1.SetPersonHeight(5.10);
	soldier1.SetRank(SoldierType::GENERAL);
	soldier1.SetNumberOfKills(1000000);
	soldier1.SetBackpack(BackpackType::GIN, 100);

	//verify that only m or f are acceptable inputs for gender
	soldier1.DiplayAllDataOfSoldier();
	//change backpack item
	soldier1.backpack.SetCurrentItem(BackpackType::TONIC);
	//change backpack weight
	soldier1.backpack.SetMaxWeight(200);
	//fix data for gender
	soldier1.SetPersonGender('m');
	//verify that gender is correct
	soldier1.DiplayAllDataOfSoldier();
	
	cout << endl;
	system("PAUSE");
	return 0;
}