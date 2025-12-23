#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void displayStudentInfo(string name, string id, double score, char grade);
void calculateGrade(double score, char& grade);

int main()
{
    int size;
    cout << "Enter number of students: ";
    cin >> size;
    cin.ignore(); // เคลียร์ newline ก่อน getline

    // สร้าง dynamic array
    string* name = new string[size];
    string* id = new string[size];
    double* score = new double[size];
    char* grade = new char[size];

    // 1. วนรับข้อมูล size คน
    for (int i = 0; i < size; i++) {
        cout << "\nEnter student " << i + 1 << " name: ";
        getline(cin, name[i]);

        cout << "Enter student " << i + 1 << " id:   ";
        cin >> id[i];

        cout << "Enter student " << i + 1 << " score: ";
        cin >> score[i];
        cin.ignore(); // เคลียร์ buffer สำหรับ getline รอบถัดไป

        // 2. คำนวณเกรด
        calculateGrade(score[i], grade[i]);
    }

    cout << "\n--- Student List ---\n";

    // 3. วนแสดงผล size คน ด้วย displayStudentInfo
    for (int i = 0; i < size; i++) {
        displayStudentInfo(name[i], id[i], score[i], grade[i]);
        cout << endl;
    }

    // 4. ล้างหน่วยความจำด้วย delete[] ให้ครบทุกตัวแปร
    delete[] name;
    delete[] id;
    delete[] score;
    delete[] grade;

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
