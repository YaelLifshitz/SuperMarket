/* Yael Lifshitz 311453021 targil3 */

#pragma once
#include <iostream>
#include "Product.h"
#include "Dairy.h"
using namespace std;


//Class of the Cheese
class Cheese :public Dairy //inheritance- also from product
{
private:
	int numAdditions; //number of additions of cheese

public:
	
	/*************************************************************************
	* function name: Cheese constructors
	* The Input: no input
	* The output: no output
	* The Function operation: constructors
	*************************************************************************/
	Cheese(int serialNum, char locationRow, int locationShelf, int allWeight, int productType, int exposureType, int dairyType, const string& dairyName, int numColor, int numFatPrecent, int numAdditions);


	
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
	* The Function operation: print the members of the class
	*************************************************************************/
	virtual void print() const;


};
