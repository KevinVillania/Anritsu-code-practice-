#include <iostream>
#include "Functions.h"
#include <string>
#include <algorithm>
#include <deque>
using namespace std;

Functions::Functions(){

    //ctor
}


//string reversal
void Functions::stringReversal(string word){

    reverse(word.begin(),word.end());
    cout << word;
}

void Functions::stringReversal2(string word){

    //string reversal
    deque<char> reverseName;

    for(int i = word.length()-1; i>=0; --i){

        reverseName.push_back(word[i]);
    }

    for(deque<char>::iterator it = reverseName.begin(); it != reverseName.end(); ++it){

        cout << *it;
    }

}

//divisible by 4 and 7
void Functions::divisibility(int number){

    if(number%4 ==0 && number%7 != 0){

        cout << "divisible by 4 only\n";
    }else if(number%7==0 && number%4 != 0){

        cout << "divisible by 7 only\n";
    }else if(number%4==0 && number%7==0){

        cout << "divisible by 4 and 7\n";
    }else{

        cout << "not divisible";
    }
}

//string length checker
void Functions::stringChecker(string A, string B){

    if(A.length() != B.length()){


        cout << "Not the same length\n";
    }else{

        cout << "The same length\n";
    }
}


//exponent function using recursion
int Functions::exponent(int base, int raise){

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

//decimal to binary converter
void Functions::decimalBinary(int decimal){

    int digit, remainder;

    do{

        digit = decimal % 8;
        binary.push_front(digit);
        decimal = decimal/8;

    }while(decimal != 0);

    deque<int>::iterator it = binary.begin();

    for(it; it != binary.end(); ++it){

        cout << *it;
    }
}
