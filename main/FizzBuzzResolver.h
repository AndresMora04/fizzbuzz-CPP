#pragma once
#include <iostream>
using namespace std;
#define ARRAY_SIZE 100

class FizzBuzzResolver
{
private:
	int first100NumberList[ARRAY_SIZE];
	void initArray();
public:
	void showArray();
	bool isDivisibleByThree(int number);
	void replaceDivisibleBy3WithFizz();
};

