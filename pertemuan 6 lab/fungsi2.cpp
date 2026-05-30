#include <iostream>
using namespace std;

//Fungsi tanpa nilai balikan
void pesan(){
    cout << '==== Welcome Genii O`Four ====' << endl;
}

//Fungsi dengan nilai balikan
int tambah (int a,int b){
    return a+b;
}

int kali (int a, int b){
    return a*b;
}

//Fungsi overload
int kali (int a, int b, int c){
    return a*b*c;
}

float kali (float a, float b){
    return a*b;
}

//Fungsi Rekursif
long faktorial (int n){
    if (n == 0 || n==1) {
        return 1;
    } else {
        return n * faktorial(n-1);
    }
}

int main ()
{
    system("cls");
    int x = 7, y = 3, z = 2;

    //Fungsi void
    pesan();

    //Fungsi dengan nilai balikan
    int hasilTambah = tambah(x,y);
    cout << "Hasil tambah = " << hasilTambah << endl;

    cout << tambah(x,y) << endl;
    cout << tambah(x,y) * 2 << endl;

    //Fungsi overload
    int hasilkali = kali(x,y);
    cout << "Hasil Kali: " << hasilkali << endl;

    int hasilkali3 = kali(x,y,z);
    cout << "kali: " << hasilkali3 << endl;

    float hasilkalifloat = kali(2.5f,3.1f);
    cout << "Hasil kali pecahan: " << hasilkalifloat << endl;

    //Fungsi rekursif
    int faktor = faktorial(x);
    cout << "Faktorial x = " << faktor << endl;
}