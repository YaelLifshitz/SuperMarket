/* Yael Lifshitz 311453021 targil3 */
#pragma once
#include <stdexcept>
#include <iostream>
#include <string>
#include <vector>
#include "Shop.h"
using namespace std;


/*Class of the Interface*/
class Interface
{
private:
	//Member Variables
	Shop shop;

	//Helping Functions
	void addAllProduct();
	void changeAdvertisingFactor();
	void printPrice()const;
	void printRegular()const;

	void addProduct();
	void addAgriculture();
	void addVegetable();
	void addFruit();
	void addPackage();
	void addDairy();
	void addCheese();
	void addOtherDairy();
public:
	
	/*************************************************************************
	* function name: Interface constructors
	* The Input: no input
	* The output: no output
	* The Function operation: main function to run interface
	*************************************************************************/
	Interface();



};


