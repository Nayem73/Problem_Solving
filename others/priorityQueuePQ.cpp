#include <bits/stdc++.h>
using namespace std;

void maxHeapify(vector<int>& heap, int i, int n) {
    int largestElement = i;
    if (i*2 < n && heap[i*2] > heap[largestElement]) {
        largestElement = i*2;
    }
    if (i*2+1 < n && heap[i*2+1] > heap[largestElement]) {
        largestElement = i*2+1;
    }

    if (largestElement != i) {
        swap(heap[i], heap[largestElement]);
        maxHeapify(heap, largestElement, n);
    }
}

void addNode(vector<int>& heap, int n) {
    int i = n-1;
    while (i > 1 && heap[i] > heap[i/2]) {
        swap(heap[i], heap[i/2]);
        i /= 2;
    }
}

int main() {
    vector<int> heap{-1000};
    while (true) {
        int n = heap.size();
        cout << "1. Insert\n2. Delete\n3. Print\n4. Size\n5. Exit\n";
        int choice; cin >> choice;
        if (choice == 1) {
            cout << "Enter the value to insert: ";
            int val; cin >> val;
            heap.push_back(val);
            n = heap.size();
            addNode(heap, n);
        } else if (choice == 2) {
            if (n == 1) {
                cout << "heap is empty!\n";
            } else {
                swap(heap[1], heap[n-1]);
                heap.pop_back();
                n = heap.size();
                maxHeapify(heap, 1, n-1);
            }
        } else if (choice == 3) {
            if (n == 1) {
                cout << "heap is empty!\n";
            } else {
                // cout << heap[1] << endl;
                for (int i = 1; i < n; i++) {
                    cout << heap[i] << " ";
                }
                cout << endl;
            }
        } else if (choice == 4) {
            cout << n-1 << endl;
        }
    }
}