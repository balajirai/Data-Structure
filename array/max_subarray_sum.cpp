// Time complexity is O(n^3)

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

    int maxSum = 0;
    for (int s = 0; s < n; s++){                // starting point
        for (int e = s; e < n; e++){            // ending point
            int sum = 0;
            for (int k = s; k <= e; k++){       // iterating from s to e
                sum += arr[k];
            }
            maxSum = max(sum, maxSum);
            
        }
        
    }

    cout<<"Maximum subarray sum is : "<< maxSum << endl;

    return 0;
}