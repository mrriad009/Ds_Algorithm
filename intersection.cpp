#include <iostream>
using namespace std;
    int main() {
    int n , m ;
        cout << "Enter the Size of arr1 : "<<endl;
        cin >>n;
        cout << "Enter the Size of arr2 : "<<endl;
        cin >>m;

    int arr1[n];
    int arr2[m];

        cout << "Enter the Element for arra1 : "<<endl;
        for (int i=0 ; i<n ; i++){
        cin>>arr1[i];
        }
        cout << "Enter the Element for arr2 : "<<endl;
        for ( int j=0 ; j<m ; j++){
        cin>>arr2[j];
        }

  //work of arr3
    int arr3[n];
    int arr3index =0;

        for (int i=0 ; i<n ; i++){
          for ( int j=0 ; j<m ; j++){
            if (arr1[i]==arr2[j]){
                arr3[arr3index]= arr1[i];
                arr3index++;
                break;
                    }
                }
            }
            cout << "The intersection of Arr1 and Arr2 : ";
            for ( int i=0 ; i<arr3index ; i++){
                cout << arr3[i] <<" ";
            }
return 0;
}
