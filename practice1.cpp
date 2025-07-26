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

int getNumbers(string message){
    int num;
    cout << message;
    cin >> num;
    return num;
}

bool calculate(int choice){
    int firstNumber, secondNumber;
    if (choice > 0 && choice <= 5){
        firstNumber = getNumbers("Enter first number: ");
        secondNumber = getNumbers("Enter second number: ");
    }
    cout << endl;
    switch (choice){
        case 0:
            cout << "Thank you for using calculator." << endl;
            return false;
            break;

        case 1:
            cout << "Addition of " << firstNumber << " and " << secondNumber << " is " << firstNumber + secondNumber << endl << endl;
            return true;
            break;

        case 2:
            cout << "Substraction of " << firstNumber << " and " << secondNumber << " is " << firstNumber - secondNumber << endl << endl;
            return true;
            break;

        case 3:
            cout << "Multiplication of " << firstNumber << " and " << secondNumber << " is " << firstNumber * secondNumber << endl << endl;
            return true;
            break;

        case 4:
            cout << "Division of " << firstNumber << " and " << secondNumber << " is " << firstNumber / secondNumber << endl << endl;
            return true;
            break;

        case 5:
            cout << "Modulas of " << firstNumber << " and " << secondNumber << " is " << firstNumber % secondNumber << endl << endl;
            return true;
            break;

        default:
            cout << "Invalid choice ... try again" << endl << endl;
            return true;
            break;
    }
}

int main(){
    while(calculate(choice())){}
    return 0;
}