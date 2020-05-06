/* Yael Lifshitz 311453021 targil3 */
#include "Vegetable.h"
#include "Agriculture.h"
#include <iostream>
#include <string>
#define VEG_TYPE 1
#define NO_GOOD_AGRI_TYPE "agri type is not veg type"
#define NO_GOOD_VITAMIN "num of vitamins are only legal above 0"
using namespace std;


//cosntractor
Vegetable::Vegetable(int serialNum, char locationRow, int locationShelf, int allWeight, int productType, int exposureType, int agriType, const string& nameOfProduct, int numSeasonRipen, int numSuppliers, int numVitamins):
	Agriculture(serialNum, locationRow, locationShelf, allWeight, productType, exposureType, agriType, nameOfProduct, numSeasonRipen, numSuppliers) //inheritence constractor
{
	if (agriType != VEG_TYPE)
	{
		throw runtime_error(NO_GOOD_AGRI_TYPE);
	}
	if (numVitamins < 0)
	{
		throw runtime_error(NO_GOOD_VITAMIN);
	}
	this->numVitamins= numVitamins;
}



int Vegetable::calculatePrice(int advertisingFactor)const // price calculating
{
	int calculatedPrice = Agriculture::calculatePrice(advertisingFactor);
	calculatedPrice= calculatedPrice + numVitamins*2;
	return calculatedPrice;
}



void Vegetable::print() const // print of this
{
	Agriculture::print();
	cout << " (" << numVitamins << ")";
}
