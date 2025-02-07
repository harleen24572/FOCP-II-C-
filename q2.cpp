#include<iostream>
#include <limits.h>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i ;
        cin >> arr[i];
    }
    cout << "Original order: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    } cout << "\n";
    
    cout << "reverse order: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    } cout << "\n";

    int largest = INT_MIN, secondLargest = INT_MIN;
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest) {
            secondLargest = arr[i];
        }

        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
    }

    cout << "The second largest element is: " << secondLargest << endl;
    cout << "The second smallest element is: " << secondSmallest << endl;

    
    return 0;
}
    


