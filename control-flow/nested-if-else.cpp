#include <iostream>
using namespace std;

int main() {

    int number;
    cout<<"Enter a number: ";
    cin>>number;

    // nested if-else is an if-else statement inside another if or else block it is used to check multiple conditions one after another

    if(number >= 0) {
        if(number % 2 == 0) {
            cout<<"Positive Even Number";
        } else {
            cout<<"Positive Odd Number";
        }
    } else {
        if(number % 2 == 0) {
            cout<<"Negative Even Number";
        } else {
            cout<<"Negative Odd Number";
        }
    }

    return 0;
}