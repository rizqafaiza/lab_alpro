#include <iostream>
using namespace std;

int main()
{
    system ("cls");

    //goto
    goto a;
    b:
    cout << "adalah " ;
    goto c;
    e:
    cout << "Komputer " ;
    goto f;
    c:
    cout << "anak " ;
    goto d;
    a:
    cout << "Aku " ;
    goto b;
    f:
    cout << "USU " ;
    goto g;
    d:
    cout << "Ilmu " ;
    goto e;
    g:
    cout << endl;

    //menampilkan angka kelipatan 5
    int i=40;

    lipat:
    if (i%5 == 0){
        cout << i << " ";
    }
    i--;

    if (i>=5){
        goto lipat;
    }
    cout << endl;

    //while statement
    int i=10;
    cout << "\nini while\n";
    while (i >= 1){
        cout << i << ". Lorem" << endl;
        i--;
    }

    //do wwhile statement
    cout << "\nini do while\n";
    do {
        cout << i << ". Lorem" << endl;
    } while (i > 10);
    cout << endl;

    //for loop
    //for (inisialisasi, kondisi, increment/decrement)
    for (int i=1; i<=5; i++) {
        cout << "Hidup jowowi!\n";
    }
    cout << endl;

    //atribut length()
    string kata;
    cout << "masukkan kata: ";
    cin >> kata;
    for (int i = 0; i < kata.length(); i++) {
        cout << i+1 << ". " << kata [i] << endl;
    }

    //nested for
    for (int i = 1; i<=5; i++){
        for (int j =1; j <= i; j++ ){
            cout << "* ";
        }
        cout << endl;
    }

}