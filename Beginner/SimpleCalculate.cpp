#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int code, quant;
  float price, total;

  for (int i = 0; i < 2; i++){
    cin >> code >> quant >> price;
    total += (quant * price);
  }
  
  cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;
  return 0;
}