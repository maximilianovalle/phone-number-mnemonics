/**

1 = ---
2 = abc
3 = def
4 = ghi
5 = jkl
6 = mno
7 = pqrs
8 = tuv
9 = wxyz
0 = ---

**/

#include <iostream>
#include <string>
#include <cctype>   // allows access to functions for chars
using namespace std;


// functions --
bool IsPhoneValid(string phoneNum);


int main() {
    // collect input phone number (###-####)
    string phoneNum;
    cin >> phoneNum;

                                                                    // TODO: read from ShortList.txt

    // checks if phoneNum is valid
    if (IsPhoneValid(phoneNum) == false) {
        cout << "Invalid phone number" << endl;
    }

    else {
        cout << "Valid!" << endl;                                   // FIXME: delete before submission
    }
    
    return 0;
}


// functions --
bool IsPhoneValid(string phoneNum) {
    // misc variables
    bool phoneValid = true;
    int phoneLen = phoneNum.size();
    char tempChar;

    // iterate through string and check for correct format (isdigit, '-', length)    -->     if false, bool = false
    // iterate through string and check that each num is NOT 0 or 1                  -->     if false, bool = false
    for (int i = 0; i < phoneLen; i++) {
        tempChar = phoneNum.at(i);

        if (phoneLen != 8) {                                        // if length is not 8
            phoneValid = false;                                     // then phoneValid = false
        }

        if (i == 3) {                                               // if at index 3
            if (tempChar != '-') {                                  // if char at index 3 is NOT '-'
                phoneValid = false;                                 // then phoneValid = false
            }
        }

        else {                                                      // else if not at index 3
            if (isdigit(tempChar) == false) {                       // if char at index is not a digit
                phoneValid = false;                                 // then phoneValid = false
            }
            else if (tempChar == '0' || tempChar == '1') {
                phoneValid = false;
            }
        }
    }

    return phoneValid;
}