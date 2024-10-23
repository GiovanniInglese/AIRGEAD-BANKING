/*Giovanni Inglese
* CS210
* 10/3/24
*/



#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <string>
using namespace std;

#include "BANKINGDATA.h"
#include "CALCULATIONS.h"

int main(){
	InvestmentData userInvestment;  //Creates object of the investmentdata class
	CALCULATIONS userCalculations; //Creates object of the calculations class
	double initialAmount, monthlyDeposit, interest;  // declares variables for input
	int years; 
	
	//Prints the data input screen and takes in user input
	cout << setfill('*') << setw(34) << '*' << endl;
	cout << setfill('*') << setw(11) << '*' << "Data Input" << setfill('*') << setw(11) << '*'<< endl;
	cout << endl;

	

	cout << "Intitial Investment Amount: ";
	
	 while(!(std::cin >> initialAmount)) {
		 std::cin.clear();
		 std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Invalid input, Enter Input, click enter, then input again" << endl;
		cout << "Intitial Investment Amount: ";
		cin >> initialAmount;
		
	}
	 cout << endl;
	

	
		

	
    cout << "Monthly Deposit: ";
	while (!(std::cin >> monthlyDeposit)) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Invalid input, Enter Input, click enter, then input again" << endl;
		cout  << "Monthly Deposit: ";
		cin >> monthlyDeposit;

	}
	cout << endl;

	
    cout << "Annual Interest: ";
	while (!(std::cin >> interest)) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Invalid input, Enter Input, click enter, then input again" << endl;
		cout << "Annual Interest: ";
		cin >> interest;

	}

	cout << endl;

	
    cout << "Number Of Years: ";
	while (!(std::cin >> years)) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Invalid input, Enter Input, click enter, then input again" << endl;
		cout << "Number Of Years: ";
		cin >> years;

	}
	cout << endl;


	//Sets the data with the user inputs
	userInvestment.SetInitialInvestment(initialAmount);
	userInvestment.SetMonthlyDeposit(monthlyDeposit);
	userInvestment.SetAnnualInterest(interest);
	userInvestment.SetNumYears(years);
	// Displays the data input screen with the user data
	cout << setfill('*') << setw(34) << '*' << endl;
	cout << setfill('*') << setw(11) << '*' << "Data Input" << setfill('*') << setw(11) << '*' << endl;
	cout << endl;

	cout << "Initial Investment Amount: " << setfill(' ') << right << setw(2) << userInvestment.GetInitialInvestMent() << endl;
	cout << endl;
	cout << "Monthly Deposit: " << setfill(' ') << right << setw(2) << userInvestment.GetMonthlyDeposit() << endl;
	cout << endl;
	cout << "Annual Interest: " << setfill(' ') << right << setw(2) << userInvestment.GetAnnualInterest() << endl;
	cout << endl;
	cout << "Number of years: " << setfill(' ') << right << setw(2) << userInvestment.GetNumYears() << endl;
	cout << endl;
	//Calls the data without deposits function with parameters of userInvestment info

	try {
		userCalculations.dataWithoutDeposits(userInvestment);

		cout << endl;
	}
	catch (const std::exception& exc) {
		cout << exc.what() << endl;
		cout << "An error has occured with calculation" << endl;
		
	}

	// Calls the data with deposits function with userInvestment data
	userCalculations.dataWithDeposits(userInvestment);
	
	










	
	
}