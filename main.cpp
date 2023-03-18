#include <iostream>
#include <string>
#include <vector>
#include <cctype>   // allows access to functions for chars
#include <fstream>  // allows i/o stream
using namespace std;


// functions --
bool IsPhoneValid(string phoneNum);

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

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

    // - - - - - - - - - - - - - - - - - - - - - -

    // misc variables
    string line;

    // declare separate vectors for words of length 3, 4, and 7
    vector<string> output3(0);      // length of 3
    vector<string> output31(0);     // first char
    vector<string> output32(0);     // second char
    vector<string> output33(0);     // third char

    vector<string> output4(0);      // length of 4
    vector<string> output41(0);     // first char
    vector<string> output42(0);     // second char
    vector<string> output43(0);     // third char
    vector<string> output44(0);     // fourth char

    vector<string> output7(0);      // length of 7
    vector<string> output71(0);     // first char
    vector<string> output72(0);     // second char
    vector<string> output73(0);     // third char
    vector<string> output74(0);     // fourth char
    vector<string> output75(0);     // fifth char
    vector<string> output76(0);     // sixth char
    vector<string> output77(0);     // seventh char

    // separate phoneNum into three strings (###-#### -> ###, ####, and #######)
    string phone1;
    string phone2;
    string phoneTot;

    phone1 = phoneNum.substr(0,3);      // output3
    phone2 = phoneNum.substr(4,7);      // output4
    phoneTot = phone1 + phone2;         // output7

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

    // - - - - - - - - - - - - - - - - - - - - - -

    string tempWord;
    char tempChar;

// PHONE 1 FIRST CHAR  - - - - - - - - - - - - - -

    // if first char of phone1 == 2
    if (phone1.at(0) == '2') {

        // iterate through output3
        for (int i = 0; i < output3.size(); i++) {
            tempWord = output3.at(i);
            tempChar = tempWord.at(0);  // first char

            // if first char == 'a' or 'b' or 'c'
            if (tempChar == 'a' || tempChar == 'b' || tempChar == 'c') {

                // add that word to a new array
                output31.push_back(tempWord);
            }
        }
    }

    // if first char of phone1 == 3
    if (phone1.at(0) == '3') {

        for (int i = 0; i < output3.size(); i++) {
            tempWord = output3.at(i);
            tempChar = tempWord.at(0);

            if (tempChar == 'd' || tempChar == 'e' || tempChar == 'f') {
                output31.push_back(tempWord);
            }
        }
    }

    // if first char of phone1 == 4
    if (phone1.at(0) == '4') {

        for (int i = 0; i < output3.size(); i++) {
            tempWord = output3.at(i);
            tempChar = tempWord.at(0);

            if (tempChar == 'g' || tempChar == 'h' || tempChar == 'i') {
                output31.push_back(tempWord);
            }
        }
    }


    // if first char of phone1 == 5
    if (phone1.at(0) == '5') {

        for (int i = 0; i < output3.size(); i++) {
            tempWord = output3.at(i);
            tempChar = tempWord.at(0);

            if (tempChar == 'j' || tempChar == 'k' || tempChar == 'l') {
                output31.push_back(tempWord);
            }
        }
    }


    // if first char of phone1 == 6
    if (phone1.at(0) == '6') {

        for (int i = 0; i < output3.size(); i++) {
            tempWord = output3.at(i);
            tempChar = tempWord.at(0);

            if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                output31.push_back(tempWord);
            }
        }
    }


    // if first char of phone1 == 7
    if (phone1.at(0) == '7') {

        for (int i = 0; i < output3.size(); i++) {
            tempWord = output3.at(i);
            tempChar = tempWord.at(0);

            if (tempChar == 'p' || tempChar == 'q' || tempChar == 'r' || tempChar == 's') {
                output31.push_back(tempWord);
            }
        }
    }


    // if first char of phone1 == 8
    if (phone1.at(0) == '8') {

        for (int i = 0; i < output3.size(); i++) {
            tempWord = output3.at(i);
            tempChar = tempWord.at(0);

            if (tempChar == 't' || tempChar == 'u' || tempChar == 'v') {
                output31.push_back(tempWord);
            }
        }
    }


    // if first char of phone1 == 9
    if (phone1.at(0) == '9') {

        for (int i = 0; i < output3.size(); i++) {
            tempWord = output3.at(i);
            tempChar = tempWord.at(0);

            if (tempChar == 'w' || tempChar == 'x' || tempChar == 'y' || tempChar == 'z') {
                output31.push_back(tempWord);
            }
        }
    }

