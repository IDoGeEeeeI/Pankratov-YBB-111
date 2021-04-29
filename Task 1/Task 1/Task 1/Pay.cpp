#include "Payment.h"
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <locale.h>


Payment::Payment(const string fullName, const double salary, const int yearJoining, const double percentagePremium, const int incomeTax, const int numberDaysWorkedInMonth, const int dayMonth, const double accruals, const double withheld)
{
	this->fullName = fullName;
	this->salary = salary;
	this->yearJoining = yearJoining;
	this->percentagePremium = percentagePremium;
	this->incomeTax = incomeTax;
	this->numberDaysWorkedInMonth = numberDaysWorkedInMonth;
	this->dayMonth = dayMonth;
	this->accruals = accruals;
	this->withheld = withheld;
}
string Payment::getFullName() const
{
	return this->fullName;
}

double Payment::getSalary() const
{
	return this->salary;
}

int Payment::getYearJoining() const
{
	return this->yearJoining;
}

double Payment::getPercentagePremium() const
{
	return this->percentagePremium;
}

int Payment::getNumberDaysWorkedInMonth() const
{
	return this->numberDaysWorkedInMonth;
}

double Payment::calculateTheAccruedAmount(const double salary, const int numberDaysWorkedInMonth) const
{
	return ((salary / this->dayMonth) * numberDaysWorkedInMonth);
}

double Payment::calculateTheWithheldAmount(const double accruals, const int incomeTax) const
{
	return (((this->salary / this->dayMonth) * numberDaysWorkedInMonth) * 0.01 + ((this->salary / this->dayMonth) * this->numberDaysWorkedInMonth) * incomeTax / 100);
}

double Payment::calculationSalary(const double salary, const int numberDaysWorkedInMonth, const int incomeTax) const
{
	return (numberDaysWorkedInMonth * (salary / this->dayMonth) - (numberDaysWorkedInMonth * (salary / this->dayMonth) * incomeTax/100));
}

int Payment::calculationExperience(const int yearJoining) const
{
	return (2021 - yearJoining);
}




