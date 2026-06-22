#include<iostream>
using namespace std;

int main(){
    int numberOne, numberTwo;
    cout<<"\n enter first number: ";
    cin>>numberOne;
    cout<<"\n enter second number: ";
    cin>>numberTwo;

    // if the condition of if(condition) statement is true then the block of code is executed
    
    if(numberOne > numberTwo){
        cout<<numberOne<<" is greater";
    }

    return 0;
}