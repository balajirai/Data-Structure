// we are finding number of occurance of a number using binary search
// first and last occurance using binary search

#include <iostream>
using namespace std;

int BinarySearch(int arr[],int n,int x, int oc){
    int left=0,right=n-1;
    int result=-1;
    while (left<=right){
        int mid=(left+right)/2;
        if(x==arr[mid]){            // when element is found then we check its occurance
            result=mid;
            if(oc==1) right=mid-1;     // first occurance
            else if(oc==2) left=mid+1;  // last occurance
        }
        else if(x<arr[mid]) right=mid-1;
        else if(x>arr[mid]) left=mid+1;
    }
    return result;      // index of the first or last occurance  

}

int main(){
    int arr[] = {1,1,1,3,3,3,3,3,3,3,5,6,6,8,9,9};
    int x = 3;
    int first_occurance = BinarySearch(arr,16,x,1);
    int last_occurance = BinarySearch(arr,16,x,2);

    // check element is available or not
    if(first_occurance==-1) cout<<"Element is not found"<<endl;
    else cout<<"The number "<<x<<" appears "<<last_occurance-first_occurance+1<<" times"<<endl;

return 0;
}