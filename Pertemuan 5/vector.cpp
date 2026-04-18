#include <iostream>
#include <vector>
using namespace std;

int main() {
    //Vector
    vector<string> nama_karyawan = {"Alya", "Parul", "Hana", "Dewi", "Padhil"};
    
    // menampilkan data asceding
    // for(int i = 0; i < nama_karyawan.size(); i++) {
    //     cout << nama_karyawan[i] << endl;
    // }

    // add data to vector
    nama_karyawan.push_back("Edric"); // menambahkan data ke vector

    // menampilkan data asceding
    // for(int i = 0; i < nama_karyawan.size(); i++) {
    //     cout << nama_karyawan[i] << endl;
    // }

    //Delete data from vector
    nama_karyawan.pop_back(); // menghapus data terakhir
    nama_karyawan.erase(nama_karyawan.begin() + 3); // menghapus data pada index ke 3

    for(int i = 0; i < nama_karyawan.size(); i++) {
        cout << nama_karyawan[i] << endl;
    }

}