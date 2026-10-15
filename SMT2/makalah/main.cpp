#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Deklarasi fungsi-fungsi program
void menuKalkulator();
void menuJumlahHari();
void menuKasirCafe();
void menuKonversiNilai();

int main() {
    int pilihan;
    bool running = true;

    while (running) {
        cout << "\n==============================================" << endl;
        cout << "   TUGAS MAKALAH ALGORITMA & PEMROGRAMAN" << endl;
        cout << "         KELOMPOK 1 - S1 INFORMATIKA" << endl;
        cout << "     UNIVERSITAS DHARMA AUB SURAKARTA" << endl;
        cout << "==============================================" << endl;
        cout << "PILIHAN PROGRAM IMPLEMENTASI SWITCH-CASE-DEFAULT:" << endl;
        cout << "1. Program 1: Kalkulator Aritmatika Sederhana" << endl;
        cout << "2. Program 2: Menghitung Jumlah Hari & Tahun Kabisat" << endl;
        cout << "3. Program 3: Sistem Kasir Transaksi Cafe" << endl;
        cout << "4. Program 4: Konversi Nilai Huruf ke Bobot IP" << endl;
        cout << "5. Keluar dari Program" << endl;
        cout << "----------------------------------------------" << endl;
        cout << "Pilih menu (1-5): ";
        
        if (!(cin >> pilihan)) {
            cout << "Input tidak valid! Masukkan angka 1 sampai 5." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        cout << "\n----------------------------------------------" << endl;

        switch (pilihan) {
            case 1:
                menuKalkulator();
                break;
            case 2:
                menuJumlahHari();
                break;
            case 3:
                menuKasirCafe();
                break;
            case 4:
                menuKonversiNilai();
                break;
            case 5:
                cout << "Terima kasih telah menggunakan program ini!" << endl;
                running = false;
                break;
            default:
                cout << "Pilihan tidak valid! Silakan pilih angka 1-5." << endl;
                break;
        }
    }

    return 0;
}

// === IMPLEMENTASI PROGRAM 1: KALKULATOR ARITMATIKA SEDERHANA ===
void menuKalkulator() {
    double bil1, bil2;
    char op;
    
    cout << "=== [PROGRAM 1] KALKULATOR ARITMATIKA SEDERHANA ===" << endl;
    cout << "Masukkan bilangan pertama: ";
    if (!(cin >> bil1)) {
        cout << "Error: Input bilangan tidak valid!" << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        return;
    }
    
    cout << "Masukkan bilangan kedua  : ";
    if (!(cin >> bil2)) {
        cout << "Error: Input bilangan tidak valid!" << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        return;
    }
    
    cout << "Masukkan operator (+, -, *, /): ";
    cin >> op;
    
    cout << "---------------------------------------" << endl;
    cout << "Hasil: ";
    
    switch (op) {
        case '+':
            cout << bil1 << " + " << bil2 << " = " << (bil1 + bil2) << endl;
            break;
        case '-':
            cout << bil1 << " - " << bil2 << " = " << (bil1 - bil2) << endl;
            break;
        case '*':
            cout << bil1 << " * " << bil2 << " = " << (bil1 * bil2) << endl;
            break;
        case '/':
            if (bil2 == 0) {
                cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << endl;
            } else {
                cout << bil1 << " / " << bil2 << " = " << (bil1 / bil2) << endl;
            }
            break;
        default:
            cout << "Error: Operator '" << op << "' tidak valid!" << endl;
            break;
    }
    cout << "=======================================" << endl;
}

// === IMPLEMENTASI PROGRAM 2: JUMLAH HARI & DETEKSI TAHUN KABISAT ===
void menuJumlahHari() {
    int bulan, tahun;
    
    cout << "=== [PROGRAM 2] PENENTUAN JUMLAH HARI DALAM BULAN ===" << endl;
    cout << "Masukkan bulan (1-12): ";
    if (!(cin >> bulan)) {
        cout << "Error: Input bulan harus berupa angka!" << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        return;
    }
    
    cout << "Masukkan tahun: ";
    if (!(cin >> tahun)) {
        cout << "Error: Input tahun harus berupa angka!" << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        return;
    }
    
    cout << "-----------------------------------------" << endl;
    
    switch (bulan) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "Jumlah hari pada Bulan " << bulan << " Tahun " << tahun << " adalah 31 hari." << endl;
            break;
            
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "Jumlah hari pada Bulan " << bulan << " Tahun " << tahun << " adalah 30 hari." << endl;
            break;
            
        case 2:
            if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
                cout << "Jumlah hari pada Bulan 2 (Februari) Tahun " << tahun << " adalah 29 hari (Tahun Kabisat)." << endl;
            } else {
                cout << "Jumlah hari pada Bulan 2 (Februari) Tahun " << tahun << " adalah 28 hari (Bukan Kabisat)." << endl;
            }
            break;
            
        default:
            cout << "Error: Bulan tidak valid! Masukkan angka antara 1 hingga 12." << endl;
            break;
    }
    cout << "=========================================" << endl;
}

// === IMPLEMENTASI PROGRAM 3: SISTEM KASIR TRANSAKSI CAFE ===
void menuKasirCafe() {
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
        cin.clear();
        cin.ignore(10000, '\n');
        return;
    }
    
    cout << "Masukkan Jumlah Porsi : ";
    if (!(cin >> jumlah) || jumlah <= 0) {
        cout << "Error: Jumlah porsi tidak valid!" << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        return;
    }
    
    cout << "----------------------------------------------" << endl;
    
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
            cout << "Pilihan paket tidak tersedia! Silakan pilih paket 1-4." << endl;
            cout << "==============================================" << endl;
            return;
    }
    
    long total = harga * jumlah;
    
    cout << "Rincian Pesanan Anda:" << endl;
    cout << "Menu   : " << namaMenu << endl;
    cout << "Harga  : Rp " << harga << " per porsi" << endl;
    cout << "Jumlah : " << jumlah << " porsi" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Total Bayar : Rp " << total << endl;
    cout << "==============================================" << endl;
}

// === IMPLEMENTASI PROGRAM 4: KONVERSI NILAI HURUF KE BOBOT IP ===
void menuKonversiNilai() {
    char nilaiHuruf;
    
    cout << "=== [PROGRAM 4] KONVERSI NILAI MAHASISWA S1 INFORMATIKA ===" << endl;
    cout << "Masukkan Nilai Huruf (A, B, C, D, E, F): ";
    cin >> nilaiHuruf;
    cout << "-----------------------------------------------" << endl;
    
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
}
