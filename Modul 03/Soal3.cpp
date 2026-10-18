#include <iostream>
using namespace std;

void tampilArray2D(int arr[3][3], string nama) {
    cout << "--- " << nama << " ---" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void tukarArray2D(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

void tukarPointer(int* p1, int* p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int *ptr1, *ptr2;

    cout << "=== KONDISI AWAL ===" << endl;
    tampilArray2D(A, "Array A");
    tampilArray2D(B, "Array B");

    cout << "-> Menukarkan elemen pada baris [1][1] antara Array A dan Array B...\n" << endl;
    tukarArray2D(A, B, 1, 1);

    cout << "=== SETELAH TUKAR ELEMEN ARRAY 2D [1][1] ===" << endl;
    tampilArray2D(A, "Array A");
    tampilArray2D(B, "Array B");

    ptr1 = &A[0][0]; 
    ptr2 = &B[2][2]; 

    cout << "Nilai ptr1 awal (menunjuk A[0][0]): " << *ptr1 << endl;
    cout << "Nilai ptr2 awal (menunjuk B[2][2]): " << *ptr2 << endl;

    tukarPointer(ptr1, ptr2);

    cout << "\n-> Menukarkan nilai melalui pointer...\n" << endl;
    cout << "Nilai ptr1 sekarang: " << *ptr1 << endl;
    cout << "Nilai ptr2 sekarang: " << *ptr2 << endl;

    cout << "\n=== KONDISI AKHIR ARRAY ===" << endl;
    tampilArray2D(A, "Array A");
    tampilArray2D(B, "Array B");

    return 0;
}