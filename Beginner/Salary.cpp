#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int numEmp, numHours;
  float hourSalary;

  cin >> numEmp;
  cin >> numHours;
  cin >> hourSalary;

  cout << "NUMBER = " << numEmp << endl;
  cout << "SALARY = U$ " << fixed << setprecision(2) << numHours * hourSalary << endl;

  return 0;
}