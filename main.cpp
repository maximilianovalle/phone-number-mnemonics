#include <iostream>
#include <string>
#include <vector>
#include <cctype>   // allows access to functions for chars
#include <fstream>  // allows i/o stream
using namespace std;


// functions --
bool IsPhoneValid(string phoneNum);

// - - - - - - - - - - - - - - - - - -

int main() {
    // collect input phone number (###-####)
    string phoneNum;
    cin >> phoneNum;

    // reads from text file "ShortList.txt"
    ifstream fin("ShortList.txt");
    // outputs to text file "Mnemonics.txt"
    ofstream fout("output.txt");

    bool validity;
    validity = IsPhoneValid(phoneNum);

    // checks if phoneNum is valid
    if (validity == false) {
        cout << "Invalid phone number" << endl;
    }

    else {
        cout << "Valid!" << endl;                                   // FIXME: delete before submission
    }




    // misc variables
    string line;

    // declare separate vectors for words of length 3, 4, and 7
    vector<string> output3(0);
    vector<string> output4(0);
    vector<string> output7(0);

    // separate phoneNum into three strings (###-#### -> ###, ####, and #######)
    string phone1;
    string phone2;
    string phoneTot;

    phone1 = phoneNum.substr(0,3);      // output3
    phone2 = phoneNum.substr(4,7);      // output4
    phoneTot = phone1 + phone2;         // output7

    // two dimension array of letters:numbers
    char num2Letters[8][5] = {
        {'2', 'a', 'b', 'c'},       // 0
        {'3', 'd', 'e', 'f'},       // 1
        {'4', 'g', 'h', 'i'},       // 2
        {'5', 'j', 'k', 'l'},       // 3
        {'6', 'm', 'n', 'o'},       // 4
        {'7', 'p', 'q', 'r', 's'},  // 5
        {'8', 't', 'u', 'v'},       // 6
        {'9', 'w', 'x', 'y', 'z'}   // 7
        // 0   1    2    3    4
    };

    // while ShortList.txt inputs a line
    while (fin >> line) {

        // if line is 3 characters
        if (line.size() == 3) {
            output3.push_back(line);
        }

        // if line is 4 characters
        if (line.size() == 4) {
            output4.push_back(line);
        }

        // if line is 7 characters
        if (line.size() == 7) {
            output7.push_back(line);
        }
    }

    // write each word in the final array into output.txt



    // closes "ShortList.txt"
    fin.close();
    // closes "output.txt"
    fout.close();
    
    return 0;
}

// - - - - - - - - - - - - - - - - - -

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