#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double m, R;
    cin >> m >> R;


    double total_distance = (m * (m + 1) * (m + 2) / 3 - m) * 2;


    total_distance += (sqrt(2.0) - 2) * ((m * m - m) + (m * m - m - (m - 1) * 2));

    double average_distance = (total_distance / (m * m)) * R;

    cout << fixed << setprecision(7) << average_distance << endl;

    return 0;
}
