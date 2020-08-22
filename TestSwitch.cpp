#include<iostream>
#include<string>
using namespace std;

int main(){
    int bulan;
    string stringBulan;

    cout << "Masukkan bulan (angka) : ";
    cin >> bulan;

    switch (bulan){
    case 1:
        stringBulan = "Januari";
        break;
    case 2:
        stringBulan = "Februari";
        break;
    case 3 :
        stringBulan = "Maret";
        break;
    default:
        stringBulan = "Inputan user tidak valid!";
    }

    cout << "Bulan = " << stringBulan;
}
