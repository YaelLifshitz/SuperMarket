/* Yael Lifshitz 311453021 targil3 */
#include "Shop.h"
#include "Product.h"
#include <stdexcept>
#include <iostream>
#include <string>
#include <vector>
#define DEFAULT_NAME "SuperShop"
#define DEFAULT_ADVERTISING 3
#define DEFAULT_SIZE 0
#define NO_GOOD_SERIAL "the serial already exist"
#define NO_GOOD_ADVERTISING "advertising factor is only legal above 0"
using namespace std;


//cosntractor
Shop::Shop()
{
	this->shopName= DEFAULT_NAME;
	this->advertisingFactor= DEFAULT_ADVERTISING;
	this->numOfProducts= DEFAULT_SIZE;
}


//distractor
Shop::~Shop()
{
	for (int i=0; i<numOfProducts; i++)
	{
		delete productsArray[i];
	}
}

void Shop::addProduct(Product* product)
{
	int serialNum = product->getSerial();
	for (int i=0; i<numOfProducts; i++)
	{
		if(serialNum == serialsNumber[i])
		{
			throw runtime_error(NO_GOOD_SERIAL);
		}
	}
	serialsNumber.push_back(serialNum);
	productsArray.push_back(product);
	numOfProducts++;
}



void Shop::changeAdvertisingFactor(int advertisingFactor)
{
	if (advertisingFactor < 0)
	{
		throw runtime_error(NO_GOOD_ADVERTISING);
	}
	this->advertisingFactor=advertisingFactor;
}



void Shop::calculatePrice()const // price calculating
{
	int sumPrice=0;
	for (int i = 0; i < numOfProducts; i++)
	{
		sumPrice+=productsArray[i]->calculatePrice(advertisingFactor);
	}
	cout << "price is: " <<sumPrice << endl;;
}




void Shop::print() const // print of this
{
	cout << shopName << ", " << numOfProducts << ", " << advertisingFactor;
	cout << endl;
	for (int i=0; i<numOfProducts; i++)
	{
		productsArray[i]->print();
		cout << endl;
	}
}

