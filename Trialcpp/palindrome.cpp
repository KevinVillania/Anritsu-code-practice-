#include <iostream>
using namespace std;

int main(){

    int numCopy,num,digit,rev=0;

    cout << "Enter a number: ";
    cin >> num;

    numCopy = num;

    do{

        //124
        digit = num % 10; //solves for the unit digit/remainder (4)
        rev = (rev*10) + digit; //sets unit digit as first digit of new number
        num = num / 10;

    }while(num!=0);

    cout << "Original number: " << numCopy << " Reverse number: " << rev << endl;

    if(numCopy == rev){

        cout << "Number is a palindrome";
    }else{

        cout << "Number is not a palindrome";
    }


}
