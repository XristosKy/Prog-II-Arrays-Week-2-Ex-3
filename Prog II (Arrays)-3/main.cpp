//  main.cpp
//  Prog II (Arrays)-3
//  Created by Christos Kyriakou on 13/02/2024.

#include <iostream>
using namespace std;

char calculate_grade(int mark) {
    if (mark >= 90 && mark <= 100)
        return 'A';
    else if (mark >= 80 && mark <= 89)
        return 'B';
    else if (mark >= 70 && mark <= 79)
        return 'C';
    else if (mark >= 60 && mark <= 69)
        return 'D';
    else
        return 'F';
}

int main() {
    int n;
    cout << "Enter the number of students in the class: ";
    cin >> n;
    
    int exam[100];
    int total_marks = 0;
    int highest_mark = 0;
    int grade_counts[5] = {0};
    
    for (int i = 0; i < n; ++i) {
        cout << "Enter mark for student " << (i + 1) << ": ";
        cin >> exam[i];
        total_marks += exam[i];
        if (exam[i] > highest_mark)
            highest_mark = exam[i];
        char grade = calculate_grade(exam[i]);
        switch (grade) {
            case 'A':
                grade_counts[0]++;
                break;
            case 'B':
                grade_counts[1]++;
                break;
            case 'C':
                grade_counts[2]++;
                break;
            case 'D':
                grade_counts[3]++;
                break;
            case 'F':
                grade_counts[4]++;
                break;
        }
    }
    
    float average = static_cast<float>(total_marks) / n;
    
    cout << "a) Average mark: " << average << endl;
    cout << "   Highest mark: " << highest_mark << endl;
    cout << "b) Grade Distribution:" << endl;
    cout << "   A: " << grade_counts[0] << endl;
    cout << "   B: " << grade_counts[1] << endl;
    cout << "   C: " << grade_counts[2] << endl;
    cout << "   D: " << grade_counts[3] << endl;
    cout << "   F: " << grade_counts[4] << endl;
    
    return 0;
}
