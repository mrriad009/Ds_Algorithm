#include <iostream>
using namespace std;
int main ()
{
    int row,col;
    cout<<"Enter the size of row : ";
    cin>>row;

    cout<< "Enter the size of Col : ";
    cin>>col;
    if (row == col){
        cout<<" Valid Input " <<endl;
    }
    else
    {
        cout<< "Invalid input ";
        return 1;
    }

    int matrix[row][col];
    cout<< "Enter the Elements  of the array : "<<endl;
    for (int i = 0; i <row; i++)
    {
                for (int  j = 0; j < col; j++)
        {
            cin>>matrix[i][j];
        }
    }
    int bounSum=0;
    for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < col; j++)
      {
        if (i==0 || i==row-1 || j==0 || j==col-1) {
          bounSum= bounSum + matrix[i][j];
        }
      }
    }
    cout << "Boundary Sum : " <<bounSum<< '\n';


    int diagonalsum = 0;
    for (int i = 0; i < row && i < col; i++) {
        diagonalsum += matrix[i][i];
    }
      cout << "diagonalsum Sum : " <<diagonalsum << '\n';

    return 0;
}
