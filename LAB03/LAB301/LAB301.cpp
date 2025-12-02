// LAB301.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


int main()
{
    string studentID, studentName;
    int score;

    cout << "Enter student ID: ";
    getline(cin, studentID);
    cout << "Enter student name: ";
    getline(cin, studentName);
    cout << "Enter score: ";
    cin >> score;

    cout << "------ Student Report ------" << endl;
    cout << "\nStudent ID: " << studentID << endl;
    cout << "Name: " << studentName << endl;
    cout << " " << endl;
    cout << "Score: " << score << endl;

    if (score >= 90) {
        cout << "Grade A" << endl;
    }
    else if (score >= 80) {
        cout << "Grade B" << endl;
    }
    else if (score >= 70) {
        cout << "Grade C" << endl;
    }
    else if (score >= 60) {
        cout << "Grade D" << endl;
    }
    else {
        cout << "Grade F" << endl;
    }
    cout << "-----------------------------" << endl;


    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
