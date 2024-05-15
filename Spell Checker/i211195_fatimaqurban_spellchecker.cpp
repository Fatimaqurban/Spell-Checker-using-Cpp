#include <iostream>
#include <fstream>
#include <string>

using namespace std;

char alphabets[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

// Function to suggest corrections for misspelled words
int suggestion(const string& typed_word, ifstream& words) {
    string given_word, temp_typed_word;
    int found = 0;

    if (words) {
        while (getline(words, given_word)) {
            int typ_len = typed_word.size(), given_len = given_word.size();
            if (typ_len == given_len) {
                for (int i = (typ_len - 1); i >= 0; i--) {
                    temp_typed_word = typed_word;
                    temp_typed_word[i] = alphabets[0];

                    int k = 0;
                    while (k <= 25) {
                        if (temp_typed_word == given_word) {
                            found++;
                            cout << given_word << endl;
                            break;
                        }
                        temp_typed_word[i] = alphabets[k];
                        k++;
                    }
                    if (found >= 4) {
                        break;
                    }
                }
            }
        }
    } else {
        cout << "\n Text File Did Not Open" << endl;
    }

    return found;
}

int main() {
    string typed_word;
    cout << "Enter The Word (Please write in lower alphabets): ";
    getline(cin, typed_word);

    ifstream words("words.txt", ios::in);

    if (words) {
        string given_word;
        bool correct = false;

        while (getline(words, given_word)) {
            if (typed_word == given_word) {
                correct = true;
                break;
            }
        }

        words.close();

        if (correct) {
            cout << "The Spelling Is Correct!!" << endl;
        } else {
            int error = 0;
            cout << "\nThe Spelling Is Incorrect!!\nPossible Suggestions can be:\n\n";
            error = suggestion(typed_word, words); //calling the suggestion function
        }
    } else {
        cout << "Text File Is Unable To Open. Please Try Again!" << endl;
    }
    return 0;
}
