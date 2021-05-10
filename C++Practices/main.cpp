#include <iostream>
#include "Functions.h"
#include <math.h>
#include <iomanip>
#include <string>
using namespace std;

template <class T, class U>
U biggerNumber(T a, U b);

int factorial(int number);
bool primeNumber(int number);
bool palindrome(int number);
float C2Fconverter(float celsius);
float F2Cconverter(float fahrenheit);
int exponent(int base, int raise);

int main(){

    Functions f1;
    /*
    f1.divisibility(14);

    f1.stringReversal("Create Strit");

    f1.stringChecker("Kevin","Arnel");
    */
    f1.decimalBinary(260);


}

//a template creates a generic data type
//enabling the function to accept diff. data type
//return type relies on the return type of argument
//1 class template allows the same data type per call (int-int)
//2 class template allows 2 different data type per call (int-float)
template <class T, class U>
U biggerNumber(T a, U b){

    return(a>b?a:b);
}

//factorial using recursion
//factorial follows x*(x-1)*(x-2)... up until x becomes 1
int factorial(int number){

    if(number > 1){

        return number*factorial(number-1);
    }else{

        return 1;
    }
}

//Prime number checker
//A prime is a number that is greater than 1
//its factors are itself and 1 only;
bool primeNumber(int number){

    bool isPrime = true;

    //checks if number is greater than 1
    if(number < 2){

        return false;

    }else{

        for(int i=2; i<= sqrt(number); i++){

            if(number % i == 0){
                isPrime = false;
            }
        }
        return isPrime;
    }
}

//Palindrome checker
//A number is a palindrome if its reverse is equal to
//the original number
bool palindrome(int number){

    int numberCopy, revNumber=0, digit;

    numberCopy = number;

    do{
        //104
        digit = number % 10;
        revNumber = (revNumber * 10 ) + digit;
        number = number / 10;

    }while(number != 0);

    if(numberCopy == revNumber){

        return true;
    }else{

        return false;
    }
}

//Temperature converter
float C2Fconverter(float celsius){

    float fahrenheit;

    fahrenheit = (1.8)*celsius + 32;

    return fahrenheit;

}

float F2Cconverter(float fahrenheit){

    float celsius;

    celsius = (fahrenheit-32)*0.55556;

    return celsius;
}

//exponent function using recursion
int exponent(int base, int raise){

    //when raise = 1; return base;
    if(raise == 1){

        return base;
    }else if(raise == 0){

        return 1;
    }else if(raise < 0){

        return -404;
    }else{

        return base*exponent(base, raise-1);
    }
}

