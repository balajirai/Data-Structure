// Mid Heap -> having mid (median) element as priority

#include <bits/stdc++.h>
using namespace std;

class MidHeap {
private:
    priority_queue<int, vector<int>, greater<int>> minHeap;
    priority_queue<int> maxHeap;

public:
    void push(int value) {
        // Insert into max heap
        maxHeap.push(value);

        // Move top of max heap to min heap
        minHeap.push(maxHeap.top());
        maxHeap.pop();

        // Balance heaps
        if (minHeap.size() > maxHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }

    void pop(){
        if (!maxHeap.empty()){
            // Remove top of max heap
            maxHeap.pop();
            // Balance heaps
            if (minHeap.size() > maxHeap.size() + 1) {
                maxHeap.push(minHeap.top());
                minHeap.pop();
            }
        }
    }

    double median() {
        if (minHeap.size() == maxHeap.size()) {
            return (minHeap.top() + maxHeap.top()) / 2.0;
        } 
        else{
            return maxHeap.top();
        }
    }
};

int main() {
    MidHeap heap;
    heap.push(3);
    heap.push(6);
    heap.push(2);
    heap.push(8);
    heap.push(4);

    cout << "Median: " << heap.median() << endl;

    heap.pop();

    cout << "Median: " << heap.median() << endl;

    return 0;
}
