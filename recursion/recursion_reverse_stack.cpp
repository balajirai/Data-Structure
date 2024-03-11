// reverse a stack without using extra stack (recursion)

#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &st, int element) {
    if (st.empty()) {
        st.push(element);
        return;
    }

    int top_element = st.top();
    st.pop();
    insertAtBottom(st, element);
    st.push(top_element);
}

void reverseStack(stack<int> &st) {
    // base case
    if (st.empty()) return;

    int element = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, element);
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    // this would be : 4,3,2,1

    // now after reversing 1,2,3,4
    reverseStack(st);
    while (!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    

return 0;
}