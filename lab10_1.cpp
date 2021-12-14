#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,rate,ppy;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> ppy;
	
	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	double PrevBalance,Interest,Total,Payment,NewBalance,multiple = rate/100.00;
	int EndOfYear = 1;
	PrevBalance = loan;
	cout << fixed << setprecision(2); 
	do{

	Interest = PrevBalance*multiple;
	Total = PrevBalance + Interest;
	Payment = ppy;
	if (Total-Payment < 0){
		Payment = Total;
	}
	NewBalance = Total-Payment;
	
	cout << setw(13) << left << EndOfYear; 
	cout << setw(13) << left << PrevBalance;
	cout << setw(13) << left << Interest;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << Payment;
	cout << setw(13) << left << NewBalance;
	cout << "\n";	

	PrevBalance = NewBalance;
	EndOfYear ++;
	} while(NewBalance != 0);
	return 0;
}