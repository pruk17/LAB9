#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double loan, interest, EXinterest , pay, NewBalance, Total;
    
    int i = 1;
	cout << "Enter initial loan: ";
    cin >> loan;
	cout << "Enter interest rate per year (%): ";
    cin >> interest;
	cout << "Enter amount you can pay per year: ";
    cin >> pay;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

    NewBalance = loan;
    do{
    if(NewBalance == 0.0){
        break;
    }
    else{
    cout << fixed << setprecision(2); 
    //EndOfYear
	cout << setw(13) << left << i; 
    //PrevBalance
	cout << setw(13) << left << NewBalance;
    //Interest
    EXinterest = NewBalance * (interest/100);  
	cout << setw(13) << left << EXinterest;
    //Total
    Total = NewBalance + EXinterest;
	cout << setw(13) << left << Total;
    //Payment
    if(pay > Total){
        pay = Total;
        cout << setw(13) << left << pay;
    }
    else{
        cout << setw(13) << left << pay;
    }
    //NewBalance
    NewBalance = Total - pay;
    if(NewBalance <= 0){
        cout << setw(13) << left << 0.00;
        break;
    }
	cout << setw(13) << left << NewBalance;
	cout << "\n";
    i++;
    }	
    }
    while(NewBalance >= 0.0);
}