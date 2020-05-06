/* Yael Lifshitz 311453021 targil3 */
#pragma once
#include <iostream>
#include <string>
#include "Product.h"

using namespace std;

//Class of Agriculture 
class Agriculture :public Product //inheritance from product.
{
protected:
	//Member Variables

	int agriType; // (1) for vegetable, (2) for fruit
	string nameOfProduct; //name of product
	int numSeasonRipen; //number of seasons that its ripen in (1-4)
	int numSuppliers; //number of suppliers that supply the product
		
public:
	
	/*************************************************************************
	* function name: Agriculture default constructor
	* The Input: no input
	* The output: no output
	* The Function operation: C'tor
	*************************************************************************/
	Agriculture(int serialNum, char locationRow, int locationShelf, int allWeight, int productType, int exposureType, int agriType, const string& nameOfProduct, int numSeasonRipen, int numSuppliers);




	
	/*************************************************************************
	* function name: calculatePrice
	* The Input: integer 
	* The output: no output
	* The Function operation: calculate the price of the agriculture
	*************************************************************************/
	virtual int calculatePrice(int advertisingFactor) const;

	/*************************************************************************
	* function name:print
	* The Input: no input
	* The output: no output
	* The Function operation:prints the members of the class
	*************************************************************************/
	virtual void print() const;


};
