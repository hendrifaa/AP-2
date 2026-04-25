#include <iostream>
using namespace std;

void sapa(string nama) { // nama menerima nilai dari namaPengguna "ripa" | nama merupaaan parameter formal
    cout << "Hallo " << nama << "Selamat datang di AP 2!" << endl;
}

int main() {
    string namaPengguna = "Ripa ";

    sapa(namaPengguna); //sapa (ripa) | namaPengguna adalah parameter aktual

    return 0;
}