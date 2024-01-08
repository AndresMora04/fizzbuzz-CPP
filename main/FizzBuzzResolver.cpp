#include "FizzBuzzResolver.h"

void FizzBuzzResolver::initArray()
{
	for (int i = 1; i <= ARRAY_SIZE; i++) {
		first100NumberList[i - 1] = i;
	}
}

void FizzBuzzResolver::showArray() {
	initArray();
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << first100NumberList[i] << ", ";
	}
}


