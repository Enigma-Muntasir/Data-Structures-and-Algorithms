#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

struct llist {
    Node *head;
    Node *tail;
    int size;
};

Node* create(int data) {
    Node *node = new Node;

    node->data = data;
    node->next = nullptr;

    return node;
}

llist* createll() {
    llist *list = new llist;

    list->head = nullptr;
    list->tail = nullptr;
    list->size = 0;

    return list;
}

void insert(int val, int pos, llist *list) {
    if (pos < 0 || pos > list->size) {
        cout << "Invalid Position" << endl;
        return;
    }

    Node *node = create(val);

    if (pos == 0) {
        node->next = list->head;
        list->head = node;

        if (list->size == 0)
            list->tail = node;
    }
    else if (pos == list->size) {
        list->tail->next = node;
        list->tail = node;
    }
    else {
        Node *curr = list->head;

        for (int i = 0; i < pos - 1; i++)
            curr = curr->next;

        node->next = curr->next;
        curr->next = node;
    }

    list->size++;
}

void display(llist *list) {
    Node *curr = list->head;

    cout << "Linked List: ";

    while (curr != nullptr) {
        cout << curr->data << " -> ";
        curr = curr->next;
    }

    cout << "NULL" << endl;
}

int main() {
    llist *list = createll();

    insert(10, 0, list);
    insert(20, 1, list);
    insert(30, 2, list);
    insert(15, 1, list);

    display(list);

    return 0;
}