/* Yael Lifshitz 311453021 targil3 */
#include "Cheese.h"
#include "Dairy.h"
#include "Product.h"
#include <iostream>
#include <string>
#define CHEESE_TYPE 3
#define NO_GOOD_DAIRY_TYPE "dairy type is not cheese type"
#define NO_GOOD_NUM_ADDITIONS "num of additions is only legal above 0"
using namespace std;


//cosntractor
Cheese::Cheese(int serialNum, char locationRow, int locationShelf, int allWeight, int productType, int exposureType, int dairyType, const string& dairyName, int numColor, int numFatPrecent, int numAdditions):
	Dairy(serialNum, locationRow, locationShelf, allWeight, productType, exposureType, dairyType, dairyName, numColor, numFatPrecent) //inheritence constractor
{
	if (dairyType != CHEESE_TYPE)
	{
		throw runtime_error(NO_GOOD_DAIRY_TYPE);
	}
	if (numAdditions < 0)
	{
		throw runtime_error(NO_GOOD_NUM_ADDITIONS);
	}
	this->numAdditions= numAdditions;
}



int Cheese::calculatePrice(int advertisingFactor)const // price calculating
{
	int calculatedPrice = Product::calculatePrice(advertisingFactor);
	calculatedPrice= calculatedPrice + numAdditions;
	return calculatedPrice;
}




void Cheese::print() const // print of this
{
	Dairy::print();
	cout << " (" << numAdditions << ")";
}
