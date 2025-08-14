#include <iostream>

void printNumbers();
void naturalNumbers();
void factorialNumbers();
void multiplicationTable();
void printPattern();
void primeNumber();
void reverseNumbers();
void SumOfOddandEven();

using namespace std;

int main() {

	int choose;
	char repeat;
		
	while (true) {

		cout << "---------------------------------------------" << endl;
		cout << "Choose a Function to use:" << endl;
		cout << "[1] - Print Numbers" << endl;
		cout << "[2] - Sum of Natural Numbers" << endl;
		cout << "[3] - Factorial of a Number" << endl;
		cout << "[4] - Multiplication Table" << endl;
		cout << "[5] - Print a Pattern" << endl;
		cout << "[6] - Check Prime Number" << endl;
		cout << "[7] - Reverse Counting" << endl;
		cout << "[8] - Sum of Odd and Even Numbers" << endl;

		cout << "\nEnter a Number: ";
		cin >> choose;

		switch (choose)
			{
			case 1: {
				cout << "\nPrint Numbers Function\n";
				printNumbers();
				break;
			}

			case 2: {
				cout << "\nSum of Natural Numbers Function\n";
				naturalNumbers();
				break;
			}

			case 3: {
				cout << "\nFactorial of a Number Function\n";
				factorialNumbers();
				break;
			}

			case 4: {
				cout << "\nMultiplication Table Function\n";
				multiplicationTable();
				break;
			}

			case 5: {
				cout << "\nPrint a Pattern Function\n";
				printPattern();
				break;
			}

			case 6: {
				cout << "\nCheck Prime Number Function\n";
				primeNumber();
				break;
			}

			case 7: {
				cout << "\nReverse Counting Function\n";
				reverseNumbers();
				break;
			}

			case 8: {
				cout << "\nSum of Odd and Even Numbers Function\n";
				SumOfOddandEven();
				break;
			}

			default: {
				cout << "Error! Please Try Reset and Try Again.";
				break;
			}
		}

		cout << "\nWould You Like to Try Again (Y/N): ";
		cin >> repeat;

		if (repeat == 'n' || repeat == 'N') {
			cout << "Exiting Program" << endl;
			break;
		}
		else {
			cout << "\n";
			continue;
		}
	}

	return 0;
}