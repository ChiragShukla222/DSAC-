#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 5, 7, 4, 30};
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting:\n";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << "\t";
    }

    // Bubble sort in descending order
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nAfter sorting (descending order):\n";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << "\t";
    }

    cout << endl;
    return 0;
}
