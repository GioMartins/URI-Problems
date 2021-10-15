#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  string name;
  double salary, totalSold;

  cin >> name;
  cin >> salary;
  cin >> totalSold;

  cout << "TOTAL = R$ " << fixed << setprecision(2) << (salary) + (totalSold * 0.15) << endl;

  return 0;
}