#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter matrix size: ";
    cin >> n;
    int a[n][n];  

    cout << "Enter matrix elements:\n";
    int i = 0, j = 0;
    while (i < n) {
        j = 0;
        while (j < n) {
            cin >> a[i][j]; 
            j++;
        }
        i++;
    }

    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    cout << "Spiral Order: ";

    while (top <= bottom && left <= right) {
        i = left;
        while (i <= right) {
            cout << a[top][i] << " ";
            i++;
        }
        top++;

        i = top;
        while (i <= bottom) {
            cout << a[i][right] << " ";
            i++;
        }
        right--;

        if (top <= bottom) {
            i = right;
            while (i >= left) {
                cout << a[bottom][i] << " ";
                i--;
            }
            bottom--;
        }

        if (left <= right) {
            i = bottom;
            while (i >= top) {
                cout << a[i][left] << " ";
                i--;
            }
            left++;
        }
    }

    cout << endl;
    return 0;
}
