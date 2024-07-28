#include <iostream>
#include <string>
using namespace std;
class Doctor {
protected:
    string doctorName;
    string doctorateDegree;
public:
    void setDoctorDetails() {
        cout << "Enter Doctor Name : ";
        cin >> doctorName;
        cout << "Enter Doctorate Degree : ";
        cin >> doctorateDegree;
    }

    void displayDoctorDetails() {
        cout << "Doctor Name : " << doctorName << endl;
        cout << "Doctorate Degree : " << doctorateDegree << endl;
    }
};
class Patient : public Doctor {
private:
    string patientName;
    int bedNumber;
    string wardName;
    double dues;
public:
    void setPatientDetails() {
        cout << "Enter Patient Name : ";
        cin >> patientName;
        cout << "Enter Bed Number : ";
        cin >> bedNumber;
        cout << "Enter Ward Name : ";
        cin >> wardName;
        cout << "Enter Dues of Patient : ";
        cin >> dues;
        setDoctorDetails();
    }

    void displayPatientDetails() {
        cout << "Inserted Data is :" << endl;
        cout << "Patient Name : " << patientName << endl;
        cout << "Bed Number : " << bedNumber << endl;
        cout << "Ward Name : " << wardName << endl;
        displayDoctorDetails();
        cout << "Total Dues of Patient : " << dues << endl;
    }
};
int main() {
    Patient p;
    cout << "Enter Data" << endl;
    p.setPatientDetails();
    p.displayPatientDetails();
    return 0;
}