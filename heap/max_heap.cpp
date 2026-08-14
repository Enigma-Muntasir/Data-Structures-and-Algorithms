#include <iostream>
using namespace std;

#define SIZE 100

int heap[SIZE];
int n = 0;

// Insert into Max Heap
void insert(int value)
{
    n++;
    int i = n;

    heap[i] = value;

    // Heapify Up
    while (i > 1 && heap[i] > heap[i / 2])
    {
        int temp = heap[i];
        heap[i] = heap[i / 2];
        heap[i / 2] = temp;

        i = i / 2;
    }
}

// Delete the maximum element (root)
void deleteHeap()
{
    if (n == 0)
    {
        cout << "Heap Empty" << endl;
        return;
    }

    heap[1] = heap[n];
    n--;

    int i = 1;

    // Heapify Down
    while (true)
    {
        int largest = i;
        int left = 2 * i;
        int right = 2 * i + 1;

        if (left <= n && heap[left] > heap[largest])
            largest = left;

        if (right <= n && heap[right] > heap[largest])
            largest = right;

        if (largest == i)
            break;

        int temp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = temp;

        i = largest;
    }
}

// Display Heap
void display()
{
    for (int i = 1; i <= n; i++)
        cout << heap[i] << " ";

    cout << endl;
}

int main()
{
    insert(50);
    insert(30);
    insert(70);
    insert(10);
    insert(90);

    cout << "Max Heap: ";
    display();

    return 0;
}