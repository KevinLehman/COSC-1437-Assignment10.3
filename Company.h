#ifndef COMPANY_H
#define COMPANY_H

#include <string>
#include <iostream>


using namespace std;
const int NAME_SIZE = 40;
const int QUARTER_SIZE = 2;

class Company
{
private:
	static char CompanyName[NAME_SIZE];
	char DivisionName[NAME_SIZE];
	char Quarter[QUARTER_SIZE];
	float BonusBudgetRate;
	float TotalSales;
	float TotalExpenses;
public:
	static bool setCoName(char[]);
	bool setDivName(char[]);
	bool setQuarter(char[]);
	bool setSales(float);
	bool setExpenses(float);
	std::string getCoName();
	std::string getDivName();
	char getQuarter();
	float getSales();
	float getExpenses();
	float netIncome();
	float getBonus();
	friend float computeBonusBudget(Company &);
	Company();
};





#endif // !COMPANY_H
#pragma once
