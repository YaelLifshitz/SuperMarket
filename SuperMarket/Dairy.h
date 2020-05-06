/* Yael Lifshitz 311453021 targil3 */
#pragma once
#include <iostream>
#include <string>
#include "Product.h"
using namespace std;


//Class of Dairy
class Dairy :public Product
{
protected:
	//Member Variables
	int  dairyType; //(1) drink, ( 2)yogurt, (3) cheese, (4) other
	string dairyName; //name of the dairy product
	int numColor; //number of colours in package
	int numFatPrecent;//fat percents
public:
	
	/*************************************************************************
	* function name: Dairy constructor
	* The Input: -
	* The output: -
	* The Function operation: constructor
	*************************************************************************/
	Dairy(int serialNum, char locationRow, int locationShelf, int allWeight, int productType, int exposureType, int dairyType, const string& dairyName, int numColor, int numFatPrecent);




	
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
	* The Function operation:prints the members of the class
	*************************************************************************/
	virtual void print() const;

	
};
