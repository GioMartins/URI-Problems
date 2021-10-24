#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x;
    double y, consumption;

    cin >> x;
    cin >> y;
    
    consumption = x / y;

    cout << fixed << setprecision(3) << consumption << " km/l" << endl;

    return 0;
}