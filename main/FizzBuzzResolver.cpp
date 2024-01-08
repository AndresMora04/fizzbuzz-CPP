#include "FizzBuzzResolver.h"

void FizzBuzzResolver::initArray()
{
	for (int i = 1; i <= ARRAY_SIZE; i++) {
		first100NumberList[i - 1] = i;
	}
}

bool FizzBuzzResolver::isDivisibleByFive(int number)
{
	return (number % 5 == 0);
}

bool FizzBuzzResolver::isDivisibleByThree(int number)
{
	return (number % 3 == 0);
}

bool FizzBuzzResolver::isExactlyDivisible(int number, int divisor)
{
	return (number % divisor == 0);
}

void FizzBuzzResolver::applyFizzBuzzLogic() 
{
	initArray();
	for (int i = 0; i < ARRAY_SIZE; i++) {
		if (isDivisibleByFive(first100NumberList[i]) && isDivisibleByThree(first100NumberList[i])) {
			cout << "FizzBuzz ";
		}
		else if(isDivisibleByThree(first100NumberList[i])) {
			cout << "Fizz ";
		}
		else if(isDivisibleByFive(first100NumberList[i])) {
			cout << "Buzz ";
		}
		else {
			cout << first100NumberList[i] << " ";
		}
	}
	cout << endl;
}



