#include <iostream>
#include <string>

using namespace std;

struct Node {
    string nama;
    Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void insertLast(string namaBaru){
    Node* newNode = new Node();
    newNode->nama = namaBaru;
    newNode->next = nullptr;
    if (head == nullptr){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}

void tampilkanAntrean(){
    if (head == nullptr){
        cout << "Antrean kosong" << endl;
        return;
    }
    cout << "Antrean: ";
    Node* curr = head;
    while (curr != nullptr){
        cout << curr->nama;
        if (curr->next != nullptr){
            cout << "->";
        }
        curr = curr->next;
    }
    cout << endl;
}

void deleteFirst(){
    if (head == nullptr){
        cout << "Antrean kosong" << endl;
        return;
    }
    Node* temp = head;
    cout << "Melayani: " << temp->nama << endl;
    head = head->next;
    if (head == nullptr){
        tail = nullptr;
    }
    delete temp;
}

int main(){
    int pilihan;
    string nama;

    do{
        cin >> pilihan;
        if(pilihan == 1){
            cin >> nama;
            insertLast(nama);
            tampilkanAntrean();
        }else if (pilihan == 2){
            deleteFirst();
            tampilkanAntrean();
        }
    }while(pilihan != 3);
    return 0;
}