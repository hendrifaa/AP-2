#include <iostream>
#include <string>
#include <array>
using namespace std;

int main () {
    // Array declaration & initialitation
    // 2 cara membuat array

    // cara 1 : array kosong
    // string nama[5]; 
    // nama[0] = "Alya";
    // nama[1] = "Parul";
    // nama[2] = "Hana";
    // nama[3] = "Dewi";
    // nama[4] = "Padhil";

    // cara 2 : array dengan isi
    // string nama[5] = {"Alya", "Parul", "Hana", "Dewi", "Padhil"};
    //string nama[] = {"Alya", "Parul", "Hana", "Dewi", "Padhil"}; // ukuran array otomatis   

    // Menampilan data dalam array
    // cout << nama[0] << endl;
    // cout << nama[3] << endl;

    // Menggunakan Looping ascending untuk menampilkan data dalam array
    // for(int i = 0; i < 5; i++) {
    //     cout << nama[i] << endl;
    // }

    //descending
//     for(int i = 4; i >= 0; i--) {
//         cout << nama[i] << endl;
//     }

// Array multidimentional
// 1 2 3
// 4 5 6

// matriks [2][3] berarti 2 baris dan 3 kolom
// int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
// for(int i = 0; i < 2; i++) { //baris
//     for(int j = 0; j < 3; j++) { //kolom
//         cout << matrix[i][j] << " ";
//     }
//     cout << endl;}

    // string (array of characters)
    // string nama = "Alya";
    // cout << nama[0] << endl;
    // cout << nama[2] << endl; 

    // cout << nama.length() << endl; // menghitung jumlah karakter dalam string
    // cout << nama.size() << endl; // menghitung jumlah karakter dalam string

    // string s1 = "Hello";
    // string s2 = "World";

    // // 1. s1 = s2; // s1 sekarang menjadi "World"
    // s1 = s2;
    // cout << "s1 sekarang = " << s1 << endl;

    // // 2. s1 + s2; // hasilnya "HelloWorld" tetapi tidak disimpan dalam variabel
    // s1 = "Helo"; // reset nilai
    // cout << "Hasil gabungan = " << s1 + s2 << endl;

    // // 3. s1.length(); // menghitung jumlah karakter dalam string s1
    // cout << s1.length() << endl;
    // cout << (s1 + s2).length() << endl; // menghitung jumlah karakter dalam gabungan s1 dan s2 

    // // 4. s1.substring(n,m) 
    // cout << s1.substr(2, 3) << endl; // mengambil substring dari s1 mulai dari index 1 dengan panjang 3 karakter

    // operator sizeof
    // int angka = 10;
    // cout << sizeof(angka); 

    // int main[] = {10, 20, 30, 40, 50};
    // cout << sizeof(nilai);

    // array library
    // misal array biasa : float nilai[5] = {10.5, 20.5, 30.5, 40.5, 50.5};

    // array float, 5> nilai = {87.5, 90, 100, 95.7, 78.3};
    // cout << "Nilai : ";

    // for(int i = 0; i < nilai.size(); i++) {
    //     cout << nilai[i] << " ";
    // }
}