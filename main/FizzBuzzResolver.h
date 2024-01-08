#pragma once
#include <iostream>
#include <string>
using namespace std;
#define ARRAY_SIZE 100

class FizzBuzzResolver
{
private:
	int first100NumberList[ARRAY_SIZE];
	void initArray();
	bool isDivisibleByFive(int number);
public:
	bool isDivisibleByThree(int number);
	bool isExactlyDivisible(int number, int divisor);
	void applyFizzBuzzLogic();
	void applyFizzBuzzPingPongLogic();
};

