#include <iostream>
using namespace std;

void BinarySearch(int a[], int n, int key){
    int left = 0, right = n;
    while (left<=right){
        int mid = (left+right)/2;
        if(a[mid]==key){             // key found
            cout<<"Element found at index : "<<mid<<endl;
            break;
        }
        else if (a[mid] < key)      // key is greater than the mid element so we will search in the right sub array
            left = mid + 1;
        else                        // key is less than the mid element so we will search in the left sub array
            right = mid - 1;
    }
    
}

int main(){

    // sorted array ( ascending array )
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int key, n = 10;

    cout<<"\nEnter the element to search : ";
    cin>>key;

    BinarySearch(arr, n, key);

return 0;
}