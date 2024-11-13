#include <iostream>

using namespace std;

int main ()
{
	int age;
	
	cout << "What is your age:";
	cin >> age;
	
	if (age < 16) {
		cout << "You are too young to drive!" <<endl;
	}
	else if (age == 16) {
		cout << "You are better to clear the road!" <<endl;
	}
	else {
		cout << "You are pretty getting old!" <<endl;
	}
	return 0;
}
	
		
	
	