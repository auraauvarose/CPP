#include <iostream>
using namespace std;

int main() {
    float tugas, kuis, mid, uas;
    float nilai_akhir;
    char huruf;

    cout << "nilai tugas : "; cin >> tugas;
    cout << "nilai kuis : "; cin >> kuis;
    cout << "nilai mid :"; cin >> mid;
    cout << "nilai uas :"; cin >> uas;

    nilai_akhir = (0.10 * tugas) + (0.20 * kuis) + (0.30 * mid) + (0.40 * uas);

    if (nilai_akhir > 90) {
        huruf = 'A';
    } else if (nilai_akhir > 80) {
        huruf = 'B';
    } else if (nilai_akhir > 70) {
        huruf = 'C';
    } else if (nilai_akhir > 60) {
        huruf = 'D';
    } else {
        huruf = 'E';
    }

    cout << "Nilai Akhir: " << nilai_akhir << endl;  
    cout << "Nilai Huruf: " << huruf << endl;  

    return 0; 
}

