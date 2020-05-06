/* Yael Lifshitz 311453021 targil3 */
#include "Interface.h"
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "Shop.h"
#include "Product.h"
#include "Agriculture.h"
#include "Vegetable.h"
#include "Fruit.h"
#include "Package.h"
#include "Dairy.h"
#include "Cheese.h"
#include "OtherDairy.h"
#define DEFAULT_NAME "SuperShop"
#define DEFAULT_ADVERTISING 3
#define NO_EXIT 1
#define NO_GOOD_SERIAL "the serial already exist"
#define NO_GOOD_ADVERTISING "advertising factor is only legal above 0"
using namespace std;


//cosntractor
Interface::Interface()
{
	cout << "welcome to test program to test shop and product" << endl;
	cout << endl;
	cout << "you can choose option from the menu" << endl;
	cout << "1 add product to shop" << endl;
	cout << "2 change advertising factor to shop" << endl;
	cout << "3 print price of shop" << endl;
	cout << "4 print regular of shop" << endl;
	cout << "0 exit" << endl;
	int choice = NO_EXIT;
	while (choice != 0)
	{
		cout << "please choose option:" << endl;
		cin >> choice;
		try
		{
			switch (choice)
			{
				case 1:
					addAllProduct();
					break;
				case 2:
					changeAdvertisingFactor();
					break;
				case 3:
					printPrice();
					break;
				case 4:
					printRegular();
					break;
				case 0:
					cout << "bye :)" << endl;
					return;
				default:
					cout << "please try again" << endl;
					break;
			}
		}
		catch (exception& except)
		{
			cout << except.what() << endl;
		}
	}
}


void Interface::addAllProduct()
{
	cout << "you can add these products" << endl;
	cout << "1 Product" << endl;
	cout << "2 Agriculture" << endl;
	cout << "3 Vegetable" << endl;
	cout << "4 Fruit" << endl;
	cout << "5 Package" << endl;
	cout << "6 Dairy" << endl;
	cout << "7 Cheese" << endl;
	cout << "8 OtherDairy" << endl;
	cout << "choose what product to enter to shop:" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
		case 1:
			addProduct();
			break;
		case 2:
			addAgriculture();
			break;
		case 3:
			addVegetable();
			break;
		case 4:
			addFruit();
			break;
		case 5:
			addPackage();
			break;
		case 6:
			addDairy();
			break;
		case 7:
			addCheese();
			break;
		case 8:
			addOtherDairy();
			break;
		default:
			cout << "please try again" << endl;
			return;
	}
}

void Interface::changeAdvertisingFactor()
{
	cout << "Please enter new advertising factor" << endl;
	int advertisingFactor;
	cin >> advertisingFactor;
	shop.changeAdvertisingFactor(advertisingFactor);
}



void Interface::printPrice()const
{
	shop.calculatePrice();
}


void Interface::printRegular()const
{
	
	shop.print();
}

void Interface::addProduct()
{
	cout << "enter product:" << endl;
	int ser, she, wei, ty1, exp;
	char row;
	cin >> ser >> row >> she >> wei >> ty1 >> exp;
	shop.addProduct(new Product(ser,row,she,wei,ty1,exp));

}


void Interface::addAgriculture()
{
	cout << "enter agriculture:" << endl;
	int ser, she, wei, ty1, exp, ty2, sea, sup;
	char row;
	string nam;
	cin >> ser >> row >> she >> wei >> ty1 >> exp;
	cin >> nam >> ty2 >> sea >> sup;
	shop.addProduct(new Agriculture(ser,row,she,wei,ty1,exp,ty2,nam,sea,sup));

}


void Interface::addVegetable()
{
	cout << "enter vegetable:" << endl;
	int ser, she, wei, ty1, exp, ty2, sea, sup, vit;
	char row;
	string nam;
	cin >> ser >> row >> she >> wei >> ty1 >> exp;
	cin >> nam >> ty2 >> sea >> sup >> vit;
	shop.addProduct(new Vegetable(ser,row,she,wei,ty1,exp,ty2,nam,sea,sup,vit));

}


void Interface::addFruit()
{
	cout << "enter fruit:" << endl;
	int ser, she, wei, ty1, exp, ty2, sea, sup, sug;
	char row;
	string nam;
	cin >> ser >> row >> she >> wei >> ty1 >> exp;
	cin >> nam >> ty2 >> sea >> sup >> sug;
	shop.addProduct(new Fruit(ser,row,she,wei,ty1,exp,ty2,nam,sea,sup,sug));

}


void Interface::addPackage()
{
	cout << "enter package:" << endl;
	int ser, she, wei, ty1, exp, siz, col;
	char row;
	vector<string> nms;
	string tmp;
	cin >> ser >> row >> she >> wei >> ty1 >> exp;
	cin.clear();
	do
	{
		if (!cin)
		{
			cin.clear();
			cin >> tmp;
			nms.push_back(tmp);
		}
		cin >> siz;
	} while (!cin);
	cin >> col;
	shop.addProduct(new Package(ser,row,she,wei,ty1,exp,siz,nms,col));

}


void Interface::addDairy()
{
	cout << "enter dairy:" << endl;
	int ser, she, wei, ty1, exp, ty2, col, fat;
	char row;
	string tmp, nam;
	cin >> ser >> row >> she >> wei >> ty1 >> exp;
	cin >> nam >> tmp;
	nam += " " + tmp;
	cin >> ty2 >> col >> fat;
	shop.addProduct(new Dairy(ser,row,she,wei,ty1,exp,ty2,nam,col,fat));

}


void Interface::addCheese()
{
	cout << "enter cheese:" << endl;
	int ser, she, wei, ty1, exp, ty2, col, fat, add;
	char row;
	string tmp, nam;
	cin >> ser >> row >> she >> wei >> ty1 >> exp;
	cin >> nam >> tmp;
	nam += " " + tmp;
	cin >> ty2 >> col >> fat >> add;
	shop.addProduct(new Cheese(ser,row,she,wei,ty1,exp,ty2,nam,col,fat,add));

}

void Interface::addOtherDairy()
{
	cout << "enter OtherDairy:" << endl;
	int ser, she, wei, ty1, exp, ty2, col, fat, siz;
	char row;
	string tmp, nam;
	vector<string> nms;
	cin >> ser >> row >> she >> wei >> ty1 >> exp;
	cin >> nam >> tmp;
	nam += " " + tmp;
	cin >> ty2 >> col >> fat;
	do
	{
		if (!cin)
		{
			cin.clear();
			cin >> tmp;
			nms.push_back(tmp);
		}
		cin >> siz;
	} while (!cin);
	shop.addProduct(new OtherDairy(ser,row,she,wei,ty1,exp,ty2,nam,col,fat,siz,nms));

}



