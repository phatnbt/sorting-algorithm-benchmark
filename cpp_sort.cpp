#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

vector<double> createData(int n, int dataNumber) {
    vector<double> a(n);
    srand(100 + dataNumber);

    for (int i = 0; i < n; i++) {
        if (dataNumber == 1) a[i] = i;
        else if (dataNumber == 2) a[i] = n - i;
        else a[i] = -1000000.0 + 2000000.0 * rand() / RAND_MAX;
    }

    return a;
}

int main() {
    const int n = 1000000;
    cout << "SORT C++\n";

    for (int i = 1; i <= 10; i++) {
        vector<double> a = createData(n, i);

        clock_t start = clock();
        sort(a.begin(), a.end());
        clock_t finish = clock();

        double time = 1000.0 * (finish - start) / CLOCKS_PER_SEC;
        cout << "Bo du lieu " << i << ": " << time << " ms\n";
    }

    return 0;
}
