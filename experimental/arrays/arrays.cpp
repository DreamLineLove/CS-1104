#include <iostream>

void addOne(int* arr, int len);

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int len = sizeof(arr)/sizeof(arr[0]);

    addOne(arr, len);
    for (int i = 0; i < len; i++) {
        std::cout << arr[i] << "\n";
    }
}

void addOne(int* arr, int len) {
    for (int i = 0; i < len; i++) {
        *arr += 1;
        arr++;
    }
}
