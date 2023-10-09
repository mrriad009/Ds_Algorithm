#include <iostream>
using namespace std;

void insertionSort(int arr[],int n)
{
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
}
int main() {
    int n, m;
    cout << "Enter the Size of arr1: " << endl;
    cin >> n;
    cout << "Enter the Size of arr2: " << endl;
    cin >> m;

    int arr1[n];
    int arr2[m];

    cout << "Enter the Elements for arr1: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    cout << "Enter the Elements for arr2: " << endl;
    for (int j = 0; j < m; j++) {
        cin >> arr2[j];
    }

    int arr3[n + m];  // The maximum size of the union is n + m
    int arr3index = 0;

    // Copy elements from arr1 to arr3
    for (int i = 0; i < n; i++) {
        arr3[arr3index] = arr1[i];
        arr3index++;
    }

    // Add elements from arr2 to arr3 if they are not already present
    for (int j = 0; j < m; j++) {
        int k;
        for (k = 0; k < arr3index; k++) {
            if (arr2[j] == arr3[k]) {
                break;
            }
        }
        if (k == arr3index) {
            arr3[arr3index] = arr2[j];
            arr3index++;
        }
    }
    insertionSort(arr3,arr3index);
    cout << "The union of arr1 and arr2: ";
    for (int i = 0; i < arr3index; i++) {
        cout << arr3[i] << " ";
    }

    return 0;
}