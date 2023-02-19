/*
 * Michael Murphy
 * CSC 121
 * 2/19/23
 *
 * W5 Q1 - Up Counter
 */

#include <iostream>

using namespace std;

void displayNumbersFromRange();

int main() {
    int x = 0;
    for (x; x <= 3; x++) {
        displayNumbersFromRange();
    }
    return 0;
}

void displayNumbersFromRange() {
    int start = 0;
    int end = 0;
    cout << "\nEnter a starting and ending number.";
    cin >> start >> end;
    cout << "printing numbers from " << start << " to " << end << ":\n\n";
    for (start; start <= end; start++) {
        //Uses the start variable as a counter
        // Continues until condition is false
        //Adds 1 to the start variable to iterate the loop.
        cout << start << endl;
    }
}

