/*
 * Michael Murphy
 * CSC 121
 * 2/19/23
 *
 * W5 Q4 - What's in a name
 */

#include <iostream>

using namespace std;

int main() {
    string name = "";

    cout << "Enter your first name" << endl;
    cin >> name;
    for (int i = 0; i <= name.length(); ++i) {
        if (name[i] == 'a') {
            cout << "Your name contains a" << endl;
        } else if (name[i] == 'e') {
            cout << "Your name contains e" << endl;
        } else if (name[i] == 'i') {
            cout << "Your name contains i" << endl;
        } else if (name[i] == 'o') {
            cout << "Your name contains o" << endl;
        } else if (name[i] == 'u') {
            cout << "Your name contains u" << endl;
        } else if (name[i] == 'y') {
            cout << "Your name contains y" << endl;
        }
    }

    cout << "\n Here is your name in reverse";
    for (int i = name.length(); i >= 0; i--) { // Loop starts from the last character in the name
        cout << name[i] << endl;
    }

    return 0;
}
