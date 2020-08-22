#include<iostream>
#include<string>
using namespace std;

int main(){
    int jawaban;
    cout << "Program Mengecek Ganjil/Genap" << endl;
    cout << "Masukkan angka : ";
    cin >> jawaban;

    /*
    if( jawaban % 2 == 1){
        cout <<  "bilangan " << jawaban << " adalah bilangan ganjil";
    }else{
        cout <<  "bilangan " << jawaban << " adalah bilangan genap";
    }*/

    string hasil = ( jawaban % 2 == 1) ? "Ganjil" : "Genap";
    cout <<  "bilangan " << jawaban << " adalah bilangan " << hasil;
}
