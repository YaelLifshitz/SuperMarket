/* Yael Lifshitz 311453021 targil3 */
#include "OtherDairy.h"
#include "Dairy.h"
#include "Product.h"
#include <iostream>
#include <string>
#include <vector>
#define OTHER_TYPE 4
#define NO_GOOD_DAIRY_TYPE "dairy type is not other dairy type"
#define NO_GOOD_NUM_ING "num of non dairy ingridients is only legal above 0"
#define NO_GOOD_NON_MILK "size of names array is not the same as num of non dairy"
using namespace std;


//cosntractor
OtherDairy::OtherDairy(int serialNum, char locationRow, int locationShelf, int allWeight, int productType, int exposureType, int dairyType, const string& dairyName, int numColor, int numFatPrecent, int numNonDairyIng, const vector<string>& nonMilk):
	Dairy(serialNum, locationRow, locationShelf, allWeight, productType, exposureType, dairyType, dairyName, numColor, numFatPrecent) //inheritence constractor
{
	if (dairyType != OTHER_TYPE)
	{
		throw runtime_error(NO_GOOD_DAIRY_TYPE);
	}
	if (numNonDairyIng < 0)
	{
		throw runtime_error(NO_GOOD_NUM_ING);
	}
	if (nonMilk.size() != numNonDairyIng)
	{
		throw runtime_error(NO_GOOD_NON_MILK);
	}
	this->numNonDairyIng= numNonDairyIng;
	this->nonMilk= nonMilk;
}



int OtherDairy::calculatePrice(int advertisingFactor)const // price calculating
{
	int calculatedPrice = Product::calculatePrice(advertisingFactor);
	calculatedPrice= calculatedPrice + numNonDairyIng*5;
	return calculatedPrice;
}




void OtherDairy::print() const // print of this
{
	Dairy::print();
	cout << " ";
	for (int i=0; i<numNonDairyIng; i++)
	{
		if (i == numNonDairyIng-1)
		{
			cout << nonMilk[i] << " ";
		}
		else
		{
			cout << nonMilk[i] << ", ";
		}
	}
	cout << "(" << numNonDairyIng << ")";
}
