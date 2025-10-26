#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40}; // size = 4
    int size = 4;
    int pos = 2, value = 50;

    // Shift elements to the right
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    size++;

    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}