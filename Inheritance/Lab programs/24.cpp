#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double pi = 3.14159265359;

    cout << "Default output format: " << pi << endl;

    cout.setf(ios::fixed);
    cout << "Fixed notation: " << pi << endl;

    cout.unsetf(ios::fixed);
    cout << "Unset fixed notation: " << pi << "\n"<< endl;

    cout.setf(ios::scientific);
    cout << "Scientific notation: " << pi << endl;

    cout.unsetf(ios::scientific);
    cout << "Unset scientific notation: " << pi <<"\n"<< endl;

    cout.precision(5);
    cout << "Precision 5: " << pi << endl;

    cout.width(10);
    cout << "Width 10: " << pi << endl;
 
    cout.fill('*');
    cout.width(10);
    cout << "Fill character '*': " << pi << endl;

    cout.flags(ios::fmtflags(0));
    cout << "Reset all flags: " << pi << endl;

    return 0;
}