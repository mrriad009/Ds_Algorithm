
#include <iostream>
using namespace std;

int main() {
    
    int row,col;
    cout<<"Ether the size of row : ";
    cin>>row;
    cout<<"Enter the size of Col : ";
    cin>>col;
    
    int matrix1[row][col]; // define 2 array for 2 matrix
    int matrix2[row][col];
    
    cout<< "Enter the Elements for matrix1 : ";
    cout<<endl;
    for (int i=0; i<row; i++) {
        cout<< " ";
        for (int j=0; j<col; j++) {
            cin>> matrix1[i][j];
        }
    }
    
    cout<< "Enter the Elements for matrix2 : ";
    cout<<endl;
    for (int i=0; i<row; i++) {
        cout<< " ";
        for (int j=0; j<col; j++) {
            cin>> matrix2[i][j];
        }
    }
    int result [row][col]; //3rd array for store result
        
    //perform addition

    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    //display output
    
    cout<<"Ther addition of given 2 matrix : ";
    for (int i=0; i<row; i++) {
        cout<<endl;
        for (int j=0 ; j<col; j++) {
            cout<< result[i][j]<<" ";
        }
    }
    //substraction
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    cout<<endl; //decoreate output

    cout<<"Ther subtraction  of given 2 matrix : ";
    for (int i=0; i<row; i++) {
        cout<<endl;
        for (int j=0 ; j<col; j++) {
            cout<< result[i][j];
        }
    }
    cout<<endl;

    return 0;
}
