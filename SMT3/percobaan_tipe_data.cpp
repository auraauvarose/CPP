#include <iostream>
using namespace std;

struct mahasiswa {
    char nim [15];
    char nama [40];
    char alamat [60];
    float ipk;
};
int main(){
    mahasiswa siswa;

    cout << "Nim   :"; cin.getline(siswa.nim,15);
    cout << "Nama   :"; cin.getline(siswa.nama,40);
    cout << "Alamat  :"; cin.getline(siswa.alamat,60);
    cout << "Nilai IPK :"; cin >> siswa.ipk;

    cout << endl;

    cout << "Nim Anda  :" << siswa.nim << endl;
    cout << "Nama Anda :" << siswa.nama << endl;
    cout << "Alamat Anda :" << siswa.alamat << endl;
    cout << "Nilai IPK Anda :" << siswa.ipk << endl;
}


