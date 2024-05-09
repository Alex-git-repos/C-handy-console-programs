#include <iostream>
#include <string>
#include <iterator>
using namespace std;
int main() {
    // request data
    string encrypt_yn{"en"};
    string to_perform{'\0'};
    char cont{'y'};
    while(cont == 'y') {
            cout << "Welcome. Do you want to encrypt or decrypt? (en/de) ";
    cin >> encrypt_yn;
    
    // encrypt or decrypt check
    if(encrypt_yn == "en") {
        cout << endl << "What would you like to encrypt? ";
        getline(cin >> ws, to_perform);
        //encrypting/decrypting process
        
        unsigned int when_stop{0}; // When_stop is to tell the while loop when to stop and to serve as the index for reading characters of a string. when_stop will never go out of array bounds.
        while(when_stop < size(to_perform)) {
            
            char dynamic_letter{to_perform.at(when_stop)};
            
            switch(dynamic_letter) {
                case 'a':
                case 'A':
                    cout << "b";
                    break;
                case 'b':
                case 'B':
                    cout << "c";
                    break;
                case 'c':
                case 'C':
                    cout << "d";
                    break;
                case 'd':
                case 'D':
                    cout << "e";
                    break;
                case 'e':
                case 'E':
                    cout << "f";
                    break;
                case 'f':
                case 'F':
                    cout << "g";
                    break;
                case 'g':
                case 'G':
                    cout << "h";
                    break;
                case 'h':
                case 'H':
                    cout << "i";
                    break;
                case 'i':
                case 'I':
                    cout << "j";
                    break;
                case 'j':
                case 'J':
                    cout << "k";
                    break;
                case 'k':
                case 'K':
                    cout << "l";
                    break;
                case 'l':
                case 'L':
                    cout << "m";
                    break;
                case 'm':
                case 'M':
                    cout << "n";
                    break;
                case 'n':
                case 'N':
                    cout << "o";
                    break;
                case 'o':
                case 'O':
                    cout << "p";
                    break;
                case 'p':
                case 'P':
                    cout << "q";
                    break;
                case 'q':
                case 'Q':
                    cout << "r";
                    break;
                case 'r':
                case 'R':
                    cout << "s";
                    break;
                case 's':
                case 'S':
                    cout << "t";
                    break;
                case 't':
                case 'T':
                    cout << "u";
                    break;
                case 'u':
                case 'U':
                    cout << "v";
                    break;
                case 'v':
                case 'V':
                    cout << "w";
                    break;
                case 'w':
                case 'W':
                    cout << "x";
                    break;
                case 'x':
                case 'X':
                    cout << "y";
                    break;
                case 'y':
                case 'Y':
                    cout << "z";
                    break;
                case 'z':
                case 'Z':
                    cout << "a";
                    break;
                default: cout << dynamic_letter;
                    break;
            }
            when_stop++;
        }
    } else if(encrypt_yn == "de") {
        cout << endl << "What would you like to decrypt? ";
        getline(cin >> ws, to_perform);
        
        unsigned int when_stop{0}; // When_stop is to tell the while loop when to stop and to serve as the index for reading characters of a string. when_stop will never go out of array bounds.
        while(when_stop < size(to_perform)) {
            
            char dynamic_letter{to_perform.at(when_stop)};
            
            switch(dynamic_letter) {
                case 'a':
                case 'A':
                    cout << "z";
                    break;
                case 'b':
                case 'B':
                    cout << "a";
                    break;
                case 'c':
                case 'C':
                    cout << "b";
                    break;
                case 'd':
                case 'D':
                    cout << "c";
                    break;
                case 'e':
                case 'E':
                    cout << "d";
                    break;
                case 'f':
                case 'F':
                    cout << "e";
                    break;
                case 'g':
                case 'G':
                    cout << "f";
                    break;
                case 'h':
                case 'H':
                    cout << "g";
                    break;
                case 'i':
                case 'I':
                    cout << "h";
                    break;
                case 'j':
                case 'J':
                    cout << "i";
                    break;
                case 'k':
                case 'K':
                    cout << "j";
                    break;
                case 'l':
                case 'L':
                    cout << "k";
                    break;
                case 'm':
                case 'M':
                    cout << "l";
                    break;
                case 'n':
                case 'N':
                    cout << "m";
                    break;
                case 'o':
                case 'O':
                    cout << "n";
                    break;
                case 'p':
                case 'P':
                    cout << "o";
                    break;
                case 'q':
                case 'Q':
                    cout << "p";
                    break;
                case 'r':
                case 'R':
                    cout << "q";
                    break;
                case 's':
                case 'S':
                    cout << "r";
                    break;
                case 't':
                case 'T':
                    cout << "s";
                    break;
                case 'u':
                case 'U':
                    cout << "t";
                    break;
                case 'v':
                case 'V':
                    cout << "u";
                    break;
                case 'w':
                case 'W':
                    cout << "v";
                    break;
                case 'x':
                case 'X':
                    cout << "w";
                    break;
                case 'y':
                case 'Y':
                    cout << "x";
                    break;
                case 'z':
                case 'Z':
                    cout << "y";
                    break;
                default: cout << dynamic_letter;
                    break;
            }
            when_stop++;
        }
    }
    cout << endl << "would you like to perform a task again?(y/n) ";
    cin >> cont;
    }

    return 0;
}