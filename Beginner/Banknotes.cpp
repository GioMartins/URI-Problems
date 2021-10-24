#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int valor, resto;
    int n100, n50, n20, n10, n5, n2, n1;

    cin >> valor;

    n100 = valor / 100;
    resto = valor - (n100 * 100);
    n50 = resto / 50;
    resto = resto - (n50 * 50);
    n20 = resto / 20;
    resto = resto - (n20 * 20);
    n10 = resto / 10;
    resto = resto - (n10 * 10);
    n5 = resto / 5;
    resto = resto - (n5 * 5);
    n2 = resto / 2;
    resto = resto - (n2 * 2);
    n1 = resto;

    cout << valor << endl;
    cout << n100 << " nota(s) de R$ 100,00" << endl;
    cout << n50 << " nota(s) de R$ 50,00" << endl;
    cout << n20 << " nota(s) de R$ 20,00" << endl;
    cout << n10 << " nota(s) de R$ 10,00" << endl;
    cout << n5 << " nota(s) de R$ 5,00" << endl;
    cout << n2 << " nota(s) de R$ 2,00" << endl;
    cout << n1 << " nota(s) de R$ 1,00" << endl;

    return 0;
}