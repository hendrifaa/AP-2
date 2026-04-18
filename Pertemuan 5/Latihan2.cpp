#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> nama = {"Nadia","Echa", "Carlos", "Ilham", "Alan"};

    cout << "isi vector awal : " << endl;
    for(int i = 0; i < nama.size(); i++) {
        cout << nama[i] << endl;
    }

    nama.push_back("Houra");

    nama.pop_back();

    nama.erase(nama.begin() + 1);
    cout << "isi vector setelah perubahan : " << endl;
    for(string n : nama) {
        cout << n << endl;
    }

    cout << "Jumlah data tersisa : " << nama.size() << endl;
}