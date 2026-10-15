#include <iostream>
using namespace std;

int main() {
   double bil1, bil2;
   char op;
   
   cout << "=== KALKULATOR ARITMATIKA SEDERHANA ===" << endl;
   cout << "Masukkan bilangan pertama: ";
   if (!(cin >> bil1)) {
       cout << "Error: Input bilangan tidak valid!" << endl;
       return 1;
   }
   
   cout << "Masukkan bilangan kedua  : ";
   if (!(cin >> bil2)) {
       cout << "Error: Input bilangan tidak valid!" << endl;
       return 1;
   }
   
   cout << "Masukkan operator (+, -, *, /): ";
   cin >> op;
   
   cout << "---------------------------------------" << endl;
   cout << "Hasil: ";
   
   // Implementasi switch-case-default
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
           // Penanganan pembagian dengan nol
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
   return 0;
}
