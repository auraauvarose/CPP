#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int pilihan, jumlah;
   long harga = 0;
   string namaMenu = "";
   
   cout << "======= MENU PAKET CAFE S1 INFORMATIKA =======" << endl;
   cout << "1. Paket A (Kopi Susu + Croissant)       : Rp 25.000" << endl;
   cout << "2. Paket B (Green Tea Latte + Muffin)    : Rp 28.000" << endl;
   cout << "3. Paket C (Espresso + Spaghetti Carbona): Rp 40.000" << endl;
   cout << "4. Paket D (Thai Tea + Kentang Goreng)   : Rp 20.000" << endl;
   cout << "----------------------------------------------" << endl;
   cout << "Pilih Paket Menu (1-4): ";
   if (!(cin >> pilihan)) {
       cout << "Error: Input pilihan tidak valid!" << endl;
       return 1;
   }
   
   cout << "Masukkan Jumlah Porsi : ";
   if (!(cin >> jumlah) || jumlah <= 0) {
       cout << "Error: Jumlah porsi tidak valid!" << endl;
       return 1;
   }
   
   cout << "----------------------------------------------" << endl;
   
   // Implementasi switch-case-default untuk pemilihan menu
   switch (pilihan) {
       case 1:
           namaMenu = "Paket A (Kopi Susu + Croissant)";
           harga = 25000;
           break;
       case 2:
           namaMenu = "Paket B (Green Tea Latte + Muffin)";
           harga = 28000;
           break;
       case 3:
           namaMenu = "Paket C (Espresso + Spaghetti Carbona)";
           harga = 40000;
           break;
       case 4:
           namaMenu = "Paket D (Thai Tea + Kentang Goreng)";
           harga = 20000;
           break;
       default:
           // Jika pilihan di luar 1-4, program menampilkan pesan kesalahan
           cout << "Pilihan paket tidak tersedia! Silakan pilih paket 1-4." << endl;
           cout << "==============================================" << endl;
           return 0;
   }
   
   long total = harga * jumlah;
   
   cout << "Rincian Pesanan Anda:" << endl;
   cout << "Menu   : " << namaMenu << endl;
   cout << "Harga  : Rp " << harga << " per porsi" << endl;
   cout << "Jumlah : " << jumlah << " porsi" << endl;
   cout << "----------------------------------------------" << endl;
   cout << "Total Bayar : Rp " << total << endl;
   cout << "==============================================" << endl;
   
   return 0;
}
