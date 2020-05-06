/* Yael Lifshitz 311453021 targil3 */
#pragma once
#include <stdexcept>
#include <iostream>
#include <string>
#include <vector>
#include "Product.h"
using namespace std;


/*Class of the Shop*/
class Shop
{
private:
	//Member Variables
	string shopName; //name of the shop
	int advertisingFactor; //advertising factor of the shop
	int numOfProducts; //number of products in the shop
	vector<Product*> productsArray; //array of pointers to products
	vector<int> serialsNumber; //array of serials number

public:
	
	/*************************************************************************
	* function name: Shop constructors
	* The Input: no input
	* The output: no output
	* The Function operation: Default constructors - reset to defaults
	*************************************************************************/
	Shop();


	/*************************************************************************
	* function name: Shop distractor
	* The Input: no input
	* The output: no output
	* The Function operation: distractor
	*************************************************************************/
	~Shop();



	/*************************************************************************
	* function name: addProduct
	* The Input: pointer to product
	* The output: no output
	* The Function operation: add pointer to product in array
	*************************************************************************/
	void addProduct(Product* product);



	/*************************************************************************
	* function name: changeAdvertisingFactor
	* The Input: value to change advertising factor to
	* The output: no output
	* The Function operation: the function its porpose to change advertising
	*************************************************************************/
	void changeAdvertisingFactor(int advertisingFactor);

	
	/*************************************************************************
	* function name: calculatePrice
	* The Input: no input
	* The output: no output
	* The Function operation: print sum of all the prices of all products
	*************************************************************************/
	void calculatePrice()const;


	/*************************************************************************
	* function name:print
	* The Input: no input
	* The output: no output
	* The Function operation: print the members of the class
	*************************************************************************/
	void print() const;


};

