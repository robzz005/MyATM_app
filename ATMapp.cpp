#include<iostream>
using namespace std;

void showMenu() {
	cout << "________Menu________"<<endl;
	cout << "1. Your balance "<<endl;
	cout << "2. Deposit"<<endl;
	cout << "3. Withdraw"<<endl;
	cout << "4. Exit";
}

int main() {

	int pin = 1343;
	int option;
	float balance = 1200;

	do {
		cout << "Enter PIN";
		cin >> pin;


		if (pin == 1343) {
			showMenu();

		}
		else {
			cout << "Incorrect PIN";
		}


		cin >> option;

		switch (option) {

		case 1: cout << "Your balance is " << balance << " $";
			break;
		case 2: cout << "Deposit amount";
			float deposit;
			cin >> deposit;
			balance += deposit;
			cout << "You have deposited" << deposit << "to your acocunt";
			break;
		case 3: cout << "Withraw amount";
			float withdraw;
			cin >> withdraw;
			if (withdraw <= balance) {
				balance -= withdraw;
				cout << "Transaction accepted. Please wait...";
			}
			else {
				cout << "Transaction declined";
			}

		}
	} while (option != 4);
	system("pause>0");

}
