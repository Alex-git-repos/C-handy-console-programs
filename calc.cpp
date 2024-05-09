#include <iostream>
#include <math.h>
#include <string>
using namespace std;
char is_restart{'n'};
int main() {
    //define runtime variables
    int calc_operator{0};    
    long double value_one{0};
    long double value_two{0};
    char is_tutorial{'n'};
    long double final_value{0};
    //ask for tutorial
    cout << "Welcome to calc, would you like to see a tutorial? (y/n)" << endl;
    cin >> is_tutorial;
    if(is_tutorial == 'y') {
        cout << "First Enter value 1, then enter operator, last value 2." << endl;
    } else if(is_tutorial == 'n') {
        cout << "Ok." << endl;
    }
    //ask for values
    cout << endl << "value 1: ";
    cin >> value_one;
    cout << endl << "operator(0=/,1=*,2=+,3=-,4=^,5='2',6='3'): ";
    cin >> calc_operator;
    
    if(calc_operator == 5) {
    cout << endl << "no value two will be added. Final value:" << endl;
    } else if(calc_operator == 6) {
    cout << endl << "no value two will be added. Final value:" << endl;
    } else {
        cout << endl << "value 2: ";
        cin >>value_two;
    }
    //check and use collected data

    if(calc_operator == 0) {
        final_value = value_one / value_two;
    } else if(calc_operator == 1) {
        final_value = value_one * value_two;
    } else if(calc_operator == 2) {
        final_value = value_one + value_two;
    } else if(calc_operator == 3) {
        final_value = value_one - value_two;
    } else if(calc_operator == 4) {
        final_value = pow(value_one, value_two);
    } else if(calc_operator == 5) {
        final_value = pow(value_one, 2);
    } else if(calc_operator == 6) {
        final_value = pow(value_one, 3);
    }
    //print the final value
    cout << endl << final_value;
    cout << endl << "Size of Final value is: " << sizeof(final_value)*8 << " Bits";
    //end or restart the app
    cout << endl << "would you like to peform another task? (y/n)" << endl;
    cin >> is_restart;
    
    
//    check for repeat
    if(is_restart == 'y'){
        while(is_restart == 'y'){
     //define runtime variables
    int calc_operator{0};    
    long double value_one{0};
    long double value_two{0};
    long double final_value{0};
    //ask for values
    cout << endl << "value 1: ";
    cin >> value_one;
    cout << endl << "operator(0=/,1=*,2=+,3=-,4=^,5='2',6='3'): ";
    cin >> calc_operator;
    
    if(calc_operator == 5) {
    cout << endl << "no value two will be added. Final value:" << endl;
    } else if(calc_operator == 6) {
    cout << endl << "no value two will be added. Final value:" << endl;
    } else {
        cout << endl << "value 2: ";
        cin >>value_two;
    }
    //check and use collected data

    if(calc_operator == 0) {
        final_value = value_one / value_two;
    } else if(calc_operator == 1) {
        final_value = value_one * value_two;
    } else if(calc_operator == 2) {
        final_value = value_one + value_two;
    } else if(calc_operator == 3) {
        final_value = value_one - value_two;
    } else if(calc_operator == 4) {
        final_value = pow(value_one, value_two);
    } else if(calc_operator == 5) {
        final_value = pow(value_one, 2);
    } else if(calc_operator == 6) {
        final_value = pow(value_one, 3);
    }
    //print the final value
    cout << endl << final_value;
    cout << endl << "Size of Final value is: " << sizeof(final_value)*8 << " Bits";
    cout << endl << "would you like to peform another task? (y/n)" << endl;
    cin >> is_restart;
        }
    } else {
    return 0;
    }
}