#include <iostream>
using namespace std;

int kali(int a, int b){
    if(b == 1){
        return a;
    }else{
        return a + kali(a, b - 1);
    }
}

int main(){
    int angka1, angka2, hasil;

    cout << "\t\tPerkalian Dua Buah Bilangan Secara Rekursif" << endl;
    cout << "\tMasukkan Angka     : "; cin >> angka1;
    cout << "\tMau Dikali berapa  : "; cin >> angka2;
    hasil = kali(angka1, angka2);
    cout << "\n\tHasil Perkalian  : " << hasil;
}
