#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
    private:
        vector<int> heap;
        int size;
        int totalSize;

        void heapifyUp(int index){
            while(index > 0){
                int parent = (index - 1) / 2;
                if(heap[index] > heap[parent]){
                    swap(heap[index], heap[parent]);
                    index = parent;
                } else {
                    break;
                }
            }
        }

        void heapifyDown(int i){
            int largest = i;
            int left = 2*i+1;
            int right = 2 * i + 2;

            if(left < size && heap[left] > heap[largest]){
                largest = left;
            }
            if(right < size && heap[right] > heap[largest]){
                largest = right;
            }
            if(largest != i){
                swap(heap[i], heap[largest]);
                heapifyDown(largest);
            }
        }

    public:
        MaxHeap(int capacity){
            heap.resize(capacity);
            size = 0;
            totalSize = capacity;
        }

        void insert(int data){
            if(size == totalSize){
                cout << "Heap is full!" << endl;
                return;
            }
            heap[size] = data;
            size++;
            heapifyUp(size - 1);
        }

        int extractMax(){
            if(size == 0){
                cout << "Heap is empty!" << endl;
                return -1;
            }
            int max = heap[0];
            heap[0] = heap[size - 1];
            size--;
            heapifyDown(0);
            return max;
        }

        void printHeap(){
            for(int i = 0; i < size; i++){
                cout << heap[i] << " ";
            }
            cout << endl;
        }   
};

int main(){
    MaxHeap maxHeap(10);
    maxHeap.insert(3);
    maxHeap.insert(1);
    maxHeap.insert(4);
    maxHeap.insert(1);
    maxHeap.insert(5);
    maxHeap.insert(9);

    maxHeap.printHeap();

    cout << "Max: " << maxHeap.extractMax() << endl; // 9
    cout << "Max: " << maxHeap.extractMax() << endl; // 4
    
    maxHeap.printHeap();

    return 0;
}