/* Yael Lifshitz 311453021 targil3 */
#include "Package.h"
#include "Product.h"
#include <iostream>
#include <string>
#include <vector>
#define PACK_TYPE 3
#define NO_GOOD_PRODUCT_TYPE "product type is not package type"
#define NO_GOOD_NUM_PRODUCTS "num of products is only legal above 0"
#define NO_GOOD_NUM_COLORS "num of colors is only legal above 0"
#define NO_GOOD_PRODUCTS_NAME "products name length is not equel to size number"
using namespace std;


//cosntractor
Package::Package(int serialNum, char locationRow, int locationShelf, int allWeight, int productType, int exposureType, int numProductsInPack, const vector<string>& productsName, int numWrapColor):
	Product(serialNum, locationRow, locationShelf, allWeight, productType, exposureType) //inheritence constractor
{
	if (productType != PACK_TYPE)
	{
		throw runtime_error(NO_GOOD_PRODUCT_TYPE);
	}
	if (numProductsInPack < 0)
	{
		throw runtime_error(NO_GOOD_NUM_PRODUCTS);
	}
	if (numWrapColor < 0)
	{
		throw runtime_error(NO_GOOD_NUM_COLORS);
	}
	if (productsName.size() != numProductsInPack)
	{
		throw runtime_error(NO_GOOD_PRODUCTS_NAME);
	}
	this->numProductsInPack= numProductsInPack;
	this->numWrapColor = numWrapColor;
	this->productsName = productsName;
}



int Package::calculatePrice(int advertisingFactor)const // price calculating
{
	int calculatedPrice = Product::calculatePrice(advertisingFactor);
	calculatedPrice= calculatedPrice*2* numProductsInPack + numWrapColor/3;
	return calculatedPrice;
}



void Package::print() const // print of this
{
	Product::print();
	cout << " ";
	for (int i=0; i<numProductsInPack; i++)
	{
		if (i == numProductsInPack-1)
		{
			cout << productsName[i] << " ";
		}
		else
		{
			cout << productsName[i] << ", ";
		}
	}
	cout << "(" << numProductsInPack << "," << numWrapColor << ")";
}
