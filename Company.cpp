#include "Company.h"
#include <iostream>
#include <string>
using namespace std;

char Company::CompanyName[NAME_SIZE];

bool Company::setCoName(char c[])
{
	if (strlen(c) < NAME_SIZE)
	{
		for (int idx = 0; idx < strlen(c); idx++)
		{
			CompanyName[idx] = c[idx];
		}
		return true;
	}
	return false;
}
bool Company::setDivName(char div[])
{
	if (strlen(div) < NAME_SIZE)
	{
		for (int idx = 0; idx <= strlen(div); idx++)
		{
			DivisionName[idx] = div[idx];
		}
		return true;
	}
	else
	{
		cout << div << " is an invalid input. Please re-enter." << endl;
		return false;
	}
}
bool Company::setQuarter(char q[])
{
	if (q[0] >= '0' && q[0] <= '4' )
	{
		Quarter[0] = q[0];
		Quarter[1] = '\n';
		return true;
	}
	else
	{
		cout << q << " is an invalid input. Please re-enter." << endl;
		return false;
	}
}
bool Company::setSales(float s)
{
	if (s >= 0)
	{
		TotalSales = s;
		return true;
	}
	else
	{
		cout << s << " is an invalid input. Please re-enter." << endl;
		return false;
	}
}
 
bool Company::setExpenses(float e)
{
	if (e >= 0)
	{
		TotalExpenses = e;
		return true;
	}
	else
	{
		cout << e << " is an invalid input. Please re-enter." << endl;
		return false;
	}
}


string Company::getCoName()
{
	string coName(CompanyName);
	return coName;
}
string Company::getDivName()
{
	string divName(DivisionName);
	divName.resize(strlen(DivisionName));
	return divName;
}
char Company::getQuarter()
{
	return Quarter[0];
}
float Company::getSales()
{
	return TotalSales;
}
float Company::getExpenses()
{
	return TotalExpenses;
}
float Company::netIncome()
{
	return (TotalSales - TotalExpenses);
}
float Company::getBonus()
{
	return BonusBudgetRate;
}

Company::Company()
{
	BonusBudgetRate = 0.02;
}
