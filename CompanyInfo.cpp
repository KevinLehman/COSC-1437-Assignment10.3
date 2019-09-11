/*
Kevin Lehman  - 1463553
Tarrant County College - COSC 1437- Fall 2017
Assignment 3 - Week 10
*/

#include "Company.h"
#include <iostream>
#include <string>
using namespace std;

float computeBonusBudget(Company &div);

int main()
{
	Company dogFoodMaker;
	Company catFoodMaker;
	Company fishFoodMaker;
	char locName[NAME_SIZE];
	char locDiv[NAME_SIZE];
	char locQ[QUARTER_SIZE];
	float locSales;
	float locExpenses;
	float expCount = 0;
	bool flag = false;

	cout << "Enter your company's name: " << endl;
	cin.getline(locName, NAME_SIZE);
	Company::setCoName(locName);

		flag = false;
		while (flag != true)
		{
			cout << "Enter division dogFoodMaker's name." << endl;
			cin.getline(locDiv, NAME_SIZE);
			flag = dogFoodMaker.setDivName(locDiv);
		}
		flag = false;
		while (flag != true)
		{
			cout << "Enter the quarter - 1 to 4 for " << dogFoodMaker.getDivName() << " division: " << endl;
			cin.getline(locQ, QUARTER_SIZE);
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "FAILED SIZE CHECK" << endl;
				continue;
			}
			flag = dogFoodMaker.setQuarter(locQ);
			cout << "quarter = " << locQ << endl;
		}
		flag = false;
		while (flag != true)
		{
			cout << "Enter " << dogFoodMaker.getDivName() << " total sales for Quarter #" << dogFoodMaker.getQuarter() << "." << endl;
			cin >> locSales;
			flag = dogFoodMaker.setSales(locSales);
		}
		flag = false;
		while (flag != true)
		{
			cout << "Enter " << dogFoodMaker.getDivName() << " total expenses for Quarter #" << dogFoodMaker.getQuarter() << "." << endl;
			cin >> locExpenses;
			flag = dogFoodMaker.setExpenses(locExpenses);
		}
		
		cout << "Company Name: " << dogFoodMaker.getCoName() << endl;
		cout << "Division Name: " << dogFoodMaker.getDivName() << endl;
		cout << "Total Sales: " << dogFoodMaker.getSales() << endl;
		cout << "Total Expenses: " << dogFoodMaker.getExpenses() << endl;
		cout << "Net Income: " << dogFoodMaker.netIncome() << endl;
		cout << "Bonus Budget: " << computeBonusBudget(dogFoodMaker) << endl;
		
		flag = false;
		while (flag != true)
		{
			cin.ignore();
			cout << "Enter division catFoodMaker's name." << endl;
			cin.getline(locDiv, NAME_SIZE);
			flag = catFoodMaker.setDivName(locDiv);
		}
		flag = false;
		while (flag != true)
		{
			cout << "Enter the quarter - 1 to 4 for " << catFoodMaker.getDivName() << " division: " << endl;
			cin.getline(locQ, QUARTER_SIZE);
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "FAILED SIZE CHECK" << endl;
				continue;
			}
			flag = catFoodMaker.setQuarter(locQ);
			cout << "quarter = " << locQ << endl;
		}
		flag = false;
		while (flag != true)
		{
			cout << "Enter " << catFoodMaker.getDivName() << " total sales for Quarter #" << catFoodMaker.getQuarter() << "." << endl;
			cin >> locSales;
			flag = catFoodMaker.setSales(locSales);
		}
		flag = false;
		while (flag != true)
		{
			cout << "Enter " << catFoodMaker.getDivName() << " total expenses for Quarter #" << catFoodMaker.getQuarter() << "." << endl;
			cin >> locExpenses;
			flag = catFoodMaker.setExpenses(locExpenses);
		}

		cout << "Company Name: " << catFoodMaker.getCoName() << endl;
		cout << "Division Name: " << catFoodMaker.getDivName() << endl;
		cout << "Total Sales: " << catFoodMaker.getSales() << endl;
		cout << "Total Expenses: " << catFoodMaker.getExpenses() << endl;
		cout << "Net Income: " << catFoodMaker.netIncome() << endl;
		cout << "Bonus Budget: " << computeBonusBudget(catFoodMaker) << endl;

		flag = false;
		while (flag != true)
		{
			cin.ignore();
			cout << "Enter division fishFoodMaker's name." << endl;
			cin.getline(locDiv, NAME_SIZE);
			flag = fishFoodMaker.setDivName(locDiv);
		}
		flag = false;
		while (flag != true)
		{
			cout << "Enter the quarter - 1 to 4 for " << fishFoodMaker.getDivName() << " division: " << endl;
			cin.getline(locQ, QUARTER_SIZE);
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "FAILED SIZE CHECK" << endl;
				continue;
			}
			flag = fishFoodMaker.setQuarter(locQ);
			cout << "quarter = " << locQ << endl;
		}
		flag = false;
		while (flag != true)
		{
			cout << "Enter " << fishFoodMaker.getDivName() << " total sales for Quarter #" << fishFoodMaker.getQuarter() << "." << endl;
			cin >> locSales;
			flag = fishFoodMaker.setSales(locSales);
		}
		flag = false;
		while (flag != true)
		{
			cout << "Enter " << fishFoodMaker.getDivName() << " total expenses for Quarter #" << fishFoodMaker.getQuarter() << "." << endl;
			cin >> locExpenses;
			flag = fishFoodMaker.setExpenses(locExpenses);
		}
		
		cout << "Company Name: " << fishFoodMaker.getCoName() << endl;
		cout << "Division Name: " << fishFoodMaker.getDivName() << endl;
		cout << "Total Sales: " << fishFoodMaker.getSales() << endl;
		cout << "Total Expenses: " << fishFoodMaker.getSales() << endl;
		cout << "Net Income: " << fishFoodMaker.netIncome() << endl;
		cout << "Bonus Budget: " << computeBonusBudget(fishFoodMaker) << endl;

	system("PAUSE");
	return 0;
}

float computeBonusBudget(Company &div)
{
	return (div.netIncome() * div.getBonus());
}