#include <iostream>
using namespace std;

void sapa (string nama)
{
    cout << "Halo, apa kabar " << nama << "! Selamat belajar C++" << endl;
}

int main()
{
    system("cls");
    string namapengguna = "Rizqa";
    sapa(namapengguna);
    return 0;
}