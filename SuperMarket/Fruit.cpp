/* Yael Lifshitz 311453021 targil3 */
#include "Fruit.h"
#include "Agriculture.h"
#include <iostream>
#include <string>
#define FRUIT_TYPE 2
#define NO_GOOD_AGRI_TYPE "agri type is not fruit type"
#define NO_GOOD_SUGAR "gram of sugar is only legal above 0"
using namespace std;


//cosntractor
Fruit::Fruit(int serialNum, char locationRow, int locationShelf, int allWeight, int productType, int exposureType, int agriType, const string& nameOfProduct, int numSeasonRipen, int numSuppliers, int gramSugar):
	Agriculture(serialNum, locationRow, locationShelf, allWeight, productType, exposureType, agriType, nameOfProduct, numSeasonRipen, numSuppliers) //inheritence constractor
{
	if (agriType != FRUIT_TYPE)
	{
		throw runtime_error(NO_GOOD_AGRI_TYPE);
	}
	if (gramSugar < 0)
	{
		throw runtime_error(NO_GOOD_SUGAR);
	}
	this->gramSugar= gramSugar;
}



int Fruit::calculatePrice(int advertisingFactor)const // price calculating
{
	int calculatedPrice = Agriculture::calculatePrice(advertisingFactor);
	calculatedPrice= calculatedPrice + gramSugar/2;
	return calculatedPrice;
}



void Fruit::print() const // print of this
{
	Agriculture::print();
	cout << " (" << gramSugar << ")";
}
