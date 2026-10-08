#include <iostream>
using namespace std;



int main() {

    int jam, menit, detik;
    int total_detik;
    int biaya;

    cout << "jam    :"; cin >> jam;
    cout << "menit  :"; cin >> menit;
    cout << "detik  :"; cin >> detik;

    total_detik = jam * 3600 + menit * 60 + menit;
    biaya = (total_detik / 30) * 130;

    cout << "total detik  :    " << total_detik << endl;
    cout << "biaya        : rp." <<  biaya << endl;
}

