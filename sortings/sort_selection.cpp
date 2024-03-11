// Selection sort 
// sorting from left to right 
// Select the minimum element and put it to the beginning of the unsorted array.

#include <iostream>
using namespace std;

void SelectionSort(int a[], int n){
    for(int i=0; i<n-1; i++){
        int min = i;                    // index of the minimum element of unsorted array 
        for(int j=i+1; j<n; j++){       // we are finding the minimum element's index in the unsorted array
            if(a[j]<a[min])
                min = j;
        }
        if(min != i)
            swap(a[i], a[min]);
    }
}

int main(){
    int n = 5;
    int arr[] = {3,5,2,4,1};
    cout<<"Given array is : ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n"<<endl;

    SelectionSort(arr, n);
    cout<<"Updated array is : ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n"<<endl;
return 0;
}