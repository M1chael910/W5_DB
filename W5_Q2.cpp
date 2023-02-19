
/*
 * Michael Murphy
 * CSC 121
 * 2/19/23
 *
 * W5 Q2 - Up Counter
 */

#include <iostream>

using namespace std;

double calcAverage(int grades[]);

string calcGrade(int grade);

int main() {
    int scores[5] = {0, 0, 0, 0, 0};
    cout << "Enter 5 scores.";
    cin >> scores[0] >> scores[1] >> scores[2] >> scores[3] >> scores[4];
    cout << "Score 1: " << calcGrade(scores[0]) << endl;
    cout << "Score 2: " << calcGrade(scores[1]) << endl;
    cout << "Score 3: " << calcGrade(scores[2]) << endl;
    cout << "Score 4: " << calcGrade(scores[3]) << endl;
    cout << "Score 5: " << calcGrade(scores[4]) << endl;
    double average = calcAverage(scores);
    cout << "Average Score: " << calcGrade(average);
    return 0;
}

double calcAverage(int grades[]) {
    int total = 0;
    for (int i = 0; i < 5; ++i) {
        total = total + grades[i];
    }
    double average = total / 5;
    return average;
}

string calcGrade(int grade) {
    if (grade <= 59.9) {
        return "You got an F";
    } else if (grade >= 60.0 && grade <= 69.9) {
        return "You got an D";
    } else if (grade >= 70.0 && grade <= 79.9) {
        return "You got a C";
    } else if (grade >= 80.0 && grade <= 89.9) {
        return "You got a B";
    } else if (grade >= 90.0 && grade <= 100.0) {
        return "You got an A";
    } else {
        return "Not a valid score";
    }
}