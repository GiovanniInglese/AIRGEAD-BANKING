#pragma once
#ifndef AIRGEADBANKING_BANKINGDATA_H_
#define AIRGEADBANKING_BANKINGDATA_H_

class InvestmentData {   /*
	This class sets and gets the initial deposit, monthly deposit, annual interest earned and the number of years
	also defines functions of calculating interest with and witout deposits
	*/

public:
	void SetInitialInvestment(double  t_initialInvestment);
	void SetMonthlyDeposit(double t_monthlyDeposit);
	void SetAnnualInterest(double t_annualInterest);
	void SetNumYears(int t_numYears);
	void SetTotalWithDeposits(double t_totalAmount);
	void SetTotalWithoutDeposits(double t_totalAmount);


	double GetInitialInvestMent() { return m_initialInvestment; }
	double GetMonthlyDeposit() { return m_monthlyDeposit; }
	double GetAnnualInterest() { return m_annualInterest; }
	int GetNumYears() { return m_numYears; }
	double GetTotalWithDeposits();
	double GetTotalWithoutDeposits();
	double calcInterestWithDeposit();
	double calcInterestWithoutDeposit();

private: // initializes the return amounts
	double m_initialInvestment = 0.0;
	double m_monthlyDeposit = 0.0;
	double m_annualInterest = 0.0;
	int m_numYears = 0;
	double m_TotalWithDeposits = 0.0;
	double m_TotalWithoutDeposits = 0.0;



};

#endif 

