#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int nilai[n];
    int total = 0;

    for (int i = 0; i < n; i++) {
        cin >> nilai[i];
        total = total + nilai[i];
    }
    int rata_rata = total / n;

    int diatas_rata_rata = 0;
    for (int i = 0; i < n; i++) {
        if (nilai[i] > rata_rata) {
            diatas_rata_rata++;
        }
    }
    cout << "Rata-rata: " << rata_rata << endl;
    cout << "Di atas rata-rata: " << diatas_rata_rata << endl;

    return 0;
}