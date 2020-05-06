/* Yael Lifshitz 311453021 targil3 */

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Product.h"

using namespace std;


// Class of Package
class Package :public Product //inheritance
{
private:
	//Member Variables
	int numProductsInPack; //Number of products in the package
	vector<string> productsName; //Array of the names of products in the package
	int numWrapColor; //number of colours on the wrapper of the package

public:
	
	/*************************************************************************
	* function name: Package constructors
	* The Input: no input
	* The output: no output
	* The Function operation: constructors
	*************************************************************************/
	Package(int serialNum, char locationRow, int locationShelf, int allWeight, int productType, int exposureType, int numProductsInPack, const vector<string>& productsName, int numWrapColor);



	
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

