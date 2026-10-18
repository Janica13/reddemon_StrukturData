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

void insertAfter(Node* head, int target, int newValue) {
    Node* temp = head;

    while (temp != nullptr && temp->data != target) {
        temp = temp->next;
    }

    if (temp != nullptr) {
        Node* newNode = createNode(newValue);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next != nullptr) {
            cout << " -> ";
        }
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int n, target, newValue;

    if (!(cin >> n)) return 0;

    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        insertLast(head, val);
    }

    cin >> target;
    cin >> newValue;

    insertAfter(head, target, newValue);

    displayList(head);

    return 0;
}