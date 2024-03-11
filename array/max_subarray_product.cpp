// Time complexity is O(n)
// incomplete

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

    int maxProduct = INT_MIN, product = 1;
    for (int k = 0; k < n; k++){
        product = max(arr[k], product * arr[k]);
        maxProduct = max(maxProduct, product);
    }

    cout<<"Maximum subarray product is : "<< maxProduct << endl;

    return 0;
}