// PHONE 1 SECOND CHAR  - - - - - - - - - - - - - -

    // if second char of phone1 == 2
    if (phone1.at(1) == '2') {

        for (int i = 0; i < output31.size(); i++) {
            tempWord = output31.at(i);
            tempChar = tempWord.at(1);

            if (tempChar == 'a' || tempChar == 'b' || tempChar == 'c') {
                output32.push_back(tempWord);
            }
        }
    }


    // if second char of phone1 == 3
    if (phone1.at(1) == '3') {

        for (int i = 0; i < output31.size(); i++) {
            tempWord = output31.at(i);
            tempChar = tempWord.at(1);

            if (tempChar == 'd' || tempChar == 'e' || tempChar == 'f') {
                output32.push_back(tempWord);
            }
        }
    }


    // if second char of phone1 == 4
    if (phone1.at(1) == '4') {

        for (int i = 0; i < output31.size(); i++) {
            tempWord = output31.at(i);
            tempChar = tempWord.at(1);

            if (tempChar == 'g' || tempChar == 'h' || tempChar == 'i') {
                output32.push_back(tempWord);
            }
        }
    }


    // if second char of phone1 == 5
    if (phone1.at(1) == '5') {

        for (int i = 0; i < output31.size(); i++) {
            tempWord = output31.at(i);
            tempChar = tempWord.at(1);

            if (tempChar == 'j' || tempChar == 'k' || tempChar == 'l') {
                output32.push_back(tempWord);
            }
        }
    }


    // if second char of phone1 == 6
    if (phone1.at(1) == '6') {

        for (int i = 0; i < output31.size(); i++) {
            tempWord = output31.at(i);
            tempChar = tempWord.at(1);

            if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                output32.push_back(tempWord);
            }
        }
    }


    // if second char of phone1 == 7
    if (phone1.at(1) == '7') {

        for (int i = 0; i < output31.size(); i++) {
            tempWord = output31.at(i);
            tempChar = tempWord.at(1);

            if (tempChar == 'p' || tempChar == 'q' || tempChar == 'r' || tempChar == 's') {
                output32.push_back(tempWord);
            }
        }
    }


    // if second char of phone1 == 8
    if (phone1.at(1) == '8') {

        for (int i = 0; i < output31.size(); i++) {
            tempWord = output31.at(i);
            tempChar = tempWord.at(1);

            if (tempChar == 't' || tempChar == 'u' || tempChar == 'v') {
                output32.push_back(tempWord);
            }
        }
    }


    // if second char of phone1 == 9
    if (phone1.at(1) == '9') {

        for (int i = 0; i < output31.size(); i++) {
            tempWord = output31.at(i);
            tempChar = tempWord.at(1);

            if (tempChar == 'w' || tempChar == 'x' || tempChar == 'y' || tempChar == 'z') {
                output32.push_back(tempWord);
            }
        }
    }

// PHONE 1 THIRD CHAR  - - - - - - - - - - - - - -

    // if third char of phone1 == 2
    if (phone1.at(2) == '2') {

        for (int i = 0; i < output32.size(); i++) {
            tempWord = output32.at(i);
            tempChar = tempWord.at(2);

            if (tempChar == 'a' || tempChar == 'b' || tempChar == 'c') {
                output33.push_back(tempWord);
            }
        }
    }


    // if third char of phone1 == 3
    if (phone1.at(2) == '3') {

        for (int i = 0; i < output32.size(); i++) {
            tempWord = output32.at(i);
            tempChar = tempWord.at(2);

            if (tempChar == 'd' || tempChar == 'e' || tempChar == 'f') {
                output33.push_back(tempWord);
            }
        }
    }


    // if third char of phone1 == 4
    if (phone1.at(2) == '4') {

        for (int i = 0; i < output32.size(); i++) {
            tempWord = output32.at(i);
            tempChar = tempWord.at(2);

            if (tempChar == 'g' || tempChar == 'h' || tempChar == 'i') {
                output33.push_back(tempWord);
            }
        }
    }


    // if third char of phone1 == 5
    if (phone1.at(2) == '5') {

        for (int i = 0; i < output32.size(); i++) {
            tempWord = output32.at(i);
            tempChar = tempWord.at(2);

            if (tempChar == 'j' || tempChar == 'k' || tempChar == 'l') {
                output33.push_back(tempWord);
            }
        }
    }


    // if third char of phone1 == 6
    if (phone1.at(2) == '6') {

        for (int i = 0; i < output32.size(); i++) {
            tempWord = output32.at(i);
            tempChar = tempWord.at(2);

            if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                output33.push_back(tempWord);
            }
        }
    }


    // if third char of phone1 == 7
    if (phone1.at(2) == '7') {

        for (int i = 0; i < output32.size(); i++) {
            tempWord = output32.at(i);
            tempChar = tempWord.at(2);

            if (tempChar == 'p' || tempChar == 'q' || tempChar == 'r' || tempChar == 's') {
                output33.push_back(tempWord);
            }
        }
    }


    // if third char of phone1 == 8
    if (phone1.at(2) == '8') {

        for (int i = 0; i < output32.size(); i++) {
            tempWord = output32.at(i);
            tempChar = tempWord.at(2);

            if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                output33.push_back(tempWord);
            }
        }
    }


    // if third char of phone1 == 9
    if (phone1.at(2) == '9') {

        for (int i = 0; i < output32.size(); i++) {
            tempWord = output32.at(i);
            tempChar = tempWord.at(2);

            if (tempChar == 'w' || tempChar == 'x' || tempChar == 'y' || tempChar == 'z') {
                output33.push_back(tempWord);
            }
        }
    }



