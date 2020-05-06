/* Yael Lifshitz 311453021 targil3 */
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Product.h"
#include "Dairy.h"
using namespace std;


/*Class of the Cheese*/
class OtherDairy :public Dairy //inheritance
{
private:
	//Data-Members
	int numNonDairyIng; //number of non dairy ingredients
	vector<string> nonMilk; //array of the names of non dairy ingredients

public:
	
	/*************************************************************************
	* function name: OtherDairy constructors
	* The Input: no input
	* The output: no output
	* The Function operation: constructors
	*************************************************************************/
	OtherDairy(int serialNum, char locationRow, int locationShelf, int allWeight, int productType, int exposureType, int dairyType, const string& dairyName, int numColor, int numFatPrecent, int numNonDairyIng, const vector<string>& nonMilk);




	
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
	* The Function operation: print the members of the class
	*************************************************************************/
	virtual void print() const;


};
