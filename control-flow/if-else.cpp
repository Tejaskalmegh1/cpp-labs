#include<iostream>
using namespace std;

int main(){
    int numberOne, numberTwo;
    cout<<"\n enter first number : ";
    cin>>numberOne;
    cout<<"\n enter second number : ";
    cin>>numberTwo;

    // if the condition of if(condition) statement is true then if bolck of code is execute otherwise else block of code will execute

    if (numberOne > numberTwo) {
        cout<<numberOne<<" is greater..";
    } 
    else {
        cout<<numberTwo<<" is greater..";
    }
    
    return 0;
}