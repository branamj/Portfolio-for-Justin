//============================================================================
// Name        : ErrorHandling.cpp
// Author      : Justin Branam 01/20/2021
// Version     : 2.0
// Copyright   : Your copyright notice
// Description : Banking Application
//============================================================================

#include <iostream>	//Declares objects that control reading from and writing to the standard streams
#include <iomanip>	// Formats my output
//#include <exception> 	// might need
using namespace std;	// Define the context in which names are defined

int main() {

		// Here are my variables, there was no need to update this section because no changes were made.
	double initialInvestment;
	double monthlyDeposit;
	double AnualInterest;
	double numberYears;
	long double totalInvestment;
	long double initialAmount;
	long double yearsTotalIntest;


//Creating my Menu
	cout << "********************************" << endl;
	cout << "********** Data Input **********" << endl;


try{	// Checks for errors and is thrown if the user unputs something that does not match what is asked
	cout << "Enter  a number 1 through 100000: " << endl;	// Specifies what information the program is looking for.
	cout << "Initial investment amount: $" << endl;

	cin >> initialInvestment;		//Asking for user input

		if (initialInvestment > 100000 || initialInvestment <0){	// If statement which states if user info is greater than what the program
			throw 100000;						// is asking it will throw based on this number.
			}
	}

		catch(int e){
			cout <<"Did not enter a number 1 through 100000." << e <<endl;	// If the if statement is thrown then the program will
		}									// output this statement


try{	// Checks for errors and is thrown if the user unputs something that does not match what is asked
	cout << endl << "Enter  a number 1 through 100000: " << endl;	// Specifies what information the program is looking for.
	cout << "Monthly Deposit: $" << endl;

	cin >> monthlyDeposit;			//Asking for user input

		if (monthlyDeposit > 100000 || monthlyDeposit <0){		// If statement which states if user info is greater than what the program
			throw 100000;						// is asking it will throw based on this number.
			}
	}

		catch(int e){
			cout <<"Did not enter a number 1 through 100000." <<e<<endl;	// If the if statement is thrown then the program will
		}									// output this statement

try{	// Checks for errors and is thrown if the user unputs something that does not match what is asked
	cout << endl << "Enter  a number 1 through 100: " << endl;	// Specifies what information the program is looking for.
	cout << "Annual Interest: %" << endl;

	cin >> AnualInterest;			//Asking for user input

		if (AnualInterest > 100 || AnualInterest <0){			// If statement which states if user info is greater than what the program
			throw 1000;						// is asking it will throw based on this number.
			}
	}

		catch(int e){
			cout <<"Did not enter a number 1 through 100." <<e<<endl;	// If the if statement is thrown then the program will
		}									// output this statement

try{	// Checks for errors and is thrown if the user unputs something that does not match what is asked
	cout << endl << "Enter  a number 1 through 100: " << endl;	// Specifies what information the program is looking for.
	cout << "Number of years: #" << endl;

	cin >> numberYears;			//Asking for user input

		if (numberYears > 100 || numberYears <0){			// If statement which states if user info is greater than what the program
			throw 1000;						// is asking it will throw based on this number.
			}
	}

catch(int e){
	cout <<"Did not enter a number 1 through 100." <<e<<endl;	// If the if statement is thrown then the program will
}									// output this statement


system("PAUSE");	// This statement pauses the program and prints out the line "Press any key to continue . . . "




// After the user inputs the different variables needed, this displays the menu again with what the user
// inputed into the program
	cout << "********************************" << endl;
	cout << "********** Data Input **********" << endl;

	cout << "Initial investment amount: $" << initialInvestment << endl; 	// Showing the user input
	cout << "Monthly Deposit: $" << monthlyDeposit << endl;					// Showing the user input
	cout << "Annual interest rate: %" << AnualInterest << endl;				// Showing the user input
	cout << "Number of years: #" << numberYears << endl;					// Showing the user input


// After my program gets the user input it goes into calculation mode, this is my title for the first part
	cout << endl << "Balance and Interest without additional monthly deposits: " << endl;
	cout << "Years       Year end Balance       Year end Interest" << endl;

	totalInvestment = initialInvestment;


// My first loop which calculates Balance and Interest without additional monthly deposits and corrected
// to output monthly not yearly
	for (int i = 1; i < numberYears; i++) {
		initialAmount = (totalInvestment) * (AnualInterest / 100);
		totalInvestment = totalInvestment + initialAmount;

		cout << "    " << i << "                   ";	//The " " are spaces to format my output
		cout << fixed << setprecision(2) << totalInvestment << "                    ";
		cout << initialAmount<< endl;
	}

// My title for the second output information
		cout << endl << "Balance and Interest with additional monthly deposits: " << endl;
		cout << "Years       Year end Balance       Year end Interest" << endl;

		totalInvestment = initialInvestment;

// My second loop to output Balance and Interest with additional monthly deposits and corrected
// to output monthly not yearly
	for (int i = 1; i <= numberYears; i++) {
		yearsTotalIntest = 0;

		for (int j = 0; j < 12; j++) {
			initialAmount = (totalInvestment + monthlyDeposit) * ((AnualInterest / 100) / 12);
			yearsTotalIntest = yearsTotalIntest + initialAmount;
			totalInvestment = totalInvestment + monthlyDeposit + initialAmount;
		}

			cout << "    " << i << "                   ";	// again " " are spaces to format my output
			cout << fixed << setprecision(2) << totalInvestment << "                 ";
			cout  << yearsTotalIntest << endl;
		}
return 0;
}
