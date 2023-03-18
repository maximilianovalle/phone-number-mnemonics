#include <iostream>
#include <string>
#include <vector>
#include <cctype>   // allows access to functions for chars
#include <fstream>  // allows i/o stream
using namespace std;


// functions --
bool IsPhoneValid(string phoneNum);


int main() {
    string phoneNum;
    cin >> phoneNum;                        // collect input phone number (###-####)

    ifstream fin("ShortList.txt");          // reads from text file "ShortList.txt"
    ofstream fout("output.txt");            // outputs to text file "Mnemonics.txt"

    bool validity;
    validity = IsPhoneValid(phoneNum);

    // checks if phoneNum is valid
    if (validity == false) {
        cout << "Invalid phone number" << endl;
    }

    else {
        cout << "Valid!" << endl;
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

    string tempWord;
    char tempChar;

// PHONE 1 FIRST CHAR  - - - - - - - - - - - - - -

    if (validity != false) {

        // if first char of phone1 == 2
        if (phone1.at(0) == '2') {

            // iterate through output3
            int output3size = output3.size();

            for (int i = 0; i < output3size; i++) {
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

            int output3size = output3.size();

            for (int i = 0; i < output3size; i++) {
                tempWord = output3.at(i);
                tempChar = tempWord.at(0);

                if (tempChar == 'd' || tempChar == 'e' || tempChar == 'f') {
                    output31.push_back(tempWord);
                }
            }
        }

        // if first char of phone1 == 4
        if (phone1.at(0) == '4') {

            int output3size = output3.size();

            for (int i = 0; i < output3size; i++) {
                tempWord = output3.at(i);
                tempChar = tempWord.at(0);

                if (tempChar == 'g' || tempChar == 'h' || tempChar == 'i') {
                    output31.push_back(tempWord);
                }
            }
        }

        // if first char of phone1 == 5
        if (phone1.at(0) == '5') {

            int output3size = output3.size();

            for (int i = 0; i < output3size; i++) {
                tempWord = output3.at(i);
                tempChar = tempWord.at(0);

                if (tempChar == 'j' || tempChar == 'k' || tempChar == 'l') {
                    output31.push_back(tempWord);
                }
            }
        }

        // if first char of phone1 == 6
        if (phone1.at(0) == '6') {

            int output3size = output3.size();

            for (int i = 0; i < output3size; i++) {
                tempWord = output3.at(i);
                tempChar = tempWord.at(0);

                if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                    output31.push_back(tempWord);
                }
            }
        }

        // if first char of phone1 == 7
        if (phone1.at(0) == '7') {

            int output3size = output3.size();

            for (int i = 0; i < output3size; i++) {
                tempWord = output3.at(i);
                tempChar = tempWord.at(0);

                if (tempChar == 'p' || tempChar == 'q' || tempChar == 'r' || tempChar == 's') {
                    output31.push_back(tempWord);
                }
            }
        }

        // if first char of phone1 == 8
        if (phone1.at(0) == '8') {

            int output3size = output3.size();

            for (int i = 0; i < output3size; i++) {
                tempWord = output3.at(i);
                tempChar = tempWord.at(0);

                if (tempChar == 't' || tempChar == 'u' || tempChar == 'v') {
                    output31.push_back(tempWord);
                }
            }
        }

        // if first char of phone1 == 9
        if (phone1.at(0) == '9') {

            int output3size = output3.size();

            for (int i = 0; i < output3size; i++) {
                tempWord = output3.at(i);
                tempChar = tempWord.at(0);

                if (tempChar == 'w' || tempChar == 'x' || tempChar == 'y' || tempChar == 'z') {
                    output31.push_back(tempWord);
                }
            }
        }

    // PHONE 1 SECOND CHAR  - - - - - - - - - - - - - -

        if (phone1.at(1) == '2') {

            int output31size = output31.size();

            for (int i = 0; i < output31size; i++) {
                tempWord = output31.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 'a' || tempChar == 'b' || tempChar == 'c') {
                    output32.push_back(tempWord);
                }
            }
        }

        if (phone1.at(1) == '3') {

            int output31size = output31.size();

            for (int i = 0; i < output31size; i++) {
                tempWord = output31.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 'd' || tempChar == 'e' || tempChar == 'f') {
                    output32.push_back(tempWord);
                }
            }
        }

        if (phone1.at(1) == '4') {

            int output31size = output31.size();

            for (int i = 0; i < output31size; i++) {
                tempWord = output31.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 'g' || tempChar == 'h' || tempChar == 'i') {
                    output32.push_back(tempWord);
                }
            }
        }

        if (phone1.at(1) == '5') {

            int output31size = output31.size();

            for (int i = 0; i < output31size; i++) {
                tempWord = output31.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 'j' || tempChar == 'k' || tempChar == 'l') {
                    output32.push_back(tempWord);
                }
            }
        }

        if (phone1.at(1) == '6') {

            int output31size = output31.size();

            for (int i = 0; i < output31size; i++) {
                tempWord = output31.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                    output32.push_back(tempWord);
                }
            }
        }

        if (phone1.at(1) == '7') {

            int output31size = output31.size();

            for (int i = 0; i < output31size; i++) {
                tempWord = output31.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 'p' || tempChar == 'q' || tempChar == 'r' || tempChar == 's') {
                    output32.push_back(tempWord);
                }
            }
        }

        if (phone1.at(1) == '8') {

            int output31size = output31.size();

            for (int i = 0; i < output31size; i++) {
                tempWord = output31.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 't' || tempChar == 'u' || tempChar == 'v') {
                    output32.push_back(tempWord);
                }
            }
        }

        if (phone1.at(1) == '9') {

            int output31size = output31.size();

            for (int i = 0; i < output31size; i++) {
                tempWord = output31.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 'w' || tempChar == 'x' || tempChar == 'y' || tempChar == 'z') {
                    output32.push_back(tempWord);
                }
            }
        }

    // PHONE 1 THIRD CHAR  - - - - - - - - - - - - - -

        if (phone1.at(2) == '2') {

            int output32size = output32.size();

            for (int i = 0; i < output32size; i++) {
                tempWord = output32.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'a' || tempChar == 'b' || tempChar == 'c') {
                    output33.push_back(tempWord);
                }
            }
        }

        if (phone1.at(2) == '3') {

            int output32size = output32.size();

            for (int i = 0; i < output32size; i++) {
                tempWord = output32.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'd' || tempChar == 'e' || tempChar == 'f') {
                    output33.push_back(tempWord);
                }
            }
        }

        if (phone1.at(2) == '4') {

            int output32size = output32.size();

            for (int i = 0; i < output32size; i++) {
                tempWord = output32.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'g' || tempChar == 'h' || tempChar == 'i') {
                    output33.push_back(tempWord);
                }
            }
        }

        if (phone1.at(2) == '5') {

            int output32size = output32.size();

            for (int i = 0; i < output32size; i++) {
                tempWord = output32.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'j' || tempChar == 'k' || tempChar == 'l') {
                    output33.push_back(tempWord);
                }
            }
        }

        if (phone1.at(2) == '6') {

            int output32size = output32.size();

            for (int i = 0; i < output32size; i++) {
                tempWord = output32.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                    output33.push_back(tempWord);
                }
            }
        }

        if (phone1.at(2) == '7') {

            int output32size = output32.size();

            for (int i = 0; i < output32size; i++) {
                tempWord = output32.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'p' || tempChar == 'q' || tempChar == 'r' || tempChar == 's') {
                    output33.push_back(tempWord);
                }
            }
        }

        if (phone1.at(2) == '8') {

            int output32size = output32.size();

            for (int i = 0; i < output32size; i++) {
                tempWord = output32.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                    output33.push_back(tempWord);
                }
            }
        }

        if (phone1.at(2) == '9') {

            int output32size = output32.size();

            for (int i = 0; i < output32size; i++) {
                tempWord = output32.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'w' || tempChar == 'x' || tempChar == 'y' || tempChar == 'z') {
                    output33.push_back(tempWord);
                }
            }
        }

    // PHONE 2 FIRST CHAR  - - - - - - - - - - - - - -

        if (phone2.at(0) == '2') {

            int output4size = output4.size();

            for (int i = 0; i < output4size; i++) {
                tempWord = output4.at(i);
                tempChar = tempWord.at(0);

                if (tempChar == 'a' || tempChar == 'b' || tempChar == 'c') {
                    output41.push_back(tempWord);
                }
            }
        }

        if (phone2.at(0) == '3') {

            int output4size = output4.size();

            for (int i = 0; i < output4size; i++) {
                tempWord = output4.at(i);
                tempChar = tempWord.at(0);

                if (tempChar == 'd' || tempChar == 'e' || tempChar == 'f') {
                    output41.push_back(tempWord);
                }
            }
        }

        if (phone2.at(0) == '4') {

            int output4size = output4.size();

            for (int i = 0; i < output4size; i++) {
                tempWord = output4.at(i);
                tempChar = tempWord.at(0);

                if (tempChar == 'g' || tempChar == 'h' || tempChar == 'i') {
                    output41.push_back(tempWord);
                }
            }
        }

        if (phone2.at(0) == '5') {

            int output4size = output4.size();

            for (int i = 0; i < output4size; i++) {
                tempWord = output4.at(i);
                tempChar = tempWord.at(0);

                if (tempChar == 'j' || tempChar == 'k' || tempChar == 'l') {
                    output41.push_back(tempWord);
                }
            }
        }

        if (phone2.at(0) == '6') {

            int output4size = output4.size();

            for (int i = 0; i < output4size; i++) {
                tempWord = output4.at(i);
                tempChar = tempWord.at(0);

                if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                    output41.push_back(tempWord);
                }
            }
        }

        if (phone2.at(0) == '7') {

            int output4size = output4.size();

            for (int i = 0; i < output4size; i++) {
                tempWord = output4.at(i);
                tempChar = tempWord.at(0);

                if (tempChar == 'p' || tempChar == 'q' || tempChar == 'r' || tempChar == 's') {
                    output41.push_back(tempWord);
                }
            }
        }

        if (phone2.at(0) == '8') {

            int output4size = output4.size();

            for (int i = 0; i < output4size; i++) {
                tempWord = output4.at(i);
                tempChar = tempWord.at(0);

                if (tempChar == 't' || tempChar == 'u' || tempChar == 'v') {
                    output41.push_back(tempWord);
                }
            }
        }

        if (phone2.at(0) == '9') {

            int output4size = output4.size();

            for (int i = 0; i < output4size; i++) {
                tempWord = output4.at(i);
                tempChar = tempWord.at(0);

                if (tempChar == 'w' || tempChar == 'x' || tempChar == 'y' || tempChar == 'z') {
                    output41.push_back(tempWord);
                }
            }
        }

    // PHONE 2 SECOND CHAR  - - - - - - - - - - - - - -

        if (phone2.at(1) == '2') {

            int output41size = output41.size();

            for (int i = 0; i < output41size; i++) {
                tempWord = output41.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 'a' || tempChar == 'b' || tempChar == 'c') {
                    output42.push_back(tempWord);
                }
            }
        }

        if (phone2.at(1) == '3') {

            int output41size = output41.size();

            for (int i = 0; i < output41size; i++) {
                tempWord = output41.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 'd' || tempChar == 'e' || tempChar == 'f') {
                    output42.push_back(tempWord);
                }
            }
        }

        if (phone2.at(1) == '4') {

            int output41size = output41.size();

            for (int i = 0; i < output41size; i++) {
                tempWord = output41.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 'g' || tempChar == 'h' || tempChar == 'i') {
                    output42.push_back(tempWord);
                }
            }
        }

        if (phone2.at(1) == '5') {

            int output41size = output41.size();

            for (int i = 0; i < output41size; i++) {
                tempWord = output41.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 'j' || tempChar == 'k' || tempChar == 'l') {
                    output42.push_back(tempWord);
                }
            }
        }

        if (phone2.at(1) == '6') {

            int output41size = output41.size();

            for (int i = 0; i < output41size; i++) {
                tempWord = output41.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                    output42.push_back(tempWord);
                }
            }
        }

        if (phone2.at(1) == '7') {

            int output41size = output41.size();

            for (int i = 0; i < output41size; i++) {
                tempWord = output41.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 'p' || tempChar == 'q' || tempChar == 'r' || tempChar == 's') {
                    output42.push_back(tempWord);
                }
            }
        }

        if (phone2.at(1) == '8') {

            int output41size = output41.size();

            for (int i = 0; i < output41size; i++) {
                tempWord = output41.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 't' || tempChar == 'u' || tempChar == 'v') {
                    output42.push_back(tempWord);
                }
            }
        }

        if (phone2.at(1) == '9') {

            int output41size = output41.size();

            for (int i = 0; i < output41size; i++) {
                tempWord = output41.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 'w' || tempChar == 'x' || tempChar == 'y' || tempChar == 'z') {
                    output42.push_back(tempWord);
                }
            }
        }

    // PHONE 2 THIRD CHAR  - - - - - - - - - - - - - -

        if (phone2.at(2) == '2') {

            int output42size = output42.size();

            for (int i = 0; i < output42size; i++) {
                tempWord = output42.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'a' || tempChar == 'b' || tempChar == 'c') {
                    output43.push_back(tempWord);
                }
            }
        }

        if (phone2.at(2) == '3') {

            int output42size = output42.size();

            for (int i = 0; i < output42size; i++) {
                tempWord = output42.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'd' || tempChar == 'e' || tempChar == 'f') {
                    output43.push_back(tempWord);
                }
            }
        }

        if (phone2.at(2) == '4') {

            int output42size = output42.size();

            for (int i = 0; i < output42size; i++) {
                tempWord = output42.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'g' || tempChar == 'h' || tempChar == 'i') {
                    output43.push_back(tempWord);
                }
            }
        }

        if (phone2.at(2) == '5') {

            int output42size = output42.size();

            for (int i = 0; i < output42size; i++) {
                tempWord = output42.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'j' || tempChar == 'k' || tempChar == 'l') {
                    output43.push_back(tempWord);
                }
            }
        }

        if (phone2.at(2) == '6') {

            int output42size = output42.size();

            for (int i = 0; i < output42size; i++) {
                tempWord = output42.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                    output43.push_back(tempWord);
                }
            }
        }

        if (phone2.at(2) == '7') {

            int output42size = output42.size();

            for (int i = 0; i < output42size; i++) {
                tempWord = output42.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'p' || tempChar == 'q' || tempChar == 'r' || tempChar == 's') {
                    output43.push_back(tempWord);
                }
            }
        }

        if (phone2.at(2) == '8') {

            int output42size = output42.size();

            for (int i = 0; i < output42size; i++) {
                tempWord = output42.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                    output43.push_back(tempWord);
                }
            }
        }

        if (phone2.at(2) == '9') {

            int output42size = output42.size();

            for (int i = 0; i < output42size; i++) {
                tempWord = output42.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'w' || tempChar == 'x' || tempChar == 'y' || tempChar == 'z') {
                    output43.push_back(tempWord);
                }
            }
        }

    // PHONE 2 FOURTH CHAR  - - - - - - - - - - - - - -

        if (phone2.at(3) == '2') {

            int output43size = output43.size();

            for (int i = 0; i < output43size; i++) {
                tempWord = output43.at(i);
                tempChar = tempWord.at(3);

                if (tempChar == 'a' || tempChar == 'b' || tempChar == 'c') {
                    output44.push_back(tempWord);
                }
            }
        }

        if (phone2.at(3) == '3') {

            int output43size = output43.size();

            for (int i = 0; i < output43size; i++) {
                tempWord = output43.at(i);
                tempChar = tempWord.at(3);

                if (tempChar == 'd' || tempChar == 'e' || tempChar == 'f') {
                    output44.push_back(tempWord);
                }
            }
        }

        if (phone2.at(3) == '4') {

            int output43size = output43.size();

            for (int i = 0; i < output43size; i++) {
                tempWord = output43.at(i);
                tempChar = tempWord.at(3);

                if (tempChar == 'g' || tempChar == 'h' || tempChar == 'i') {
                    output44.push_back(tempWord);
                }
            }
        }

        if (phone2.at(3) == '5') {

            int output43size = output43.size();

            for (int i = 0; i < output43size; i++) {
                tempWord = output43.at(i);
                tempChar = tempWord.at(3);

                if (tempChar == 'j' || tempChar == 'k' || tempChar == 'l') {
                    output44.push_back(tempWord);
                }
            }
        }

        if (phone2.at(3) == '6') {

            int output43size = output43.size();

            for (int i = 0; i < output43size; i++) {
                tempWord = output43.at(i);
                tempChar = tempWord.at(3);

                if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                    output44.push_back(tempWord);
                }
            }
        }

        if (phone2.at(3) == '7') {

            int output43size = output43.size();

            for (int i = 0; i < output43size; i++) {
                tempWord = output43.at(i);
                tempChar = tempWord.at(3);

                if (tempChar == 'p' || tempChar == 'q' || tempChar == 'r' || tempChar == 's') {
                    output44.push_back(tempWord);
                }
            }
        }

        if (phone2.at(3) == '8') {

            int output43size = output43.size();

            for (int i = 0; i < output43size; i++) {
                tempWord = output43.at(i);
                tempChar = tempWord.at(3);

                if (tempChar == 't' || tempChar == 'u' || tempChar == 'v') {
                    output44.push_back(tempWord);
                }
            }
        }

        if (phone2.at(3) == '9') {

            int output43size = output43.size();

            for (int i = 0; i < output43size; i++) {
                tempWord = output43.at(i);
                tempChar = tempWord.at(3);

                if (tempChar == 'w' || tempChar == 'x' || tempChar == 'y' || tempChar == 'z') {
                    output44.push_back(tempWord);
                }
            }
        }

    // PHONE TOTAL FIRST CHAR  - - - - - - - - - - - - - -

        if (phoneTot.at(0) == '2') {

            int output7size = output7.size();

            for (int i = 0; i < output7size; i++) {
                tempWord = output7.at(i);
                tempChar = tempWord.at(0);

                if (tempChar == 'a' || tempChar == 'b' || tempChar == 'c') {
                    output71.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(0) == '3') {

            int output7size = output7.size();

            for (int i = 0; i < output7size; i++) {
                tempWord = output7.at(i);
                tempChar = tempWord.at(0);

                if (tempChar == 'd' || tempChar == 'e' || tempChar == 'f') {
                    output71.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(0) == '4') {

            int output7size = output7.size();

            for (int i = 0; i < output7size; i++) {
                tempWord = output7.at(i);
                tempChar = tempWord.at(0);

                if (tempChar == 'g' || tempChar == 'h' || tempChar == 'i') {
                    output71.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(0) == '5') {

            int output7size = output7.size();

            for (int i = 0; i < output7size; i++) {
                tempWord = output7.at(i);
                tempChar = tempWord.at(0);

                if (tempChar == 'j' || tempChar == 'k' || tempChar == 'l') {
                    output71.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(0) == '6') {

            int output7size = output7.size();

            for (int i = 0; i < output7size; i++) {
                tempWord = output7.at(i);
                tempChar = tempWord.at(0);

                if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                    output71.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(0) == '7') {

            int output7size = output7.size();

            for (int i = 0; i < output7size; i++) {
                tempWord = output7.at(i);
                tempChar = tempWord.at(0);

                if (tempChar == 'p' || tempChar == 'q' || tempChar == 'r' || tempChar == 's') {
                    output71.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(0) == '8') {

            int output7size = output7.size();

            for (int i = 0; i < output7size; i++) {
                tempWord = output7.at(i);
                tempChar = tempWord.at(0);

                if (tempChar == 't' || tempChar == 'u' || tempChar == 'v') {
                    output71.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(0) == '9') {

            int output7size = output7.size();

            for (int i = 0; i < output7size; i++) {
                tempWord = output7.at(i);
                tempChar = tempWord.at(0);

                if (tempChar == 'w' || tempChar == 'x' || tempChar == 'y' || tempChar == 'z') {
                    output71.push_back(tempWord);
                }
            }
        }

    // PHONE TOTAL SECOND CHAR  - - - - - - - - - - - - - -

        if (phoneTot.at(1) == '2') {

            int output71size = output71.size();

            for (int i = 0; i < output71size; i++) {
                tempWord = output71.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 'a' || tempChar == 'b' || tempChar == 'c') {
                    output72.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(1) == '3') {

            int output71size = output71.size();

            for (int i = 0; i < output71size; i++) {
                tempWord = output71.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 'd' || tempChar == 'e' || tempChar == 'f') {
                    output72.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(1) == '4') {

            int output71size = output71.size();

            for (int i = 0; i < output71size; i++) {
                tempWord = output71.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 'g' || tempChar == 'h' || tempChar == 'i') {
                    output72.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(1) == '5') {

            int output71size = output71.size();

            for (int i = 0; i < output71size; i++) {
                tempWord = output71.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 'j' || tempChar == 'k' || tempChar == 'l') {
                    output72.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(1) == '6') {

            int output71size = output71.size();

            for (int i = 0; i < output71size; i++) {
                tempWord = output71.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                    output72.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(1) == '7') {

            int output71size = output71.size();

            for (int i = 0; i < output71size; i++) {
                tempWord = output71.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 'p' || tempChar == 'q' || tempChar == 'r' || tempChar == 's') {
                    output72.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(1) == '8') {

            int output71size = output71.size();

            for (int i = 0; i < output71size; i++) {
                tempWord = output71.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 't' || tempChar == 'u' || tempChar == 'v') {
                    output72.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(1) == '9') {

            int output71size = output71.size();

            for (int i = 0; i < output71size; i++) {
                tempWord = output71.at(i);
                tempChar = tempWord.at(1);

                if (tempChar == 'w' || tempChar == 'x' || tempChar == 'y' || tempChar == 'z') {
                    output72.push_back(tempWord);
                }
            }
        }

    // PHONE TOTAL THIRD CHAR  - - - - - - - - - - - - - -

        if (phoneTot.at(2) == '2') {

            int output72size = output72.size();

            for (int i = 0; i < output72size; i++) {
                tempWord = output72.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'a' || tempChar == 'b' || tempChar == 'c') {
                    output73.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(2) == '3') {

            int output72size = output72.size();

            for (int i = 0; i < output72size; i++) {
                tempWord = output72.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'd' || tempChar == 'e' || tempChar == 'f') {
                    output73.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(2) == '4') {

            int output72size = output72.size();

            for (int i = 0; i < output72size; i++) {
                tempWord = output72.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'g' || tempChar == 'h' || tempChar == 'i') {
                    output73.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(2) == '5') {

            int output72size = output72.size();

            for (int i = 0; i < output72size; i++) {
                tempWord = output72.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'j' || tempChar == 'k' || tempChar == 'l') {
                    output73.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(2) == '6') {

            int output72size = output72.size();

            for (int i = 0; i < output72size; i++) {
                tempWord = output72.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                    output73.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(2) == '7') {

            int output72size = output72.size();

            for (int i = 0; i < output72size; i++) {
                tempWord = output72.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'p' || tempChar == 'q' || tempChar == 'r' || tempChar == 's') {
                    output73.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(2) == '8') {

            int output72size = output72.size();

            for (int i = 0; i < output72size; i++) {
                tempWord = output72.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                    output73.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(2) == '9') {

            int output72size = output72.size();

            for (int i = 0; i < output72size; i++) {
                tempWord = output72.at(i);
                tempChar = tempWord.at(2);

                if (tempChar == 'w' || tempChar == 'x' || tempChar == 'y' || tempChar == 'z') {
                    output73.push_back(tempWord);
                }
            }
        }

    // PHONE TOTAL FOURTH CHAR  - - - - - - - - - - - - - -

        if (phoneTot.at(3) == '2') {

            int output73size = output73.size();

            for (int i = 0; i < output73size; i++) {
                tempWord = output73.at(i);
                tempChar = tempWord.at(3);

                if (tempChar == 'a' || tempChar == 'b' || tempChar == 'c') {
                    output74.push_back(tempWord);
                }
            }
        }


        if (phoneTot.at(3) == '3') {

            int output73size = output73.size();

            for (int i = 0; i < output73size; i++) {
                tempWord = output73.at(i);
                tempChar = tempWord.at(3);

                if (tempChar == 'd' || tempChar == 'e' || tempChar == 'f') {
                    output74.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(3) == '4') {
            
            int output73size = output73.size();

            for (int i = 0; i < output73size; i++) {
                tempWord = output73.at(i);
                tempChar = tempWord.at(3);

                if (tempChar == 'g' || tempChar == 'h' || tempChar == 'i') {
                    output74.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(3) == '5') {

            int output73size = output73.size();

            for (int i = 0; i < output73size; i++) {
                tempWord = output73.at(i);
                tempChar = tempWord.at(3);

                if (tempChar == 'j' || tempChar == 'k' || tempChar == 'l') {
                    output74.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(3) == '6') {

            int output73size = output73.size();

            for (int i = 0; i < output73size; i++) {
                tempWord = output73.at(i);
                tempChar = tempWord.at(3);

                if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                    output74.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(3) == '7') {

            int output73size = output73.size();

            for (int i = 0; i < output73size; i++) {
                tempWord = output73.at(i);
                tempChar = tempWord.at(3);

                if (tempChar == 'p' || tempChar == 'q' || tempChar == 'r' || tempChar == 's') {
                    output74.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(3) == '8') {

            int output73size = output73.size();

            for (int i = 0; i < output73size; i++) {
                tempWord = output73.at(i);
                tempChar = tempWord.at(3);

                if (tempChar == 't' || tempChar == 'u' || tempChar == 'v') {
                    output74.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(3) == '9') {

            int output73size = output73.size();

            for (int i = 0; i < output73size; i++) {
                tempWord = output73.at(i);
                tempChar = tempWord.at(3);

                if (tempChar == 'w' || tempChar == 'x' || tempChar == 'y' || tempChar == 'z') {
                    output74.push_back(tempWord);
                }
            }
        }

    // PHONE TOTAL FIFTH CHAR  - - - - - - - - - - - - - -

        if (phoneTot.at(4) == '2') {

            int output74size = output74.size();

            for (int i = 0; i < output74size; i++) {
                tempWord = output74.at(i);
                tempChar = tempWord.at(4);

                if (tempChar == 'a' || tempChar == 'b' || tempChar == 'c') {
                    output75.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(4) == '3') {

            int output74size = output74.size();

            for (int i = 0; i < output74size; i++) {
                tempWord = output74.at(i);
                tempChar = tempWord.at(4);

                if (tempChar == 'd' || tempChar == 'e' || tempChar == 'f') {
                    output75.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(4) == '4') {

            int output74size = output74.size();

            for (int i = 0; i < output74size; i++) {
                tempWord = output74.at(i);
                tempChar = tempWord.at(4);

                if (tempChar == 'g' || tempChar == 'h' || tempChar == 'i') {
                    output75.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(4) == '5') {

            int output74size = output74.size();

            for (int i = 0; i < output74size; i++) {
                tempWord = output74.at(i);
                tempChar = tempWord.at(4);

                if (tempChar == 'j' || tempChar == 'k' || tempChar == 'l') {
                    output75.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(4) == '6') {

            int output74size = output74.size();

            for (int i = 0; i < output74size; i++) {
                tempWord = output74.at(i);
                tempChar = tempWord.at(4);

                if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                    output75.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(4) == '7') {

            int output74size = output74.size();

            for (int i = 0; i < output74size; i++) {
                tempWord = output74.at(i);
                tempChar = tempWord.at(4);

                if (tempChar == 'p' || tempChar == 'q' || tempChar == 'r' || tempChar == 's') {
                    output75.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(4) == '8') {

            int output74size = output74.size();

            for (int i = 0; i < output74size; i++) {
                tempWord = output74.at(i);
                tempChar = tempWord.at(4);

                if (tempChar == 't' || tempChar == 'u' || tempChar == 'v') {
                    output75.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(4) == '9') {

            int output74size = output74.size();

            for (int i = 0; i < output74size; i++) {
                tempWord = output74.at(i);
                tempChar = tempWord.at(4);

                if (tempChar == 'w' || tempChar == 'x' || tempChar == 'y' || tempChar == 'z') {
                    output75.push_back(tempWord);
                }
            }
        }

    // PHONE TOTAL SIXTH CHAR  - - - - - - - - - - - - - -

        if (phoneTot.at(5) == '2') {

            int output75size = output75.size();

            for (int i = 0; i < output75size; i++) {
                tempWord = output75.at(i);
                tempChar = tempWord.at(5);

                if (tempChar == 'a' || tempChar == 'b' || tempChar == 'c') {
                    output76.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(5) == '3') {

            int output75size = output75.size();

            for (int i = 0; i < output75size; i++) {
                tempWord = output75.at(i);
                tempChar = tempWord.at(5);

                if (tempChar == 'd' || tempChar == 'e' || tempChar == 'f') {
                    output76.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(5) == '4') {

            int output75size = output75.size();

            for (int i = 0; i < output75size; i++) {
                tempWord = output75.at(i);
                tempChar = tempWord.at(5);

                if (tempChar == 'g' || tempChar == 'h' || tempChar == 'i') {
                    output76.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(5) == '5') {

            int output75size = output75.size();

            for (int i = 0; i < output75size; i++) {
                tempWord = output75.at(i);
                tempChar = tempWord.at(5);

                if (tempChar == 'j' || tempChar == 'k' || tempChar == 'l') {
                    output76.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(5) == '6') {

            int output75size = output75.size();

            for (int i = 0; i < output75size; i++) {
                tempWord = output75.at(i);
                tempChar = tempWord.at(5);

                if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                    output76.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(5) == '7') {

            int output75size = output75.size();

            for (int i = 0; i < output75size; i++) {
                tempWord = output75.at(i);
                tempChar = tempWord.at(5);

                if (tempChar == 'p' || tempChar == 'q' || tempChar == 'r' || tempChar == 's') {
                    output76.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(5) == '8') {

            int output75size = output75.size();

            for (int i = 0; i < output75size; i++) {
                tempWord = output75.at(i);
                tempChar = tempWord.at(5);

                if (tempChar == 't' || tempChar == 'u' || tempChar == 'v') {
                    output76.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(5) == '9') {

            int output75size = output75.size();

            for (int i = 0; i < output75size; i++) {
                tempWord = output75.at(i);
                tempChar = tempWord.at(5);

                if (tempChar == 'w' || tempChar == 'x' || tempChar == 'y' || tempChar == 'z') {
                    output76.push_back(tempWord);
                }
            }
        }
        
    // PHONE TOTAL SEVENTH CHAR  - - - - - - - - - - - - - -

        if (phoneTot.at(6) == '2') {

            int output76size = output76.size();

            for (int i = 0; i < output76size; i++) {
                tempWord = output76.at(i);
                tempChar = tempWord.at(6);

                if (tempChar == 'a' || tempChar == 'b' || tempChar == 'c') {
                    output77.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(6) == '3') {

            int output76size = output76.size();

            for (int i = 0; i < output76size; i++) {
                tempWord = output76.at(i);
                tempChar = tempWord.at(6);

                if (tempChar == 'd' || tempChar == 'e' || tempChar == 'f') {
                    output77.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(6) == '4') {

            int output76size = output76.size();

            for (int i = 0; i < output76size; i++) {
                tempWord = output76.at(i);
                tempChar = tempWord.at(6);

                if (tempChar == 'g' || tempChar == 'h' || tempChar == 'i') {
                    output77.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(6) == '5') {

            int output76size = output76.size();

            for (int i = 0; i < output76size; i++) {
                tempWord = output76.at(i);
                tempChar = tempWord.at(6);

                if (tempChar == 'j' || tempChar == 'k' || tempChar == 'l') {
                    output77.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(6) == '6') {

            int output76size = output76.size();

            for (int i = 0; i < output76size; i++) {
                tempWord = output76.at(i);
                tempChar = tempWord.at(6);

                if (tempChar == 'm' || tempChar == 'n' || tempChar == 'o') {
                    output77.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(6) == '7') {

            int output76size = output76.size();

            for (int i = 0; i < output76size; i++) {
                tempWord = output76.at(i);
                tempChar = tempWord.at(6);

                if (tempChar == 'p' || tempChar == 'q' || tempChar == 'r' || tempChar == 's') {
                    output77.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(6) == '8') {

            int output76size = output76.size();

            for (int i = 0; i < output76size; i++) {
                tempWord = output76.at(i);
                tempChar = tempWord.at(6);

                if (tempChar == 't' || tempChar == 'u' || tempChar == 'v') {
                    output77.push_back(tempWord);
                }
            }
        }

        if (phoneTot.at(6) == '9') {

            int output76size = output76.size();

            for (int i = 0; i < output76size; i++) {
                tempWord = output76.at(i);
                tempChar = tempWord.at(6);

                if (tempChar == 'w' || tempChar == 'x' || tempChar == 'y' || tempChar == 'z') {
                    output77.push_back(tempWord);
                }
            }
        }
    }

    // - - - - - - - - - - - - - - - - - - - - - -

    int output33size = output33.size();
    int output44size = output44.size();

    for (int i = 0; i < output33size; i++) {         // outputs all possible combos of three and four letter words
        for (int b = 0; b < output44size; b++) {
            fout << output33.at(i) << " " << output44.at(b) << endl;
        }
    }

    int output77size = output77.size();

    for (int i = 0; i < output77size; i++) {         // outputs all five letter words
        fout << output77.at(i) << endl;
    }

    if ((output33size < 1) && (output77size < 1)) {
        fout << "No results!" << endl;
    }

    fin.close();            // closes "ShortList.txt"
    fout.close();           // closes "output.txt"
    
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