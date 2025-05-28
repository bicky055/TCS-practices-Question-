#include "bits/stdc++.h"
using namespace std;

int Partition(vector<int> &arr, int st, int end) {
    int index = st - 1;
    int pivot = arr[end];

    for (int j = st; j < end; j++) {
        if (arr[j] <= pivot) {
            index++;
            swap(arr[j], arr[index]);
        }
    }

    index++;
    swap(arr[index], arr[end]); // place pivot in correct position
    return index; // ✅ return the pivot index
}

// Quick Sort
void quickSort(vector<int> &arr, int st, int end) {
    if (st < end) {
        int pivot = Partition(arr, st, end);
        quickSort(arr, st, pivot - 1);   // left
        quickSort(arr, pivot + 1, end);  // right
    }
}

int main() {
    vector<int> arr = {10, 2, 4, 5, 51, 36, 7};
    quickSort(arr, 0, arr.size() - 1);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
