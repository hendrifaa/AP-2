#include <iostream>
using namespace std;

//fungsi untuk pointer sebagai parameter
void ubahNilai(int *p) { // p menerima alamat x
    *p = 20; // *p = 20 ubah isi alamat 
}

int main() {
    system("cls");

    // 1. Pointer dalam pointer
    cout << "=== Pointer dalam pointer ===" << endl;
    int a = 64; // variabel biasa
    int *p = &a; // pointer menyimpan alamat variabel a 
    int **pp = &p; // pointer menyimpan alamat pointer p

    cout << "Nilai a : " << a << endl; //64
    cout << "Nilai *p : " << *p << endl; // isi alamat a
    cout << "Nilai **pp : " << **pp << endl; // isi alamat p (isi alamat a)

    // 2. Pointer dalam array
    cout << "=== Pointer dalam array ===" << endl;
    int arr[3] = {1, 2, 3}; // array biasa
    int *ptr = arr;

    cout << "Elemen 1 : " << *ptr << endl; // arr[0] = 1
    cout << "Elemen 2 : " << *(ptr + 1) << endl; // arr[1] = 2
    cout << "Elemen 3 : " << *(ptr + 2) << endl; // arr[2] = 3

    // 3. Pointer dalam string
    cout << "=== Pointer dalam string ===" << endl;

    char *organisasi = "Ilmu Komputer Laboratory Center"; 
    cout << "Awal : " << organisasi << endl; // menampilkan string

    organisasi += 5; // geser pointer
    cout << "Geser : " << organisasi << endl; // menampilkan string setelah digeser +5 

    // 4. Pointer sebagai parameter
    cout << "=== Pointer sebagai parameter ===" << endl;
    int x = 5;
    cout << "Sebelum : " << x << endl;

    ubahNilai(&x); 
    cout << "Sesudah : " << x << endl;
    
}