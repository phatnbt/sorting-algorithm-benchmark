#include <ctime>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

void heapify(vector<double>& a, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && a[left] > a[largest]) largest = left;
    if (right < n && a[right] > a[largest]) largest = right;

    if (largest != i) {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}

void heapSort(vector<double>& a) {
    int n = a.size();

    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(a, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
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
    cout << "HEAPSORT\n";

    for (int i = 1; i <= 10; i++) {
        vector<double> a = createData(n, i);

        clock_t start = clock();
        heapSort(a);
        clock_t finish = clock();

        double time = 1000.0 * (finish - start) / CLOCKS_PER_SEC;
        cout << "Bo du lieu " << i << ": " << time << " ms\n";
    }

    return 0;
}
