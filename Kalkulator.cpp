#include<iostream>
using namespace std;

double tambah(double a, double b){
    return a + b;
}

double kurang(double a, double b){
    return a - b;
}

double kali(double a, double b){
    return a * b;
}

double bagi(double a, double b){
    return a / b;
}

int main(){
    char opr, lanjut;
    double angka1, angka2, jawaban;
    bool isLanjut = true;

    cout << "-----Program Kalkulator-----" << endl;

    while(isLanjut){
        cout << "Masukkan angka pertama : ";
        cin >> angka1;
        cout << "Masukkan angka kedua : ";
        cin >> angka2;
        cout << "Masukkan operator (+, -, *, /) : ";
        cin >> opr;

        switch(opr){
        case '+':
            jawaban = tambah(angka1, angka2);
            break;
        case '-':
            jawaban = kurang(angka1, angka2);
            break;
        case '*':
            jawaban = kali(angka1, angka2);
            break;
        case '/':
            jawaban = bagi(angka1, angka2);
            break;
        }

        cout << "Jawaban dari " << angka1 << " " << opr << " " << angka2 << " = " << jawaban << endl;
        cout << "Apakah mau lanjut? (y/n)";
        cin >> lanjut;
        if(lanjut == 'n'){
            isLanjut = false;
        }
    }
    return 0;
}
