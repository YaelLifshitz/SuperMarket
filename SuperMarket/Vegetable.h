/* Yael Lifshitz 311453021 targil3 */

#pragma once
#include <iostream>
#include "Product.h"
#include "Agriculture.h"
using namespace std;


/*Class of the Vegetable*/
class Vegetable :public Agriculture //inheritance- also from product
{
private:
	//Member Variables
	int	numVitamins; //number of vitamins in the vegetable

public:
	
	/*************************************************************************
	* function name: Vegetable constructor
	* The Input: no input
	* The output: no output
	* The Function operation: constructor
	*************************************************************************/
	Vegetable(int serialNum, char locationRow, int locationShelf, int allWeight, int productType, int exposureType, int agriType, const string& nameOfProduct, int numSeasonRipen, int numSuppliers, int numVitamins);




	
	/*************************************************************************
	* function name: calculatePrice
	* The Input: integer (advertisingFactor)
	* The output: no output
	* The Function operation: calculate the price of the product
	*************************************************************************/
	virtual int calculatePrice(int advertisingFactor)const;


	/*************************************************************************
	* function name:print
	* The Input: no input
	* The output: no output
	* The Function operation:print the members of the class
	*************************************************************************/
	virtual void print() const;



};
