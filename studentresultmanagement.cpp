#include <iostream>
#include <fstream>
using namespace std;
class Student {
int rollno;
string name;
int marks1, marks2, marks3;
float total, percentage;
char grade;
public:
void getData() {
cout << "\nEnter Roll No: ";
cin >> rollno;
cout << "Enter Name: ";
cin >> name;
cout << "Enter marks in 3 subjects: ";
cin >> marks1 >> marks2 >> marks3;
total = marks1 + marks2 + marks3;
percentage = total / 3.0;
if (percentage >= 90) grade = 'A';
else if (percentage >= 75) grade = 'B';
else if (percentage >= 60) grade = 'C';
else if (percentage >= 45) grade = 'D';
else grade = 'F';
}
void displayData() {
cout << "\nRoll No: " << rollno;
cout << "\nName: " << name;
cout << "\nTotal Marks: " << total;
cout << "\nPercentage: " << percentage << "%";
cout << "\nGrade: " << grade << endl;
}
void saveToFile() {
ofstream fout("results.txt", ios::app);
fout << rollno << " " << name << " "
<< total << " " << percentage << " " << grade << endl;
fout.close();
}
};
int main() {
Student s;
s.getData();
s.displayData();
s.saveToFile();
cout << "\nRecord saved successfully in file!";
return 0;
}
