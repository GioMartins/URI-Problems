#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  
  double radius, volume;
  double pi = 3.14159;
  
  cin >> radius;
  volume = (4/3.0) * pi * radius * radius * radius;
  cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;

  return 0;
}