#include <iostream>
using namespace std;
int main() {
                                    //step 1 define and take input of array size
    int n;
    cout<< "Enter the Size of the Elements : ";
    cin>>n;
                                    //take input of array elements
    int arr[n];
    cout<<"Enter the array Elements : ";
    for (int i=0; i<n; i++)
    {
       cin>> arr[i];
    }
                                    //for loop and a inner while loop
    for (int i=1; i<n; i++)
    {
        int temp=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>temp ) //inner while Loop
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
        cout<< "The result of Insertion sort :  ";
        for (int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";          //print output
           
        }
    cout<< endl;                        // for output decoration
    
    
    
    
    
    
    return 0;
}
