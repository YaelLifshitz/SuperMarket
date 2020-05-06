/* Yael Lifshitz 311453021 targil3 */

#pragma once
#include <iostream>
#include <string>
#include "Product.h"
#include "Agriculture.h"
using namespace std;


//Class of Fruit 
class Fruit :public Agriculture ////inheritance- also from product
{
private:
	//Member Variables
	int gramSugar; //Amount of sugar in 100g of the fruit
public:
	
	/*************************************************************************
	* function name: Fruits constructors
	* The Input: no input
	* The output: no output
	* The Function operation: constructors
	*************************************************************************/
	Fruit(int serialNum, char locationRow, int locationShelf, int allWeight, int productType, int exposureType, int agriType, const string& nameOfProduct, int numSeasonRipen, int numSuppliers, int gramSugar);


	
	/*************************************************************************
	* function name: calculatePrice
	* The Input: integer (advertisingFactor)
	* The output: no output
	* The Function operation: calculate the price of the product
	*************************************************************************/
	virtual int calculatePrice(int advertisingFactor)const;


	/*************************************************************************
	* function name: print
	* The Input: no input
	* The output: no output
	* The Function operation: prints the members of the class
	*************************************************************************/
	virtual void print() const;


};
