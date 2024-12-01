#include <iostream>

int* createArray(int size) {
    int* newArray = new int[size];
    for (int i = 0; i < size; ++i) {
        newArray[i] = i + 1;
    }
    return newArray;
}

void printArray(int* arr) {
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int* myArray = createArray(12);
    printArray(myArray);

    return 0;
}
