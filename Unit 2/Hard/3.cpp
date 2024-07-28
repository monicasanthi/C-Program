#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int regno;
    int mark1, mark2, mark3;
    double average;
    char grade;
public:
    void input() {
        cout << "ENTER THE STUDENT NAME =>";
        cin >> name;
        cout << "ENTER THE REGISTER NUMBER =>";
        cin >> regno;
        cout << "MARK 1 =>";
        cin >> mark1;
        cout << "MARK 2 =>";
        cin >> mark2;
        cout << "MARK 3 =>";
        cin >> mark3;
    }
    void calculateAverage() {
        average = (mark1 + mark2 + mark3) / 3.0;
    }
    void calculateGrade() {
        if (average > 90)
            grade = 'S';
        else if (average > 80)
            grade = 'A';
        else if (average > 70)
            grade = 'C';
        else if (average > 60)
            grade = 'D';
        else if (average > 50)
            grade = 'E';
        else
            grade = 'F';
    }
    void display() {
        cout << "AVERAGE SCORE IS => " << average << endl;
        cout << "GRADE IS => " << grade << endl;
    }
};
int main() {
    int n;
    cout << "ENTER THE NUMBER OF STUDENT ENTRIES =>";
    cin >> n;
    Student students[n];
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        students[i].input();
        students[i].calculateAverage();
        students[i].calculateGrade();
        students[i].display();
        cout << endl;
    }
    return 0;
}