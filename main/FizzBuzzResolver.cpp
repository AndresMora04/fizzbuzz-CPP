#include "FizzBuzzResolver.h"

void FizzBuzzResolver::initArray()
{
	for (int i = 1; i <= ARRAY_SIZE; i++) {
		first100NumberList[i - 1] = i;
	}
}

void FizzBuzzResolver::showArray() 
{
	initArray();

	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << first100NumberList[i] << ", ";
	}
}

bool FizzBuzzResolver::isDivisibleByThree(int number)
{
	return (number % 3 == 0);
}

void FizzBuzzResolver::replaceDivisibleBy3WithFizz()
{
	initArray();

	for (int i = 0; i < 100; ++i) {
		if (isDivisibleByThree(first100NumberList[i])) {
			cout << "Fizz ";
		}
		else {
			cout << first100NumberList[i] << " ";
		}
	}
	cout << endl;
}


