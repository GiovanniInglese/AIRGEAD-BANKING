#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <string>
using namespace std;
#include "CALCULATIONS.h"

void CALCULATIONS::dataWithoutDeposits(InvestmentData t_userInvestment) {  //Creates method for calculating and dsiplaying the data without deposits
	double initialInvestment = t_userInvestment.GetInitialInvestMent();  // Gets the initial investment and assigns it to variable initialInvestment
	int Years = t_userInvestment.GetNumYears();// Gets the num years and assigns it to variable years
	// Creates the data report screen for balance and interest without deposits
	cout << setfill(' ') << setw(75) << "Balance and Interest without monthly deposits" << setfill(' ') << setw(75) << endl;
	cout << setfill('=') << setw(100) << '=' << endl;
	cout << setfill(' ') << left << setw(30) << "Year" << "Year End Earned Interest" << right << setw(30) << "Year End Balance" << endl;
	cout << setfill('-') << setw(100) << '-' << endl;
	cout << endl;

	t_userInvestment.SetTotalWithoutDeposits(initialInvestment);  //sets the total for investment withouyt deposit with the initial amount
	double earnedInterest = 0;  // creates variable for the loop to update the total balance
	unsigned int yearCount; // for year count
	unsigned int MonthCount; //  for month count

	for (yearCount = 1; yearCount <= Years; yearCount++) { // Loops through the given years and prints the updated total and interest for each year
		for (MonthCount = 1; MonthCount <= 12; MonthCount++) { // loops and calculates the investment growth throughour the year each year
			double interest = t_userInvestment.calcInterestWithoutDeposit(); // Calculates the interest without deposits
			earnedInterest += interest;  // Adds the interest each month to earned interest which is the variable for updating the total
			
			

		}
		

		t_userInvestment.SetTotalWithoutDeposits(earnedInterest);  //Sets the total without deposits to the earned interest variable that was looped and appended to
		// Prints the data into the rows and columns
		cout << setfill(' ') << left << setw(30) << yearCount;
		cout << "$" << fixed << setw(30) << setprecision(2) << earnedInterest;
		cout << right << setw(8) << "$" << fixed << setprecision(2) << t_userInvestment.GetTotalWithoutDeposits();
		cout << endl;
		earnedInterest = 0;

	
	}
}

void CALCULATIONS::dataWithDeposits(InvestmentData t_userInvestment) { // Creates method for calculatinga nd displaying data with deposits
	double initialInvestment = t_userInvestment.GetInitialInvestMent();  // Gets the initial investment
	int Years = t_userInvestment.GetNumYears();  // Gets the number of years
	double monthlyDeopist = t_userInvestment.GetMonthlyDeposit(); // Gets the monthly deposits
	// Prints and displays the data report screen for monthly deposits
	cout << setfill(' ') << setw(72) << "Balance and Interest with monthly deposits" << setfill(' ') << setw(75) << endl;
	cout << setfill('=') << setw(100) << '=' << endl;
	cout << setfill(' ') << left << setw(30) << "Year" << "Year End Earned Interest" << right << setw(30) << "Year End Balance" << endl;
	cout << setfill('-') << setw(100) << '-' << endl;
	cout << endl;

	t_userInvestment.SetTotalWithDeposits(initialInvestment);  //sets total with the initial mount
	double earnedInterest = 0;  //Variable to update the total
	unsigned int year;
	unsigned int month;

	for (year = 1; year <= Years; ++year) {   // loops through the input years and prints the interest and totals for each year
		for (month = 1; month <= 12; ++month) {  // Loops through and calculates the growth from month to month includng interest and monthy deposits
			t_userInvestment.SetTotalWithDeposits(monthlyDeopist);
			double userInterest = t_userInvestment.calcInterestWithDeposit();
			t_userInvestment.SetTotalWithDeposits(userInterest);
			earnedInterest += userInterest;



		}
		// Displays the data in rows and columns
		cout << setfill(' ') << left << setw(30) << year;
		cout << "$" << fixed << setw(30) << setprecision(2) << earnedInterest;
		cout << right << setw(8) << "$" << fixed << setprecision(2) << t_userInvestment.GetTotalWithDeposits();
		cout << endl;


		earnedInterest = 0;
	}


}