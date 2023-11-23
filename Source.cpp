#include<iostream>
using namespace std;
int main() {
	double totalamount;
	int loyaltypoints = 0;
	int choice;
	while (true) {
		cout << "Enter 1 to make a purchase,2 to redeem points or 0 to exit: ";
		cin >> choice;
		if (choice == 1) {
			cout << "Enter the total amount you purchased: ";
			cin >> totalamount;
			//Giving 1 loyalty point for each 10$ purchase
			loyaltypoints += (int)(totalamount / 10);
			cout << "Your total loyalty points are: " << loyaltypoints << endl;
		}
		else if (choice == 2)
		{
			if (loyaltypoints >= 10)
			{
				loyaltypoints -= 10;
				cout << "CONGRATS! You got a discount of 5$. Your remaining points: " << loyaltypoints << endl;
			}
			else {
				cout << "Your points are not enough to redeem";
			}
		}
		else if (choice == 0) {
			break;
		}
		else {
			cout << "Invalid entry! Please try again.";
		}
	}cout << "Thank You for using our loyalty points system";
	return 0;
}