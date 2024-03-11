// Heap -> A complete Binary Tree that comes with heap order property
// insertion & deletion -> O(log(n))
// CBT -> complete binary tree (all level fully filled (or all level except last level)) from left to right

#include <bits/stdc++.h>
using namespace std;

// creating a MAX-heap (root is max element)
class heap{
    public:
        int size;
        int arr[100];

        // constructor
        heap(){
            arr[0] = -1;
            size = 0;
        }

        // insert function O(log(n))
        // 1-based insertion (discarding 0th index)
        // leftChildIdx = parentIdx*2,  rightChildIdx = parentIdx*2 + 1
        void insert(int val){
            size = size + 1;
            int index = size;
            arr[index] = val;

            while(index > 1){
                int parent = index/2;

                if(arr[parent] < arr[index]){
                    swap(arr[parent], arr[index]);
                    index = parent;
                }
                else return;
            }
        }

        // delete function O(log(n))
        void Delete(){
            if(size == 0){
                cout<< "Nothing to delete" <<endl;
                return;
            }

            // 1. put the last element into first index
            arr[1] = arr[size];

            // 2. remove the last element
            size--;

            // 3. now take the new root node to its correct position
            int index = 1;

            while (index < size){
                int leftIdx = 2*index;
                int rightIdx = 2*index + 1;

                if(leftIdx < size && arr[index] < arr[leftIdx]){
                    swap(arr[index], arr[leftIdx]);
                    index = leftIdx;
                }
                else if(rightIdx < size && arr[index] < arr[rightIdx]){
                    swap(arr[index], arr[rightIdx]);
                    index = rightIdx;
                }
                else return;
            }
        }

        // print function
        void print(){
            for(int i=1; i<=size; i++){
                cout<< arr[i] << " ";
            }
            cout<<endl;
        }

};

int main(){

    // creating heap object
    heap h;

    // inseting values
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    // print heap
    h.print();

    // delete from heap
    h.Delete();

    // print heap
    h.print();
    
    return 0;
}