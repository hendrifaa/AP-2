#include <iostream> //header standar c++, conio.h, stdio.h
// contoh file bawaan #include "headerbaru.h"
#include <conio.h> // header untuk getche() dan getch()

using namespace std;

int main()
{
    string nama;
    char kom, jeniskelamin;
    int nim;
    float ip;

    cout << "hello world !! " << endl;

    cout << "Masukkan nama anda: ";
   // cin >> nama;
   getline(cin, nama); // agar karakter spasi bisa dibaca

    cout << "Masukkan kom anda : ";
    cin >> kom;

    cout << "Masukkan nim anda : ";
    cin >> nim;

    cout << "Masukkan IP anda : ";
    cin >> ip;

    cout << "Masukkan jenis kelamin (L/P) : "; // getche
    jeniskelamin = getche(); // agar karakter langsung tampil, jadi ga perlu tekan enter

    /* output */
    cout << "\n" << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
   // cout << jeniskelamin << endl;
    putchar (jeniskelamin); // untuk menampilkan karakter "jenis kelamin"
    getch(); // karakter yang kita ketik tdk ditampilkan di layar

}