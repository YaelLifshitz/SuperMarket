/* Yael Lifshitz 311453021 targil3 */
#include "Dairy.h"
#include "Product.h"
#include <iostream>
#include <string>
#define DAIRY_TYPE 2
#define NO_GOOD_PRODUCT_TYPE "product type is not dairy type"
#define NO_GOOD_DAIRY_TYPE "dairy type is legal in between 1-4"
#define NO_GOOD_NUM_COLORS "num of colors is only legal above 0"
#define NO_GOOD_PRODUCTS_NAME "fat percent only legal in between 0-100"
using namespace std;


//cosntractor
Dairy::Dairy(int serialNum, char locationRow, int locationShelf, int allWeight, int productType, int exposureType, int dairyType, const string& dairyName, int numColor, int numFatPrecent):
	Product(serialNum, locationRow, locationShelf, allWeight, productType, exposureType) //inheritence constractor
{
	if (productType != DAIRY_TYPE)
	{
		throw runtime_error(NO_GOOD_PRODUCT_TYPE);
	}
	if (dairyType < 1 || dairyType > 4)
	{
		throw runtime_error(NO_GOOD_DAIRY_TYPE);
	}
	if (numColor < 0)
	{
		throw runtime_error(NO_GOOD_NUM_COLORS);
	}
	if (numFatPrecent < 0 || numFatPrecent > 100)
	{
		throw runtime_error(NO_GOOD_PRODUCTS_NAME);
	}
	this->dairyType= dairyType;
	this->numColor = numColor;
	this->numFatPrecent= numFatPrecent;
	this->dairyName=dairyName;
}



int Dairy::calculatePrice(int advertisingFactor)const // price calculating
{
	int calculatedPrice = Product::calculatePrice(advertisingFactor);
	calculatedPrice= (calculatedPrice + numColor+ numFatPrecent) *dairyType;
	return calculatedPrice;
}




void Dairy::print() const // print of this
{
	Product::print();
	cout << " " << dairyName << " (" << dairyType << "," << numColor << "," << numFatPrecent << ")";
}
