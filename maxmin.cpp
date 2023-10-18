#include <iostream>

using namespace std;

int main() {

    int row, col;
//input row and col size
    cout << "Enter the number of row : ";
    cin >> row;
    cout << "Enter the number of col : ";
    cin >> col;

//declear 2D Array

    int array[row][col];

    // Take user input for the array elements
    cout<<"Enter the elements of the matrix : "<<endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            //cout<<"Enter the elements of the matrix : "<<endl;
            cin >> array[i][j];
        }
    }

    // Initialize max and min to the first element of the array
    int max = array[0][0];
    int min = array[0][0];
    int maxrow = 0 , maxcol = 0;
    int minrow = 0  , mincol= 0;

    // Find the maximum and minimum elements of the array
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {

            if (array[i][j] > max) //get max value and position
            {
                max = array[i][j];
                maxrow=i;
                maxcol=j;
            }
            if (array[i][j] < min) //get min value and the position
            {
                min = array[i][j];
                minrow=i;
                mincol=j;
            }

        }
    }

    // Print the maximum and minimum elements
    cout << "Maximum element: " << max <<  "  position :  "<<maxrow <<" " <<maxcol<< endl;
    cout << "Minimum element: " << min <<  "  position :  "<<minrow << " "<<mincol<< endl;

    return 0;
}
