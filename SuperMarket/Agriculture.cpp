/* Yael Lifshitz 311453021  targil3 */
#include "Agriculture.h"
#include <iostream>
#include <string>
#define AGRI_TYPE 1
#define NO_GOOD_PRODUCT_TYPE "product type is not agriculture type"
#define NO_GOOD_AGRI_TYPE "agriculture type is between 1-2"
#define NO_GOOD_SEASON "season is only between 1-4"
#define NO_GOOD_SUPPLIER "suppliers are only good above 0"
using namespace std;


Agriculture::Agriculture(int serialNum, char locationRow, int locationShelf, int allWeight, int productType, int exposureType, int agriType, const string& nameOfProduct, int numSeasonRipen, int numSuppliers)://constractor
	Product(serialNum, locationRow, locationShelf, allWeight, productType, exposureType) // product constractor
{
	if (productType != AGRI_TYPE)
	{
		throw runtime_error(NO_GOOD_PRODUCT_TYPE);
	}
	if (agriType <1 && agriType >2)
	{
		throw runtime_error( NO_GOOD_AGRI_TYPE);
	}
	if (numSeasonRipen < 1 || numSeasonRipen > 4)
	{
		throw runtime_error(NO_GOOD_SEASON);
	}
	if (numSuppliers < 0)
	{
		throw runtime_error(NO_GOOD_SUPPLIER);
	}
	this->agriType= agriType;
	this->nameOfProduct= nameOfProduct;
	this->numSeasonRipen=numSeasonRipen;
	this->numSuppliers = numSuppliers;
}



int Agriculture::calculatePrice(int advertisingFactor)const // price calculating
{
	int calculatedPrice = Product::calculatePrice(advertisingFactor);
	calculatedPrice= calculatedPrice*3* (5 - numSeasonRipen)+(numSuppliers* 5) + agriType;
	return calculatedPrice;
}



void Agriculture::print() const
{
	Product::print();
	cout << " " << nameOfProduct << " (" << agriType << "," << numSeasonRipen << "," << numSuppliers << ")";
}
