#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <deque>
#include <vector>
using namespace std;

void firstFunction(string word);
void secondFunction(int number);
void thirdFunction(string A, string B);
int fourthFunction(int A, int B);
int fifthFunction(int number);
int sixthFunction(vector<int> number);

int main(){

    /*
    firstFunction("skyflakes");
    secondFunction(16);
    thirdFunction("Man", "doga");
    cout << fourthFunction(4,2);
    cout << endl;

    cout << fifthFunction(23);
    cout << endl;
    */
    vector<int> newVector = {2,2,3,3,4,4};

    cout << sixthFunction(newVector);
}

//Reverses a word
void firstFunction(string word){

    reverse(word.begin(), word.end());
    cout << word;

}

//Checks if number is divisible 4 and 7
void secondFunction(int number){

    if(number % 4 == 0 && number % 7 != 0){

        cout << "by 4";
    }
    else if(number % 4 != 0 && number % 7 ==0){

        cout << "by 7";
    }
    else if(number%4 ==0 && number %7 ==0){

        cout << "by 4 and 7";
    }else{

        cout << "Not divisible";
    }
}

//string length checker
void thirdFunction(string A, string B){


    if(A.length() != B.length()){

        cout << "Invalid string";
    }else{

        cout << "string same length";
    }
}

//exponent function

int fourthFunction(int A, int B){

    return pow(A,B);
}


int fifthFunction(int number){

    deque<int> binary;
    int remainder, numberOne;

    //do-while loop converts decimal to binary
    do{
        remainder = number % 2;
        binary.push_front(remainder);
        number = number / 2;
    }while(number != 0);

    deque<int>::iterator it = binary.begin();

    for(it; it != binary.end(); ++it){
        if(*it == 1){

            numberOne++;
        }
    }
    return numberOne;
}

int sixthFunction(vector<int> number){

    sort(number.begin(), number.end()); // sorts vector in increasing order

    for(int i=0; i < number.size() ; ++i){
        //test input {2,2,2,3,4,}
        //checks if adjacent number is equal to it
        if(number[i] != number[i+1]){

        //checks third adjacent number if it’s the same
            if(number[i+1] != number[i+2]){

                return number[i+1];
                break;
            }
            if(number[i] != number[i-1]){

                return number[i];
                break;

            }
        }
    }
    return 0;
}
