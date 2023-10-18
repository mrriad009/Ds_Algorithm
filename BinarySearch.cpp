#include<iostream>
using namespace std;

int BinarySearch(int arr[],int target , int size){
    int low=0;
    int high=size-1;
    while (low<=high)
    {
       int mid= (low+high)/2;
       if (arr[mid]==target){
           return mid;
       }
       else if(arr[mid]<target){
        low=mid+1;
       }
       else{
        high = mid - 1;
       }     
    }
    return -1; //element not found
}

int main(){
    int size ,target;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the sorted Array Elements: ";
    for (int i = 0; i < size; i++){
        cin>>arr[i];
    }

    cout<<"Enter the elements to search : ";
    cin>>target;

    int index = BinarySearch(arr,target,size);
    if (index != -1)
    {
        cout << "Element " << target << " found at index " << index << endl;
    }
    else
    {
        cout << "Element " << target << " not found in the list" << endl;
    }

    return 0;
}