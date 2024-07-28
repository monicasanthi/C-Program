#include <iostream>
#include <stdexcept>
using namespace std;
void performCalculation(int num1, int num2) {
  if (num2 == 0) {
    throw runtime_error("Division by zero!");
  }

  try {
    int result = num1 / num2; // Simulate potential exception
    cout << "Result: " << result << endl;
  } catch (const exception& e) {
    cerr << "Error: " << e.what() << endl;
  } finally {
    cout << "Calculation finished (finally block)." << endl;
  }
}

int main() {
  try {
    performCalculation(10, 2);
    performCalculation(10, 0); // This will throw an exception
  } catch (const exception& e) {
    cerr << "Error in main: " << e.what() << endl;
  }

  return 0;
}