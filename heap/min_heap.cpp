#include <iostream>
using namespace std;

#define SIZE 100

int heap[SIZE];
int n = 0;

void insert(int value) {
    n++;
    int i = n;

    heap[i] = value;

    // Heapify Up
    while (i > 1 && heap[i] < heap[i / 2]) {
        int temp = heap[i];
        heap[i] = heap[i / 2];
        heap[i / 2] = temp;

        i = i / 2;
    }
}

void deleteHeap() {
    if (n == 0) {
        cout << "Heap Empty" << endl;
        return;
    }

    heap[1] = heap[n];
    n--;

    int i = 1;

    // Heapify Down
    while (true) {
        int smallest = i;
        int left = 2 * i;
        int right = 2 * i + 1;

        if (left <= n && heap[left] < heap[smallest])
            smallest = left;

        if (right <= n && heap[right] < heap[smallest])
            smallest = right;

        if (smallest == i)
            break;

        int temp = heap[i];
        heap[i] = heap[smallest];
        heap[smallest] = temp;

        i = smallest;
    }
}

void display() {
    for (int i = 1; i <= n; i++)
        cout << heap[i] << " ";

    cout << endl;
}

int main() {
    insert(50);
    insert(30);
    insert(70);
    insert(10);
    insert(90);

    cout << "Min Heap: ";
    display();

    return 0;
}