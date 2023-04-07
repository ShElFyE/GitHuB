#include <iostream>
using namespace std;
int main() {
    clock_t start = clock();
    for (int i = 0; i < 1000000; i++) {
    }
    clock_t end = clock();
    double duration = double(end - start) / CLOCKS_PER_SEC;
    cout << "Programa otrabotala za " << duration << " secund\n";
    return 0;
}
