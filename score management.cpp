#include <iostream>
using namespace std;

int main() {
    int scores[5];
    int total = 0;
    int highest, lowest;
    double average;

    // Enter students' scores
    for (int i = 0; i < 5; i++) {
        cout << "Enter score for student "
             << i + 1 << ": ";
        cin >> scores[i];

        total += scores[i];
    }

    // Calculate average
    average = total / 5.0;

    // Find highest and lowest scores
    highest = scores[0];
    lowest = scores[0];

    for (int i = 1; i < 5; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
        }

        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }

    // Display results
    cout << "\n--- Student Score Report ---\n";

    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1
             << ": " << scores[i] << endl;
    }

    cout << "Total score: " << total << endl;
    cout << "Average score: " << average << endl;
    cout << "Highest score: " << highest << endl;
    cout << "Lowest score: " << lowest << endl;

    return 0;
}

