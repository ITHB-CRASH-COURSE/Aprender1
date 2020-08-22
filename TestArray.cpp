#include<iostream>
using namespace std;

void cetakArray(int arr[], int ukuran){
    for(int i = 0; i < ukuran; i ++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    const int ukuranArray = 5;
    int contohArray[ukuranArray] = {6,7,4,2,5};

    cetakArray(contohArray, ukuranArray);

    contohArray[0] = 1;

    cetakArray(contohArray, ukuranArray);

    contohArray[1] = 10;

    cetakArray(contohArray, ukuranArray);
}
