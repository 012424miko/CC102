#include <iostream>

using namespace std;

int main() {
	
	int age;
	char parent;
	double money;
	string toPrintShow, toPrintMoney;
	
	cout << "Enter age: ";
	cin >>age;
	cout << "Are you with parent? (Y or N):";
	cin >>parent;
	cout << "Enter amount of money:";
	cin >>money;
	if (age > 13) {
		if parent == 'Y') {
			cout << "G or PG" << endl;
		}	else if (parent == 'N' || parent == 'n') {
			cout << "G" << endl;	
		}
	}
	}
	else
		toPrintShow = "R, PG & G show.";
	cout << "Enter money:";
	cin >> money;
	if (money<7.5)
		toPrintMoney = "Not enough money.";
	else if(money<10.5)
		toPrintMoney = "Can go to matinee show.";
	else
		toPrintMoney = "Can go to evening & matinee show.";
	cout<< toPrintShow << endl;
	cout<< toPrintMoney << endl;
	return 0;
}