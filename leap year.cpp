#include<iostream>
using namespace std;


int main() {
	int year;
	
	cout << "Enter a year: " << endl;
	cin >> year;
	
	// condition to check whether the user entered a leap year or not
	
	if (year % 4 == 0) {
		
		if (year % 100 == 0) {
			
			if (year % 400 == 0) {
				
				cout << year << "is a leap year" << endl;
			}
			else {
				cout << year << "is not a leap year" << endl;
			}
			
		cout << year << "is a leap year" << endl;
			
		}
		else {
			cout << year << "is not a leap year" << endl;
		}
	}
	else {
	cout << year << "is not a leap year" << endl;
		}
}