// PHONE 2 FIRST CHAR  - - - - - - - - - - - - - -

    // if first char of phone2 == 2
    if (phone2.at(0) == '2') {

        // iterate through output3
        for (int i = 0; i < output4.size(); i++) {
            tempWord = output4.at(i);
            tempChar = tempWord.at(0);  // first char

            // if first char == 'a' or 'b' or 'c'
            if (tempChar == 'a' || tempChar == 'b' || tempChar == 'c') {

                // add that word to a new array
                output41.push_back(tempWord);
            }
        }
    }

    // if first char of phone2 == 3
    if (phone2.at(0) == '3') {

        // iterate through output3
        for (int i = 0; i < output4.size(); i++) {
            tempWord = output4.at(i);
            tempChar = tempWord.at(0);  // first char

            // if first char == 'd' or 'e' or 'f'
            if (tempChar == 'd' || tempChar == 'e' || tempChar == 'f') {

                // add that word to a new array
                output41.push_back(tempWord);
            }
        }
    }

    // if first char of phone2 == 4
    if (phone2.at(0) == '4') {

        for (int i = 0; i < output4.size(); i++) {
            tempWord = output4.at(i);
            tempChar = tempWord.at(0);

            if (tempChar == 'g' || tempChar == 'h' || tempChar == 'i') {
                output41.push_back(tempWord);
            }
        }
    }


    // if first char of phone2 == 5
    if (phone2.at(0) == '5') {

        for (int i = 0; i < output4.size(); i++) {
            tempWord = output4.at(i);
            tempChar = tempWord.at(0);

            if (tempChar == 'j' || tempChar == 'k' || tempChar == 'l') {
                output41.push_back(tempWord);
            }
        }
    }


    // if first char of phone2 == 6
    if (phone2.at(0) == '6') {

        for (int i = 0; i < output4.size(); i++) {
            tempWord = output4.at(i);
            tempChar = tempWord.at(0);

            if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                output41.push_back(tempWord);
            }
        }
    }


    // if first char of phone2 == 7
    if (phone2.at(0) == '7') {

        for (int i = 0; i < output4.size(); i++) {
            tempWord = output4.at(i);
            tempChar = tempWord.at(0);

            if (tempChar == 'p' || tempChar == 'q' || tempChar == 'r' || tempChar == 's') {
                output41.push_back(tempWord);
            }
        }
    }


    // if first char of phone2 == 8
    if (phone2.at(0) == '8') {

        for (int i = 0; i < output4.size(); i++) {
            tempWord = output4.at(i);
            tempChar = tempWord.at(0);

            if (tempChar == 't' || tempChar == 'u' || tempChar == 'v') {
                output41.push_back(tempWord);
            }
        }
    }


    // if first char of phone2 == 9
    if (phone2.at(0) == '9') {

        for (int i = 0; i < output4.size(); i++) {
            tempWord = output4.at(i);
            tempChar = tempWord.at(0);

            if (tempChar == 'w' || tempChar == 'x' || tempChar == 'y' || tempChar == 'z') {
                output41.push_back(tempWord);
            }
        }
    }

