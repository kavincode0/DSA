#include <iostream>
using namespace std;

void Merge(int arr[], int s, int e) {
    int m = s + (e - s) / 2, len1 = m + 1 - s, len2 = e - m;

    int* first = new int[len1];
    int* second = new int[len2];

    // Copy values from the main array
    int mainArrayInd = s;
    for (int i = 0; i < len1; i++) {
        first[i] = arr[mainArrayInd++];
    }
    mainArrayInd = m + 1;
    for (int i = 0; i < len2; i++) {
        second[i] = arr[mainArrayInd++];
    }

    int i = 0, j = 0;
    mainArrayInd = s;
    while (i < len1 && j < len2) {
        if (first[i] < second[j]) {
            arr[mainArrayInd] = first[i++];
        }
        else {
            arr[mainArrayInd] = second[j++];
        }
        mainArrayInd++;
    }
    if (i <= len1 - 1) {
        while (i < len1) {
            arr[mainArrayInd] = first[i];
            i++;
            mainArrayInd++;
        }
    }
    if (j <= len2 - 1) {
        while (j < len2) {
            arr[mainArrayInd] = second[j];
            j++;
            mainArrayInd++;
        }
    }

    delete[] first;
    delete[] second;
}

void Sort(int arr[], int s, int e) {
    // base case
    if (s >= e)
        return;

    int m = s + (e - s) / 2;
    // sorting left part of array
    Sort(arr, s, m);
    // sorting right part of array
    Sort(arr, m + 1, e);
    // merge 2 arrays
    Merge(arr, s, e);
}

int main() {
    int arr[] = {5, 6, 3, 1, 4, 2};
    Sort(arr, 0, 5);
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
