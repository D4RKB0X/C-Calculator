#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

void printNumbers() {
	{
		int n;

		cout << "Enter a Number to Loop: ";
		cin >> n;

		for (int i = 1; i <= n; i++) {
			cout << i << endl;
		}
	}
}

void naturalNumbers() {
	{
		int n, sum = 0;

		cout << "Enter the Value of N: ";
		cin >> n;

		for (int i = 1; i <= n; i++) {
			sum += i;
		}
		cout << "Sum of the Value is: " << sum << endl;
	}
}

void factorialNumbers() {
	{
		int n, fact = 1;

		cout << "Enter a Number: ";
		cin >> n;

		for (int i = 1; i <= n; i++) {
			fact *= i;
		}
		cout << "Factorial of the Number is: " << fact << endl;
	}
}

void multiplicationTable() {
	{
		int n, div = 1;

		cout << "Enter a Number: ";
		cin >> n;

		for (int i = 1; i <= 10; i++) {
			div = i * n;
			cout << i << " x " << n << " = " << div << endl;
		}
	}
}

void printPattern() {
	{
		int n;

		cout << "Enter a Number: ";
		cin >> n;

		for (int i = 1; i <= n;i++) {
			for (int j = 1; j <= i; j++) {
				cout << "*";
			}
			cout << endl;
		}
	}
}

static bool isPrime(int n) {
	{
		if (n <= 1) {
			return false;
		}

		else {
			for (int i = 2; i <= n / 2; ++i) {
				if (n % i == 1) {
					return false;
				}
			}
		}

		return true;
	}
}

void primeNumber() {
	{
		int a;

		cout << "Enter a Number: ";
		cin >> a;

		if (isPrime) {
			cout << a << " is a Prime Number" << endl;
		}
		else {
			cout << a << " is not a Prime Number" << endl;
		}
	}
}

void reverseNumbers() {
	{
		int n, rn = 0, r;

		cout << "Enter a 6 Digit Number: ";
		cin >> n;

		for (rn; n != 0; n /= 10) {
			r = n % 10;
			rn = rn * 10 + r;
		}

		cout << "Reversed Number: " << rn << endl;
	}
}

void SumOfOddandEven() {
	{
		int n, oddSum = 0, evenSum = 0;

		cout << "Enter a Number: ";
		cin >> n;

		for (int i = 1; i <= n; i++) {
			if (i % 2 == 0) {
				evenSum += i;
			}
			else {
				oddSum += i;
			}
		}

		cout << "Sums of Odd is: " << oddSum << endl;
		cout << "Sums of Even is: " << evenSum << endl;
	}
}