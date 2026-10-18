#include <iostream>
#include <string>
using namespace std;

int hitungKarakter(string kata, char target) {
    int jumlah = 0;
    
    for (size_t i = 0; i < kata.length(); i++) {
        if (kata[i] == target) {
            jumlah++;
        }
    }
    return jumlah;
}

int main() {
    string kata;
    char target;

    cin >> kata;
    cin >> target;

    cout << hitungKarakter(kata, target) << endl;

    return 0;
}