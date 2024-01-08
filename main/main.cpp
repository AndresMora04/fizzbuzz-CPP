#include <iostream>
#include "FizzBuzzResolver.h"

using namespace std;
int main()
{
    FizzBuzzResolver fizzBuzzResolver;

    fizzBuzzResolver.applyFizzBuzzLogic();
    cout << endl;
    fizzBuzzResolver.applyFizzBuzzPingPongLogic();
}