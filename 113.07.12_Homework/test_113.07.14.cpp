#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    
    cout << "\n==============================================================================\n\n";
    cout << "1. Convert the input total seconds into a formatted string of hours, minutes, and seconds.\n\n";

    int totalsec;
    cout << "Please total time : ";
    cin >> totalsec;

    int hr;
    int min;
    int sec;
    
    hr = totalsec / 3600;
    totalsec %= 3600;
    min = totalsec / 60;
    sec = totalsec % 60;

    cout << hr << " hour " << min << " minture " << sec << " second " << endl;

    cout << "\n==============================================================================\n\n";
    cout << "2. After entering the name and graduation school, output a business card as follows.\n\n";

    string name;
    string school;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your graduation school: ";
    cin >> school;

    int namesetw = name.length();
    int schoolsetw = school.length();
    int NS = (28 - namesetw) /2;
    int SS = (28 - schoolsetw) /2;

    cout << "+-----------------------+\n";
    cout << "|" << setw(NS) << name << setw(NS) << "|" << endl;
    cout << "|" << setw(SS) << school << setw(SS) << "|" << endl;
    cout << "+-----------------------+\n";

    
    cout << "\n==============================================================================\n\n";
    cout << "3. Request the user to input a year and determine whether it is a leap year.\n\n";
    
    int year;
    cout << "Please input a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is a common year." << endl;
    }

   
    cout << "\n==============================================================================\n\n";
    cout << "4. Calculate the average score of a student's two quizzes, both scores being integers.\n The program should take these two scores as input, compute their average,\n and determine the grade level based on this average score.\n The average score should be displayed to two decimal places.\n\n";

    int score1, score2;
    cout << "Please input your score on test 1: ";
    cin >> score1;
    cout << "Please input your score on test 2: ";
    cin >> score2;

    double average = (score1 + score2) / 2.0;
    cout << fixed << setprecision(2) << "Average score: " << average << endl;

    if (average >= 90) {
        cout << "Grade: A" << endl;
    } else if (average >= 80) {
        cout << "Grade: B" << endl;
    } else if (average >= 70) {
        cout << "Grade: C" << endl;
    } else if (average >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}



