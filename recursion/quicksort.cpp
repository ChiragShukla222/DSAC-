#include <iostream>
using namespace std;

int partito(int arr[], int low, int high) {
    int pivot = arr[low];
    int l = low + 1;
    int r = high;
    int tmp;
    do {
        while ( arr[l] <= pivot) {
            l++;
        }
        while (arr[r] > pivot) {
            r--;
        }
        if (l < r) {
            tmp = arr[r];
            arr[r] = arr[l];
            arr[l] = tmp;
        }
    } while (l < r);

    tmp = arr[low];
    arr[low] = arr[r];
    arr[r] = tmp;
    return r;
}

// logic for quicksort
void qs(int arr[], int low, int high) {
    if (low < high) {  // base case
        int pivot = partito(arr, low, high);
        qs(arr, 0, pivot - 1);
        qs(arr, pivot + 1, high);
    }
}

void display(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << "\t";
    }

}

int main() {
    int arr[] = {7, 8, 2, 5, 3, 9, 10};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "Given array before quick sort:\n";
    display(arr, len);
    qs(arr, 0, len - 1);
    cout << "After quick sort:\n";
    display(arr, len);

}
