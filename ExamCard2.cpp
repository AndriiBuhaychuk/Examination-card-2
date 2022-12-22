#include <iostream>
#include <cmath>
#include <windows.h>
// Sorts the elements of an array in descending order
void bubbleSortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
            std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}
// Calculates the sum of the odd elements of an array
int sumOddElements(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

// Calculates the product of the elements between the minimum and maximum elements of an array
int productElementsBetweenMinMax(int arr[], int size, int minIndex, int maxIndex) {
    int product = 1;
    for (int i = minIndex + 1; i < maxIndex; i++) {
        product *= arr[i];
    }
    return product;
}

int main() {
    // Initialize an array
    int arr[] = { 1, 7, 3, 5, 2, 9, 8, 4 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // Find the indices of the minimum and maximum elements
    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    // Calculate the sum of the odd elements and the product of the elements between the minimum and maximum elements
    int sumOdd = sumOddElements(arr, size);
    int productElements = productElementsBetweenMinMax(arr, size, minIndex, maxIndex);

    // Print the results
    std::cout << "The sum of the odd elements is: " << sumOdd << std::endl;
    std::cout << "The product of the elements between the minimum and maximum elements is: " << productElements << std::endl;

    return 0;
}