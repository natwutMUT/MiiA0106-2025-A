// test06.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void displayStudentInfo(string name, string id, double score, char grade);
void calculateGrade(double score, char& grade);

int main()
{
    const int N = 3; // students
    const int M = 4; // subjects

    string name[N], id[N];
    double score[N][M];
    double total[N]; // ในที่นี้จะเก็บค่าเฉลี่ยแทน
    char grade[N];

    // 1. วนรับข้อมูลและคะแนน M วิชา
    for (int i = 0; i < N; i++) {
        cout << "Enter student " << i + 1 << " name: ";
        getline(cin >> ws, name[i]);
        cout << "Enter student " << i + 1 << " id: ";
        cin >> id[i];

        double sum = 0; // ตัวแปรชั่วคราวสำหรับพักคะแนนรวม
        for (int j = 0; j < M; j++) {
            cout << "Enter student " << i + 1 << " score" << j + 1 << ": ";
            cin >> score[i][j];
            sum += score[i][j]; // บวกคะแนนสะสม
        }

        // 2. คำนวณค่าเฉลี่ยและเก็บลงใน total[i]
        total[i] = sum / M;

        // 3. คำนวณเกรดจากค่าเฉลี่ย
        calculateGrade(total[i], grade[i]);
        cout << endl;
    }

    // 4. แสดงผลโดยใช้ displayStudentInfo (จะแสดงค่าเฉลี่ยในช่อง Score)
    for (int i = 0; i < N; i++) {
        displayStudentInfo(name[i], id[i], total[i], grade[i]);
        cout << "----------------------------" << endl;
    }

    return 0;
}

void displayStudentInfo(string name, string id, double score, char grade)
{
    cout << "Student Name: " << name << "\n";
    cout << "Student ID  : " << id << "\n";
    cout << "Score       : " << fixed << setprecision(2) << score << "\n";
    cout << "Grade       : " << grade << "\n";
}

void calculateGrade(double score, char& grade)
{
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';
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
