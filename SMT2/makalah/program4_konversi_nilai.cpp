#include <iostream>
using namespace std;

int main() {
   char nilaiHuruf;
   
   cout << "=== KONVERSI NILAI MAHASISWA S1 INFORMATIKA ===" << endl;
   cout << "Masukkan Nilai Huruf (A, B, C, D, E, F): ";
   cin >> nilaiHuruf;
   cout << "-----------------------------------------------" << endl;
   
   // Implementasi switch-case untuk tipe data char (karakter)
   // Mendukung huruf kapital dan kecil dengan fallthrough terencana
   switch (nilaiHuruf) {
       case 'A':
       case 'a':
           cout << "Indeks Bobot : 4.00" << endl;
           cout << "Predikat     : Istimewa / Sangat Memuaskan" << endl;
           cout << "Status       : LULUS" << endl;
           break;
       case 'B':
       case 'b':
           cout << "Indeks Bobot : 3.00" << endl;
           cout << "Predikat     : Baik" << endl;
           cout << "Status       : LULUS" << endl;
           break;
       case 'C':
       case 'c':
           cout << "Indeks Bobot : 2.00" << endl;
           cout << "Predikat     : Cukup" << endl;
           cout << "Status       : LULUS" << endl;
           break;
       case 'D':
       case 'd':
           cout << "Indeks Bobot : 1.00" << endl;
           cout << "Predikat     : Kurang" << endl;
           cout << "Status       : LULUS (Perbaikan Disarankan)" << endl;
           break;
       case 'E':
       case 'e':
           cout << "Indeks Bobot : 0.00" << endl;
           cout << "Predikat     : Gagal" << endl;
           cout << "Status       : TIDAK LULUS (Wajib Mengulang)" << endl;
           break;
       case 'F':
       case 'f':
           cout << "Indeks Bobot : 0.00" << endl;
           cout << "Predikat     : Gagal (Tanpa Keterangan)" << endl;
           cout << "Status       : TIDAK LULUS (Wajib Mengulang)" << endl;
           break;
       default:
           cout << "Error: Nilai huruf '" << nilaiHuruf << "' tidak valid!" << endl;
           cout << "Masukkan huruf A, B, C, D, E, atau F." << endl;
           break;
   }
   cout << "===============================================" << endl;
   return 0;
}
