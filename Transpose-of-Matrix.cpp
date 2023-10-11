#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter the number of columns: ";
    cin >> col;

                                                    // Declare a 2D matrix
    int matrix[row][col];
                                                    // Input the matrix elements
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }

                                                     // Transpose the matrix
    int transpose[col][row];                         //change the order from [row][col] to [col][row]
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            transpose[i][j] = matrix[j][i];          //change the [i] and [j] order
        }
    }

                                                     // Display the transpose
    cout << "Transpose of the matrix: " << endl;
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
