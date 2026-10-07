#include <ctime>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

void quickSort(vector<double>& a, int left, int right) {
    int i = left;
    int j = right;
    double pivot = a[(left + right) / 2];

    while (i <= j) {
        while (a[i] < pivot) i++;
        while (a[j] > pivot) j--;

        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }

    if (left < j) quickSort(a, left, j);
    if (i < right) quickSort(a, i, right);
}

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
    cout << "QUICKSORT\n";

    for (int i = 1; i <= 10; i++) {
        vector<double> a = createData(n, i);

        clock_t start = clock();
        quickSort(a, 0, n - 1);
        clock_t finish = clock();

        double time = 1000.0 * (finish - start) / CLOCKS_PER_SEC;
        cout << "Bo du lieu " << i << ": " << time << " ms\n";
    }

    return 0;
}
