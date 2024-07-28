#include<iostream>
using namespace std;

void mrg(int aee[], int low, int mid, int high) {
    int i = low;
    int j = mid + 1;
    int k = low;
    int abe[5]; // The temporary array should be large enough to hold the merged elements

    while (i <= mid && j <= high) {
        if (aee[i] < aee[j]) {
            abe[k] = aee[i];
            i++;
        } else {
            abe[k] = aee[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        abe[k] = aee[i];
        i++;
        k++;
    }

    while (j <= high) {
        abe[k] = aee[j];
        j++;
        k++;
    }

    for (int l = low; l <= high; l++) {
        aee[l] = abe[l];
    }
}

void qs(int aee[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        qs(aee, low, mid);
        qs(aee, mid + 1, high);
        mrg(aee, low, mid, high);
    }
}

void display(int aee[], int len) {
    for (int i = 0; i < len; i++) {
        cout << aee[i] << "\t";
    }

}

int main() {
    int aee[] = {1, 6, 23, 78, 14};
    int len = sizeof(aee) / sizeof(aee[0]);
    cout << "Before merge sorting:" << "\t";
    display(aee, len);
    qs(aee, 0, len - 1);
    cout << "After merge sorting:" << "\t";
    display(aee, len);
    return 0;
}
