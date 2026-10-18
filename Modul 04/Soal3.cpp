#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

void insertLast(Node*& head, int value) {
    Node* newNode = createNode(value);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

int hitungJumlah(Node* head) {
    int total = 0;
    Node* temp = head;
    while (temp != nullptr) {
        total += temp->data;
        temp = temp->next;
    }
    return total;
}

int main() {
    Node* head = nullptr;
    int n;

    if (!(cin >> n)) return 0;

    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        insertLast(head, val);
    }

    int hasilJumlah = hitungJumlah(head);
    cout << hasilJumlah << endl;

    return 0;
}