// PHONE 2 SECOND CHAR  - - - - - - - - - - - - - -

    // if second char of phone2 == 2
    if (phone2.at(1) == '2') {

        for (int i = 0; i < output41.size(); i++) {
            tempWord = output41.at(i);
            tempChar = tempWord.at(1);

            if (tempChar == 'a' || tempChar == 'b' || tempChar == 'c') {
                output42.push_back(tempWord);
            }
        }
    }


    // if second char of phone2 == 3
    if (phone2.at(1) == '3') {

        for (int i = 0; i < output41.size(); i++) {
            tempWord = output41.at(i);
            tempChar = tempWord.at(1);

            if (tempChar == 'd' || tempChar == 'e' || tempChar == 'f') {
                output42.push_back(tempWord);
            }
        }
    }


    // if second char of phone2 == 4
    if (phone2.at(1) == '4') {

        for (int i = 0; i < output41.size(); i++) {
            tempWord = output41.at(i);
            tempChar = tempWord.at(1);

            if (tempChar == 'g' || tempChar == 'h' || tempChar == 'i') {
                output42.push_back(tempWord);
            }
        }
    }


    // if second char of phone2 == 5
    if (phone2.at(1) == '5') {

        for (int i = 0; i < output41.size(); i++) {
            tempWord = output41.at(i);
            tempChar = tempWord.at(1);

            if (tempChar == 'j' || tempChar == 'k' || tempChar == 'l') {
                output42.push_back(tempWord);
            }
        }
    }


    // if second char of phone2 == 6
    if (phone2.at(1) == '6') {

        for (int i = 0; i < output41.size(); i++) {
            tempWord = output41.at(i);
            tempChar = tempWord.at(1);

            if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                output42.push_back(tempWord);
            }
        }
    }


    // if second char of phone2 == 7
    if (phone2.at(1) == '7') {

        for (int i = 0; i < output41.size(); i++) {
            tempWord = output41.at(i);
            tempChar = tempWord.at(1);

            if (tempChar == 'p' || tempChar == 'q' || tempChar == 'r' || tempChar == 's') {
                output42.push_back(tempWord);
            }
        }
    }


    // if second char of phone2 == 8
    if (phone2.at(1) == '8') {

        for (int i = 0; i < output41.size(); i++) {
            tempWord = output41.at(i);
            tempChar = tempWord.at(1);

            if (tempChar == 't' || tempChar == 'u' || tempChar == 'v') {
                output42.push_back(tempWord);
            }
        }
    }


    // if second char of phone2 == 9
    if (phone2.at(1) == '9') {

        for (int i = 0; i < output41.size(); i++) {
            tempWord = output41.at(i);
            tempChar = tempWord.at(1);

            if (tempChar == 'w' || tempChar == 'x' || tempChar == 'y' || tempChar == 'z') {
                output42.push_back(tempWord);
            }
        }
    }

// PHONE 2 THIRD CHAR  - - - - - - - - - - - - - -

    // if third char of phone2 == 2
    if (phone2.at(2) == '2') {

        for (int i = 0; i < output42.size(); i++) {
            tempWord = output42.at(i);
            tempChar = tempWord.at(2);

            if (tempChar == 'a' || tempChar == 'b' || tempChar == 'c') {
                output43.push_back(tempWord);
            }
        }
    }


    // if third char of phone2 == 3
    if (phone2.at(2) == '3') {

        for (int i = 0; i < output42.size(); i++) {
            tempWord = output42.at(i);
            tempChar = tempWord.at(2);

            if (tempChar == 'd' || tempChar == 'e' || tempChar == 'f') {
                output43.push_back(tempWord);
            }
        }
    }


    // if third char of phone2 == 4
    if (phone2.at(2) == '4') {

        for (int i = 0; i < output42.size(); i++) {
            tempWord = output42.at(i);
            tempChar = tempWord.at(2);

            if (tempChar == 'g' || tempChar == 'h' || tempChar == 'i') {
                output43.push_back(tempWord);
            }
        }
    }


    // if third char of phone2 == 5
    if (phone2.at(2) == '5') {

        for (int i = 0; i < output42.size(); i++) {
            tempWord = output42.at(i);
            tempChar = tempWord.at(2);

            if (tempChar == 'j' || tempChar == 'k' || tempChar == 'l') {
                output43.push_back(tempWord);
            }
        }
    }


    // if third char of phone2 == 6
    if (phone2.at(2) == '6') {

        for (int i = 0; i < output42.size(); i++) {
            tempWord = output42.at(i);
            tempChar = tempWord.at(2);

            if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                output43.push_back(tempWord);
            }
        }
    }


    // if third char of phone2 == 7
    if (phone2.at(2) == '7') {

        for (int i = 0; i < output42.size(); i++) {
            tempWord = output42.at(i);
            tempChar = tempWord.at(2);

            if (tempChar == 'p' || tempChar == 'q' || tempChar == 'r' || tempChar == 's') {
                output43.push_back(tempWord);
            }
        }
    }


    // if third char of phone2 == 8
    if (phone2.at(2) == '8') {

        for (int i = 0; i < output42.size(); i++) {
            tempWord = output42.at(i);
            tempChar = tempWord.at(2);

            if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                output43.push_back(tempWord);
            }
        }
    }


    // if third char of phone2 == 9
    if (phone2.at(2) == '9') {

        for (int i = 0; i < output42.size(); i++) {
            tempWord = output42.at(i);
            tempChar = tempWord.at(2);

            if (tempChar == 'w' || tempChar == 'x' || tempChar == 'y' || tempChar == 'z') {
                output43.push_back(tempWord);
            }
        }
    }

