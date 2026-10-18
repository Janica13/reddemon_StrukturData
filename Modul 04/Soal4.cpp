#include <iostream>
#include <string>

using namespace std;

struct Buku {
    string judul;
    int tahunTerbit;
};

struct Node {
    Buku data;
    Node* next;
};

Node* createNode(string judul, int tahunTerbit) {
    Node* newNode = new Node();
    newNode->data.judul = judul;
    newNode->data.tahunTerbit = tahunTerbit;
    newNode->next = nullptr;
    return newNode;
}

void insertLast(Node*& head, string judul, int tahunTerbit) {
    Node* newNode = createNode(judul, tahunTerbit);
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

void deleteLast(Node*& head) {
    if (head == nullptr) {
        return; 
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    
    delete temp->next;
    temp->next = nullptr;
}

void displayList(Node* head) {
    cout << "Daftar Buku:" << endl;
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data.judul << " (" << temp->data.tahunTerbit << ")" << endl;
        temp = temp->next;
    }
}

int main() {
    Node* head = nullptr;
    string line;

    while (getline(cin, line)) {
        if (line.empty()) continue;

        size_t lastSpace = line.find_last_of(" ");
        if (lastSpace != string::npos) {
            string judul = line.substr(0, lastSpace);
            int tahunTerbit = stoi(line.substr(lastSpace + 1));
            insertLast(head, judul, tahunTerbit);
        }
    }

    deleteLast(head);

    displayList(head);

    return 0;
}