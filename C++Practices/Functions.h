#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <string>
#include <deque>
using namespace std;


class Functions
{
    public:
        Functions();
        void stringReversal(string word);//Reverses a word
        void divisibility(int number);//Checks if number is divisible 4 and 7
        void stringChecker(string A, string B);//string length checker
        int exponent(int base, int raise);//exponent function
        void decimalBinary(int decimal);//decimal to binary converter

    private:

        deque<int> binary;
};

#endif // FUNCTIONS_H
