#include<iostream>
using namespace std;

int choice(){
    int choice;
    cout << "Menu:" << endl;
    cout << "Enter 1 for +" << endl;
    cout << "Enter 2 for -" << endl;
    cout << "Enter 3 for *" << endl;
    cout << "Enter 4 for /" << endl;
    cout << "Enter 5 for %" << endl;
    cout << "Enter 0 for the exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}

void calculate(int choice, int firstNumber, int secondNumber){
    switch (choice){
        case 0:
            cout << "Thank you for using calculator." << endl;
            break;

        case 1:
            cout << "Addition of " << firstNumber << " and " << secondNumber << " is " << firstNumber + secondNumber << endl;
            break;

        case 2:
            cout << "Substraction of " << firstNumber << " and " << secondNumber << " is " << firstNumber - secondNumber << endl;
            break;

        case 3:
            cout << "Multiplication of " << firstNumber << " and " << secondNumber << " is " << firstNumber * secondNumber << endl;
            break;

        case 4:
            cout << "Division of " << firstNumber << " and " << secondNumber << " is " << firstNumber / secondNumber << endl;
            break;

        case 5:
            cout << "Modulas of " << firstNumber << " and " << secondNumber << " is " << firstNumber % secondNumber << endl;
            break;
    }
}

int main(){
    int firstNumber, secondNumber, choice_;
    bool repeat;
    do {
        choice_ = choice();
        if (choice_ != 0){
            cout << "Enter first number: ";
            cin >> firstNumber;

            cout << "Enter second number: ";
            cin >> secondNumber;
        }

        calculate(choice_, firstNumber, secondNumber);
        cout << endl;
    }while(choice_);
    return 0;
}