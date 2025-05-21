#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int minindex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minindex]) {
                minindex = j;
            }
        }
        swap(arr[i], arr[minindex]);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    SelectionSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
