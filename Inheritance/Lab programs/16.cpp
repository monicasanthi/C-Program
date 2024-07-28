#include <iostream>
#include <string>
using namespace std;
class Student {
protected:
    int rollNo;
public:
    Student(int roll) : rollNo(roll) {}

    void displayRollNo() {
        cout << "Roll No: " << rollNo << endl;
    }
};
class Test : public Student {
protected:
    int maths, science, english;

public:
    Test(int roll, int m, int s, int e) : Student(roll), maths(m), science(s), english(e) {}

    void displayTestScores() {
        cout << "Test Scores: " << endl;
        cout << "Maths: " << maths << endl;
        cout << "Science: " << science << endl;
        cout << "English: " << english << endl;
    }
};

class Sports {
protected:
    int score;

public:
    Sports(int s) : score(s) {}

    void displaySportsScore() {
        cout << "Sports Score: " << score << endl;
    }
};
class Result : public Test, public Sports {
public:
    Result(int roll, int m, int s, int e, int sportScore) : Test(roll, m, s, e), Sports(sportScore) {}
    void displayResult() {
        displayRollNo();
        displayTestScores();
        displaySportsScore();
        int total = maths + science + english + score;
        cout << "Total Score: " << total << endl;
        cout << "Final Result: ";
        if (total >= 180)
            cout << "Pass" << endl;
        else
            cout << "Fail" << endl;
    }
};
int main() {
    Result student(1, 80, 70, 90, 30);
    student.displayResult();
    return 0;
}