#include <iostream>
#include <string>
#include <iterator>
using namespace std;

int main() {
    //var decleration
    string input{"\0"};
    int incremented_var{0};
    unsigned int stop_the_process{0};
    //data reception
    cout << "Pls enter yo string. ";
    getline(cin >> ws, input);
    
    //disection of characters
    while(stop_the_process < size(input)){
        char dynamic_char{input.at(incremented_var)};
        cout << endl << dynamic_char;
        stop_the_process++;
        incremented_var++;
    }
    return 0;
}