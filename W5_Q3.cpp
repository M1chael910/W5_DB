/*
 * Michael Murphy
 * CSC 121
 * 2/19/23
 *
 * W5 Q3 - Telling time
 */

#include <iostream>
#include <windows.h> // Used to access the Sleep function

using namespace std;


int main() {
    int hours{0}, min{0}, sec{0};
    for (int hours = 0; hours <= 23; hours++) { // adds an hour once 60 minutes is reached
        for (int min = 0; min <= 59; min++) { // adds a minute once 60 seconds is reached
            for (int sec = 0; sec <= 59; sec++) {
                Sleep(50); // Stops the program for one second or 1000 milliseconds.
                cout << hours << " : " << min << " : " << sec << endl;
            }
        }
        return 0;
    }
}