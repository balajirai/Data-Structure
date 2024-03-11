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

    for (int s = 0; s < n; s++){                // starting point
        for (int e = s; e < n; e++){            // ending point
            for (int k = s; k <= e; k++){       // iterating from s to e
                cout << arr[k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}