/* Yael Lifshitz 311453021 targil3 */
#include "Product.h"
#define NO_GOOD_ROW "row need to be between 'A' - 'Z'"
#define NO_GOOD_SHELF "shelf need to be between 1-5"
#define NO_GOOD_WEIGHT "weight need to be above zero"
#define NO_GOOD_TYPE "type of product need to be 1,2 or 3"
#define NO_GOOD_EXPOSURE "exposure is only legal in 1, 2 or 3"
using namespace std;

// constructor
Product::Product(int serialNum, char locationRow, int locationShelf, int allWeight,
		int productType, int exposureType)
{
	if(locationRow<'A'|| locationRow> 'Z')
	{
		// like in tirgul
		throw(runtime_error(NO_GOOD_ROW));
	}
	if (locationShelf < 1 || locationShelf > 5)
	{
		throw runtime_error(NO_GOOD_SHELF);
	}
	if (allWeight < 0)
	{
		throw runtime_error(NO_GOOD_WEIGHT);
	}
	if(productType!= 1 && productType != 2 &&productType!= 3)
	{
		throw runtime_error(NO_GOOD_TYPE);
	}
	if ( exposureType < 1 || exposureType > 3)
	{
		throw runtime_error(NO_GOOD_EXPOSURE);
	}
	this->serialNum= serialNum;
	this->locationRow= locationRow; 
	this->locationShelf=locationShelf; 
	this->allWeight= allWeight;
	this->productType= productType; 
	this->exposureType= exposureType;
}


int Product::calculatePrice(int advertisingFactor)const//virtual function
{
	int productPrice;
	productPrice = allWeight*exposureType* advertisingFactor;
	return productPrice;
}


void Product::print()const //virtual function
{
	cout << serialNum << " " << locationRow << " " << locationShelf << " (" << allWeight << "," <<productType << ","<< exposureType << ")";
}

Product::~Product()//virtual distractor, also virtual for every son after
{
}

int Product::getSerial()const
{
	return serialNum;
}
