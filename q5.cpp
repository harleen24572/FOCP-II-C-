#include <iostream>
using namespace std;

int main() {
    int matrix[3][3], rotatedMatrix[3][3];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rotatedMatrix[j][2 - i] = matrix[i][j];
        }
    }
   cout << "Rotated Matrix: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << rotatedMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
