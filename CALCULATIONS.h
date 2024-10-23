#pragma once
#ifndef AIRGEADBANKING_CALCULATIONS_H_
#define AIRGEADBANKING_CALCULATIONS_H_
#endif 
#include "BANKINGDATA.h"

class CALCULATIONS { // This is the class to calculate the data with and without deposits
public:
	void dataWithDeposits(InvestmentData t_userInvestment);  
	void dataWithoutDeposits(InvestmentData t_userInvestment);
};

