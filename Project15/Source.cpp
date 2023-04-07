#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int n = 10000000;
    double x, y;
    double res = 0.0;
    clock_t start = clock();
    for (int i = 0; i < 100000000; i++) {
    }
    clock_t mid = clock();
    for (int i = 0; i < n; i++) {
        x = sin(i);
        y = cos(i);
        res += x * y;
    }
    clock_t end = clock();
    double duration1 = double(mid - start) / CLOCKS_PER_SEC;
    double duration2 = double(end - mid) / CLOCKS_PER_SEC;
    cout << "Mathematicheskie deistviya programa otrabotala za : " << duration2 << " secund" << endl;
    if (duration2 > 0.0) {
        cout << "Programa otrabotala za " << duration1 + duration2 << " secund\n";
    }
    else {
        cout << "Programa otrabotala za " << duration1 << " secund\n";
    }
    return 0;
}
