#include<iostream>
using namespace std;

int main(){
    
    int numberOne, numberTwo, numberThree;
    cout<<"\n enter first number: ";
    cin>>numberOne;
    cout<<"\n enter second number: ";
    cin>>numberTwo;
    cout<<"\n enter third number: ";
    cin>>numberThree;

    if (numberOne > numberTwo && numberOne > numberThree) {
        cout<<numberOne <<" is greater than "<<numberTwo<<" and "<<numberThree;
    }
    else if (numberTwo > numberOne && numberTwo > numberThree) {
        cout<<numberTwo <<" is greater than "<<numberOne<<" and "<<numberThree;
    }
    else  {
        cout<<numberThree <<" is greater than "<<numberOne<<" and "<<numberTwo;
    }
    
    return 0;
}