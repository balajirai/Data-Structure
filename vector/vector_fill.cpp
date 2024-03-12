#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vect(8);

    // fill(start, end, value)

    //fill to initialize values in the in the from begin()+2 to end()-1 with 4
    fill(vect.begin() + 2, vect.end() - 1, 4);

    for (int i = 0; i < vect.size(); i++){
        cout << vect[i] << " ";
    }
    cout<<endl;

    return 0;
}
