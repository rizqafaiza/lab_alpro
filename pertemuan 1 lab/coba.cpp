#include <iostream>
#include <conio.h> 
using namespace std;

int main()
{
    system("cls");
    string nama,NIM,waktu;
    char kom,jk;
    float ipk;

    cout << "Masukkan nama : ";
    getline (cin,nama);

    cout << "Masukkan NIM : ";
    cin >> NIM;

    cout << "Masukkan kom : ";
    cin >> kom;

    cout << "Masukkan IPK : ";
    cin >> ipk;

    cout<<"Masukkan jenis kelamin : ";
    jk = getche();
    cout << endl;

    cout << nama << endl;
    cout << NIM << endl;
    cout << kom << endl;
    cout << ipk << endl;
    cout << "jenis kelamin : ";
    putchar(jk);
    cout << endl;

    cout << "Masukkan waktu : ";
    cin >> waktu;

    cout << "\nSelamat "<<waktu<<","<<nama<<"!";

    getch();

}