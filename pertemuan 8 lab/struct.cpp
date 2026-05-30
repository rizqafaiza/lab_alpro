#include <iostream>
#include <vector>
using namespace std;

struct alamat{
    string jalan;
    string kota;
};

struct mahasiswa{
    string nama;
    string nim;
    alamat al;
    int umur;
    float ipk;
};

int main(){
    system ("cls");

    mahasiswa mhs;
    mhs.nama= "Jayabaya";
    mhs.nim = "10183421";
    mhs.umur = 19;
    mhs.ipk = 3.99;

    cout << "nama: " << mhs.nama << endl;
    cout << "nim: " << mhs.nim << endl;
    cout << "umur: " << mhs.umur << endl;
    cout << "ipk: " << mhs.ipk << endl;
    cout << "\n";

    //akses menggunakan pointer
    mahasiswa *ptrmhs = &mhs;
    cout << "nama: " << ptrmhs->nama << endl;
    cout << "nim: " << ptrmhs->nim << endl;
    cout << "umur: " << ptrmhs->umur << endl;
    cout << "ipk: " << ptrmhs->ipk << endl;
    cout << "\n" ;

    // mahasiswa m2;

    // cout << "Nama   : "; 
    // getline(cin,m2.nama);

    // cout << "NIM    : "; 
    // getline(cin,m2.nim);

    // cout << "Umur   : "; 
    // cin >> m2.umur; 
    // cin.ignore();

    // cout << "IPK    : "; 
    // cin >> m2.ipk; 
    // cin.ignore();

    // cout << "Nama   : " << m2.nama << endl;
    // cout << "NIM    : " << m2.nim << endl;
    // cout << "Umur   : " << m2.umur << endl; 
    // cout << "IPK    : " << m2.ipk << endl; 
    getchar();
    system("cls");


    // Menggunakan vector
    mahasiswa m3;

    vector<mahasiswa> mList;
    int n;
    cout << "Masukkan jumlah mahasiswa : "; 
    cin >> n;
    cin.ignore();

    cout << "Input data :" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Data Mahasiswa - " << i + 1 << endl;
        cout << "Nama   : "; getline(cin,m3.nama);
        cout << "NIM    : "; getline(cin,m3.nim);
        cout << "Jalan  : "; getline(cin,m3.al.jalan);
        cout << "Kota   : "; getline(cin,m3.al.kota);
        cout << "Umur   : "; cin >> m3.umur; cin.ignore();
        cout << "IPK    : "; cin >> m3.ipk; cin.ignore();
        cout << "\n";
        mList.push_back(m3);
    }

    // system("cls");
    cout << "Output :" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Data Mahasiswa - " << i + 1 << endl;
        cout << "Nama   : " << mList[i].nama << endl;
        cout << "NIM    : " << mList[i].nim << endl;
        cout << "Jalan  : " << mList[i].al.jalan << endl;
        cout << "Kota   : " << mList[i].al.kota << endl;
        cout << "Umur   : " << mList[i].umur << endl;
        cout << "IPK    : " << mList[i].ipk << endl;
    }
}