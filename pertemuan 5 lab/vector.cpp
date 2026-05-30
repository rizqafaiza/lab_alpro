#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int main() {
    system("cls");
    int n, banyak;

    // vektor
    vector<string> nama = {"Jaja", "Jiji", "Juju", "Jeje", "Jojo", "Joko"};

    for (string karyawan : nama) {
        cout << karyawan << endl;
    }
    cout << endl;

    //Add data to vector
    // {"Jaja", "Jiji", "Juju", "Jeje", "Jojo", "Joko"}
    nama.push_back("Jarwo");
    cout << "Setelah menambah data: " << endl;
    for (string karyawan : nama) {
        cout << karyawan << endl;
    }
    cout << endl;

    // {"Jaja", "Jiji", "Juju", "Jeje", "Jojo", "Joko","Jarwo"}
    nama.pop_back();
    cout << "Setelah menghapus data: " << endl;
    for (string karyawan : nama) {
        cout << karyawan << endl;
    }
    cout << endl;

    // {"Jaja", "Jiji", "Juju", "Jeje", "Jojo", "Joko"}
    nama.erase(nama.begin() + 2);
    cout << "Setelah menghapus data: " << endl;
    for (string karyawan : nama) {
        cout << karyawan << endl;
    }

    // {"Jaja", "Jiji", "Juju", "Jeje", "Jojo", "Joko"}
    nama.erase(nama.begin() + 2, nama.begin() + 4);
    cout << "Setelah menghapus data: " << endl;
    for (string karyawan : nama) {
        cout << karyawan << endl;
    }
    // {"Jaja", "Jiji", "Joko"}
}