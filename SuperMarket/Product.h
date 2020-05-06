/* Yael Lifshitz 311453021 targil3 */
#pragma once
#include <iostream>
#include <stdexcept>
using namespace std;

/*Class of the basic product*/
class Product
{
protected:
	//Member Variables
	int serialNum;//one of a kind number for this
	char locationRow; // between 'A' - 'Z'
	int locationShelf; // between 1-5
	int allWeight;// sum of all weight of the product weight in the store
	int productType; // type of product: 1-agriculture, 2-milk, 3-package
	int exposureType;// area in the shop by exposure - (1) for hidden, (2) for medium exposure, (3) for max exposure
	
public:
	
	/*************************************************************************
	* function name: Product constructors
	* The Input: no input
	* The output: no output
	* The Function operation: Constructors - put all values in product
	*************************************************************************/
	Product(int serialNum, char locationRow, int locationShelf, int allWeight, int productType, int exposureType);


	/*************************************************************************
	* function name: ~Product distractor
	* The Input: no input
	* The output: no output
	* The Function operation: distractor.
	*************************************************************************/
	virtual ~Product();


	
	/*************************************************************************
	* function name: calculatePrice
	* The Input: integer (advertisingFactor)
	* The output: no output
	* The Function operation: calculate the price of basic product
	*************************************************************************/
	virtual int calculatePrice(int advertisingFactor)const;


	/*************************************************************************
	* function name:print
	* The Input: -
	* The output: -
	* The Function operation:print the members of the class
	*************************************************************************/
	virtual void print() const;
	
	
	
	/*************************************************************************
	* function name:getSerial
	* The Input: -
	* The output: int serialNum
	* The Function operation:return the serial number
	*************************************************************************/
	int getSerial() const;
};
