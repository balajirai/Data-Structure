// Time complexity is O(n)

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++){
        cout << i << " element is : ";
        cin >> arr[i];
    }

    int maxSum = 0, sum = 0;
    for (int k = 0; k < n; k++){
        sum = max(arr[k], sum + arr[k]);
        maxSum = max(maxSum, sum);
    }

    cout<<"Maximum subarray sum is : "<< maxSum << endl;

    return 0;
}