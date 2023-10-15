#include <iostream>
using namespace std;

void mergeSort ( int arr[], int low , int high)

{
    if (low<high)
    {
        int mid = (high+low)/2;
        
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        
        int i= low;
        int j= mid+1;
        int k= 0;
        int temp[high-low+1];
        
                while (i<=mid && j<=high)
                {
                    if (arr[i]<=arr[j])
                    {
                        temp[k]=arr[i];
                        i++;
                    }
                        else
                        {
                            temp[k]=arr[j];
                            j++;
                        }
                    k++;
                }
        
        while (i<=mid)
        {
            temp[k]=arr[i];
            i++;
            k++;
        }
            while (j<=high)
            {
                temp[k]=arr[j];
                j++;
                k++;
            }
                for (int i=low; i<=high; i++)
                {
                    arr[i]=temp[i-low];
                }
        
    }
    
}

int main(){
    int n;
    cout<<"Enter the Size of the Array  :";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the Elements of the array : ";
    for (int i=0; i<n; i++) 
    {
        cin>>arr[i];
    }
    
    mergeSort( arr, 0, n-1);
    
    cout<<"Sorted array of the givem Elements : ";
    for (int i=0; i<n; i++) 
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;   
    return 0; //gg
}