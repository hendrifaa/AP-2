#include <iostream>
using namespace std;

//fungsi tanpa nilai balikan (void)
void tampilkanPesan() {
    cout << "======== Selamat datang di AP 2! ========" << endl;
}

// fungsi dengan nilai balikan (int, double. float dll)
int tambah(int a, int b) {
    return a + b; //mengembalikan hasil penjumlahan a dan b
}

//fungsi overload, fungsi dengan nama yang sama tetapi parameter berbeda
int kali(int a, int b) {
    return a * b; //mengembalikan hasil perkalian a dan b
}

double kali(double a, double b) {
    return a * b; //mengembalikan hasil perkalian a dan b
}

// fungsi rekursif, fungsi yang memanggil dirinya sendiri
int faktorial (int n){
    if (n == 0 || n == 1) { //base case
        return 1;
    } else {
        return n * faktorial(n - 1); //memanggil dirinya sendiri dengan nilai n-1 || recursive case

    }
}

int main() {
    system("cls"); 

    tampilkanPesan(); //memanggil fungsi tampilkanPesan

    // memanggil fungsi dengan nilai balikan 
    int x = 5, y = 3;
    int hasilTambah = tambah(x, y); //memanggil fungsi tambah dengan argumen x dan y
    cout << "Hasil penjumlahan : " << hasilTambah << endl;

    // memanggil fungsi overload
    int hasilKaliInt = kali(x, y); //memanggil fungsi kali dengan argumen x dan y (int)

    double n = 3, m =5;
    double hasilKaliDouble = kali(n, m); //memanggil fungsi kali dengan argumen n dan m (double)
    cout << "Hasil perkalian (int) : " << hasilKaliInt << endl;
    cout << "Hasil perkalian (double) : " << hasilKaliDouble << endl;

    // memanggil fungsi rekursif
    int angka = 5;
    cout << "Faktorial dari " << angka << " adalah : " << faktorial(angka) << endl; //memanggil fungsi faktorial dengan argumen angka

}