// PHONE 2 FOURTH CHAR  - - - - - - - - - - - - - -

    // if fourth char of phone2 == 2
    if (phone2.at(3) == '2') {

        for (int i = 0; i < output43.size(); i++) {
            tempWord = output43.at(i);
            tempChar = tempWord.at(3);

            if (tempChar == 'a' || tempChar == 'b' || tempChar == 'c') {
                output44.push_back(tempWord);
            }
        }
    }


    // if fourth char of phone2 == 3
    if (phone2.at(3) == '3') {

        for (int i = 0; i < output43.size(); i++) {
            tempWord = output43.at(i);
            tempChar = tempWord.at(3);

            if (tempChar == 'd' || tempChar == 'e' || tempChar == 'f') {
                output44.push_back(tempWord);
            }
        }
    }

    // if fourth char of phone2 == 4
    if (phone2.at(3) == '4') {

        for (int i = 0; i < output43.size(); i++) {
            tempWord = output43.at(i);
            tempChar = tempWord.at(3);

            if (tempChar == 'g' || tempChar == 'h' || tempChar == 'i') {
                output44.push_back(tempWord);
            }
        }
    }

    // if fourth char of phone2 == 5
    if (phone2.at(3) == '5') {

        for (int i = 0; i < output43.size(); i++) {
            tempWord = output43.at(i);
            tempChar = tempWord.at(3);

            if (tempChar == 'j' || tempChar == 'k' || tempChar == 'l') {
                output44.push_back(tempWord);
            }
        }
    }

    // if fourth char of phone2 == 6
    if (phone2.at(3) == '6') {

        for (int i = 0; i < output43.size(); i++) {
            tempWord = output43.at(i);
            tempChar = tempWord.at(3);

            if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                output44.push_back(tempWord);
            }
        }
    }

    // if fourth char of phone2 == 7
    if (phone2.at(3) == '7') {

        for (int i = 0; i < output43.size(); i++) {
            tempWord = output43.at(i);
            tempChar = tempWord.at(3);

            if (tempChar == 'p' || tempChar == 'q' || tempChar == 'r' || tempChar == 's') {
                output44.push_back(tempWord);
            }
        }
    }

    // if fourth char of phone2 == 8
    if (phone2.at(3) == '8') {

        for (int i = 0; i < output43.size(); i++) {
            tempWord = output43.at(i);
            tempChar = tempWord.at(3);

            if (tempChar == 't' || tempChar == 'u' || tempChar == 'v') {
                output44.push_back(tempWord);
            }
        }
    }

    // if fourth char of phone2 == 9
    if (phone2.at(3) == '9') {

        for (int i = 0; i < output43.size(); i++) {
            tempWord = output43.at(i);
            tempChar = tempWord.at(3);

            if (tempChar == 'w' || tempChar == 'x' || tempChar == 'y' || tempChar == 'z') {
                output44.push_back(tempWord);
            }
        }
    }

                                        // TODO: phonetot five letter words

    // - - - - - - - - - - - - - - - - - - - - - -

    // outputs all possible combos of three and four letter words
    for (int i = 0; i < output33.size(); i++) {
        for (int b = 0; b < output44.size(); b++) {
            cout << output33.at(i) << " " << output44.at(b) << endl;
        }
    }

                                        // TODO: output all five letter words

    // - - - - - - - - - - - - - - - - - - - - - -

    // closes "ShortList.txt"
    fin.close();
    // closes "output.txt"
    fout.close();
    
    return 0;
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

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