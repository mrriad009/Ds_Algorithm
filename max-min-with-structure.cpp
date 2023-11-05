#include <iostream>
using namespace std;

// Define a struct to store maximum and minimum information
struct captain {
    int value;
    int row;
    int col;
};
// Function to find the maximum value and its position
captain findMax(int* array, int row, int col) {
    captain maxInfo;
    maxInfo.value = array[0];
    maxInfo.row = 0;
    maxInfo.col = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (array[i * col + j] > maxInfo.value) {
                maxInfo.value = array[i * col + j];
                maxInfo.row = i;
                maxInfo.col = j;
            }
        }
    }
    return maxInfo;
}

// Function to find the minimum value and its position
captain findMin(int* array, int row, int col) {
    captain minInfo;
    minInfo.value = array[0];
    minInfo.row = 0;
    minInfo.col = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (array[i * col + j] < minInfo.value) {
                minInfo.value = array[i * col + j];
                minInfo.row = i;
                minInfo.col = j;
            }
        }
    }
    return minInfo;
}

int main() {
    int row, col;

    cout <<"Enter the number of rows: ";
    cin >> row;
    cout <<"Enter the number of columns: ";
    cin >> col;

    // dynamic  memory for Array otherwise we need to fix the array maximum size
    int* array = new int[row * col];

                                        // Take user input for the array elements
    cout <<"Enter the elements of the matrix: "<<endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {      
            cin >> array[i * col + j];
        }
    }
                                                    //function call
    captain maxInfo = findMax(array, row, col);
    captain minInfo = findMin(array, row, col);

    cout << "Maximum element: " << maxInfo.value << " at row " << maxInfo.row << " and column " << maxInfo.col << endl;
    cout << "Minimum element: " << minInfo.value << " at row " << minInfo.row << " and column " << minInfo.col << endl;

                    // Deallocate memory
    delete[] array;

    return 0;
}
