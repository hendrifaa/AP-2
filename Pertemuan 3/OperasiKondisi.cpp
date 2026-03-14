#include <iostream>
using namespace std;

int main() 
{
    int nilai;

    system ("cls");
    cout << "Masukkan Nilai : ";
    cin >> nilai;

    //if statement
    // if (nilai <= 65 ){
    //     cout << "Anda Tidak Lulus" << endl;
    // }

    //if else statement
    // if (nilai <= 65 ){
    //     cout << "Anda Tidak Lulus" << endl;
    // } else {
    //     cout << "Anda Lulus" << endl;
    // }

    //if else if statement
    // if (nilai == 100) {
    //     cout << "Nilai Anda Kaciw" << endl;
    // } else if (nilai <= 65) {
    //     cout << "Anda Tidak Lulus" << endl;
    // } else {
    //     cout << "Anda Lulus" << endl;
    // }

    //nested if statement
//     if (nilai <= 65) {
//         cout << "Anda Tidak Lulus" << endl;
//     } else {
//         if (nilai == 100) {
//             cout << "Nilai Anda Lulus dan Anda Kaciw" << endl;
//         } else {
//             cout << "Anda Lulus" << endl;   
//     }
//     }

// switch case statement
    // switch (nilai) {
    //     case 1:
    //         cout << "Senin" << endl;
    //         break;
    //     case 2:
    //         cout << "Selasa" << endl;
    //         break;  
    //     case 3:
    //         cout << "Rabu" << endl; 
    //         break;
    //     case 4:
    //         cout << "Kamis" << endl; 
    //         break;
    //     case 5:
    //         cout << "Jumat" << endl; 
    //         break;
    //     case 6:
    //         cout << "Sabtu" << endl; 
    //         break;
    //     case 7:
    //         cout << "Minggu" << endl;   
    //         break;
    //     default:
    //         cout << "Inputan Salah" << endl;
    //         break;
    // }

    //switch range case statement 
    // switch (nilai){
    //     case 85 ... 100: cout << "Nilai Anda A" << endl; break;
    //     case 80 ... 84: cout << "Nilai Anda B+" << endl; break;
    //     case 75 ... 79: cout << "Nilai Anda B" << endl; break;
    //     case 70 ... 74: cout << "Nilai Anda C+" << endl; break;
    //     case 65 ... 69: cout << "Nilai Anda C" << endl; break;
    //     case 60 ... 64: cout << "Nilai Anda D" << endl; break;
    //     default : cout << "Inputan Salah" << endl; break;
    // }

    //ternary operator
    // if (nilai % 2 == 0) {
    //     cout << "Nilai Anda Genap" << endl;
    // } else {
    //     cout << "Nilai Anda Ganjil" << endl;
    // }

    (nilai % 2 == 0) ? cout << "Nilai Anda Genap" << endl : cout << "Nilai Anda Ganjil" << endl;
}