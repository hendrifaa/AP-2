#include <iostream>
using namespace std;

int main()

{
    float berat, tinggi, BMI;
    
    system ("cls");
    cout << "Masukkan berat badan kamu (kg) : ";
    cin >> berat;
    cout << "Masukkan tinggi badan kamu (m) : ";
    cin >> tinggi;
    BMI = berat / (tinggi * tinggi);
    cout << "BMI kamu adalah : " << BMI << endl;

    if (BMI < 18.5) {
        cout << "Berat badan kamu kurang" << endl;
    } else if (BMI >= 18.5 && BMI <= 24.9) {
        cout << "Berat badan kamu normal" << endl;
    } else if (BMI >= 25 && BMI <= 29.9) {
        cout << "Berat badan kamu berlebih" << endl;
    } else {
        cout << "Kamu obesitas" << endl;
    }

}