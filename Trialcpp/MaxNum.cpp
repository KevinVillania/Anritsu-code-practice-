#include <iostream>
#include <algorithm>
using namespace std;

int numCompare(int x, int y);
void PrintArray(int arr[], int num);
int Factorial(int num);
bool PrimeNumber(int num);
void Palindrome(int number);
float tempConverterC2F(float celsius);
float tempConverterF2C(float fahrenheit);
void printTriangle(int row);
void printTriangle2(int row);

int main(){
    /*
    cout << numCompare(10,44) << endl;

    int arr[5] {11,25,21,134,4};

    cout << *max_element(arr,arr+5) << endl;

    sort(arr,arr+5,greater<int>());

    PrintArray(arr,5);

    cout << endl;

    cout << Factorial(25);

    bool primeNumber;

    primeNumber = PrimeNumber(19);

    if(primeNumber == true){

        cout << "number is prime";
    }else{

        cout << "number is not prime";
    }

    cout << endl;

    Palindrome(122);*/


    //cout << tempConverterF2C(90.1);

    printTriangle(30);
    //cout << endl;
    printTriangle2(30);
}

int numCompare(int x, int y){

    return(y>x)? x:y;
}

void PrintArray(int arr[], int num){

    for(int i=0; i<num; ++i){

        cout << arr[i] << " ";
    }

}

int Factorial(int num){

    if(num == 1){

        return 1;
    }else{

        return num*Factorial(num-1);
    }
}

bool PrimeNumber(int num){

    //A number is prime if its factor is 1 and itself
    //if divisible by 2, not prime

    if(num % 2 == 0 || num % 3 == 0 || num % 4 == 0 || num % 5 ==0 ){

        return false;
    }else{

        return true;
    }
}

void Palindrome(int number){

    int numCopy, rev=0, digit;

    numCopy = number;

    do{
        digit = number % 10;
        rev = (rev*10) + digit;
        number = number/10;

    }while(number != 0);

    if(numCopy == rev){

        cout << "Number is palindrome";
    }else{

        cout << "Number is not palindrome";
    }
}


float tempConverterC2F(float celsius){

    float fahrenheit = 0;

    fahrenheit = (celsius * 9/5) + 32;

    return fahrenheit;
}

float tempConverterF2C(float fahrenheit){


    float cel = 0;

    cel = 0.55556 *(fahrenheit-32);

    return cel;
}

void printTriangle(int row){

    for(int i=0; i<=row; ++i){
        for(int j=1; j<=i; ++j){

            cout << j << " ";
        }
        cout << endl;
    }
}

void printTriangle2(int row){

    for(int i=row; i>=1; --i){
        for(int j=1; j<=i; ++j){

            cout << j << " ";
        }
        cout << endl;
    }
}
