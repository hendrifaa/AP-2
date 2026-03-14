#include <iostream>
using namespace std;

int main()
{
    float volume, luas, r;
    system("CLS");

    cout << "Masukkan jari-jari : ";
    cin >> r;

    // volume = (float) 4/ (float) 3 * 3.14 * r * r * r; // untuk mendapatkan hasil pembagian yang lebih akurat, kita bisa melakukan type casting
    volume = 4.0/3.0 * 3.14 * r * r * r;
    cout << "Volume bola adalah : " << volume << endl;

    luas = 4.0 * 3.14 * r * r;
    cout << "Luas permukaan bola adalah : " << luas << endl;
}
