#include <ctime>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

void merge(vector<double>& a, int left, int middle, int right) {
    vector<double> temp;
    int i = left;
    int j = middle + 1;

    while (i <= middle && j <= right) {
        if (a[i] <= a[j]) temp.push_back(a[i++]);
        else temp.push_back(a[j++]);
    }

    while (i <= middle) temp.push_back(a[i++]);
    while (j <= right) temp.push_back(a[j++]);

    for (int k = 0; k < temp.size(); k++) {
        a[left + k] = temp[k];
    }
}

void mergeSort(vector<double>& a, int left, int right) {
    if (left >= right) return;

    int middle = (left + right) / 2;
    mergeSort(a, left, middle);
    mergeSort(a, middle + 1, right);
    merge(a, left, middle, right);
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
    cout << "MERGESORT\n";

    for (int i = 1; i <= 10; i++) {
        vector<double> a = createData(n, i);

        clock_t start = clock();
        mergeSort(a, 0, n - 1);
        clock_t finish = clock();

        double time = 1000.0 * (finish - start) / CLOCKS_PER_SEC;
        cout << "Bo du lieu " << i << ": " << time << " ms\n";
    }

    return 0;
}
