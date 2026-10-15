#include <iostream>
using namespace std;

int main() {
   int bulan, tahun;
   
   cout << "=== PENENTUAN JUMLAH HARI DALAM BULAN ===" << endl;
   cout << "Masukkan bulan (1-12): ";
   if (!(cin >> bulan)) {
       cout << "Error: Input bulan harus berupa angka!" << endl;
       return 1;
   }
   
   cout << "Masukkan tahun: ";
   if (!(cin >> tahun)) {
       cout << "Error: Input tahun harus berupa angka!" << endl;
       return 1;
   }
   
   cout << "-----------------------------------------" << endl;
   
   // Implementasi switch-case dengan memanfaatkan fallthrough secara sengaja
   switch (bulan) {
       // Bulan-bulan dengan 31 hari
       case 1:  // Januari
       case 3:  // Maret
       case 5:  // Mei
       case 7:  // Juli
       case 8:  // Agustus
       case 10: // Oktober
       case 12: // Desember
           cout << "Jumlah hari pada Bulan " << bulan << " Tahun " << tahun << " adalah 31 hari." << endl;
           break;
           
       // Bulan-bulan dengan 30 hari
       case 4:  // April
       case 6:  // Juni
       case 9:  // September
       case 11: // November
           cout << "Jumlah hari pada Bulan " << bulan << " Tahun " << tahun << " adalah 30 hari." << endl;
           break;
           
       // Bulan Februari dengan pengecekan tahun kabisat (kombinasi switch dan if-else)
       case 2:
           if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
               cout << "Jumlah hari pada Bulan 2 (Februari) Tahun " << tahun << " adalah 29 hari (Tahun Kabisat)." << endl;
           } else {
               cout << "Jumlah hari pada Bulan 2 (Februari) Tahun " << tahun << " adalah 28 hari (Bukan Kabisat)." << endl;
           }
           break;
           
       // Default case untuk menangani input bulan yang tidak valid
       default:
           cout << "Error: Bulan tidak valid! Masukkan angka antara 1 hingga 12." << endl;
           break;
   }
   cout << "=========================================" << endl;
   return 0;
}
