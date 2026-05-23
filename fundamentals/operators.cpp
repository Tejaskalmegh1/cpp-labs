#include<iostream>
using namespace std;

int main() {

    int numberOne = 10 , numberTwo = 5;
    
    // arithmetic operators 
    cout<<"\n addition : "<< numberOne + numberTwo;
    cout<<"\n substraction : "<< numberOne - numberTwo;
    cout<<"\n multiplication : "<< numberOne * numberTwo;
    cout<<"\n division : "<< numberOne / numberTwo;
    cout<<"\n mod : "<< numberOne % numberTwo;

    // assignment operators
    numberOne = 5;
    cout<<"\n result : "<< numberOne;
    numberOne += 5;
    cout<<"\n result : "<< numberOne;
    numberOne -= 5;
    cout<<"\n result : "<< numberOne;
    numberOne *= 5;
    cout<<"\n result : "<< numberOne;
    numberOne /= 5;
    cout<<"\n result : "<< numberOne;
    numberOne %= 5;
    cout<<"\n result : "<< numberOne;

    // comparison (relational) operators
    // logical operators
    // increment and decrement operators
    // bitwise operators
    // conditional (ternary) operator

    return 0;
}