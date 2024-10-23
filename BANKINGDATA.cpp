#include <iostream>
using namespace std;

#include "BANKINGDATA.h"

void InvestmentData::SetInitialInvestment(double t_initialInvestment) {
	this->m_initialInvestment = t_initialInvestment;  // This sets the initial investment 


}
void InvestmentData::SetMonthlyDeposit(double t_monthlyDeposit) {
	this->m_monthlyDeposit = t_monthlyDeposit;  // This sets the monthly deposit with the parameter that will be used in main
}
void InvestmentData::SetAnnualInterest(double t_annualInterest) {
	this->m_annualInterest = t_annualInterest; //  This sets the annual interest
}
void InvestmentData::SetNumYears(int t_numYears) {
	this->m_numYears += t_numYears;  // This sets the number of years
}
void InvestmentData::SetTotalWithDeposits(double t_totalAmount) {
	this->m_TotalWithDeposits += t_totalAmount;  // This sets the total with deposits
}
void InvestmentData::SetTotalWithoutDeposits(double t_totalAmount) {
	this->m_TotalWithoutDeposits += t_totalAmount;  // This sets the total without deposits
}
double InvestmentData::calcInterestWithDeposit() {
	return ((this-> m_TotalWithDeposits) * ((this->m_annualInterest / 100) / 12));  // This calclates the interest with deposits
}
double InvestmentData::calcInterestWithoutDeposit() {
	return ((this->m_TotalWithoutDeposits) * ((this->m_annualInterest / 100) / 12)); // This calculates the interest without deposits
}
double InvestmentData::GetTotalWithDeposits() {  // Gets the total with deposits
	return this->m_TotalWithDeposits;
}
double InvestmentData::GetTotalWithoutDeposits() {  // Gets the total without deposits
	return this->m_TotalWithoutDeposits;
}

