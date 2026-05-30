#include <iostream>
using namespace std;

int tambahBiasa(int par1, int par2){
    par1+= par2;
    return par1;
}

int tambahpointer(int *par1,int *par2){
    *par1+=*par2;
    return *par1;
}

int main(){
    system("cls");
    int var=10;
    int *ptr;

    ptr = &var;
    cout << "alamat dari variabel var: " << &var << endl;
    cout << "alamat yang ditunjuk pointer: " << ptr<< endl;
    cout << "isi dari alamat yang ditunjuk pointer: " << *ptr << endl; 

    //case dimana pointer tidak menunjuk ke variabel tapi menunjuk sebuah nilai(array)
    char *ptr;
    ptr = "jakarta";

    cout << ptr << endl;
    cout << *ptr << endl;

    //pointer langsung ke char
    // char*ptr;
    // *ptr = 'b';
    // cout << ptr;
    //bisa karena cuma 1 byte

    //penggunaan pointer yang salah
    // int *ptr;
    // *ptr = 10;

    // cout << ptr;
    // cout << *ptr;

    //operasi logika pada var pointer
    int a=100, b=200;
    int *pa, *pb;

    pa = &a;
    pb = &b;

    cout << pa << endl;
    cout << pb << endl;

    if(pa > pb) {
        cout << "alamat pa > pb" << endl;
    } else if (pb > pa) {
        cout << "alamat pb > pa" << endl;
    } else if (pa == pb) {
        cout << "alamat pa = pb" << endl;
    }

    if(*pa > *pb) {
        cout << "isi pa > pb" << endl;
    } else if (*pb > *pa) {
        cout << "isi pb > pa" << endl;
    } else if (*pa == *pb) {
        cout << "isi pa = pb" << endl;
    }

    //pointer to array
    int arr[] = {10,20,30,40,50,60};
    int *ptr1;

    ptr1 = arr; //otomatis nunjuk ke elemen pertama di array

    cout << "alamat yang ditunjuk pointer : " << ptr1 << endl;
    cout << "alamat yang ditunjuk array index 0: " << &arr[0] << endl;
    cout << "alamat yang ditunjuk array index 1: " << &arr[1] << endl;
    cout << "isi yang ditunjuk pointer: " << *ptr1 << endl;
    cout << "isi yang ditunjuk pointer+1: " << *(ptr1+1) << endl;
    
    //pointer in array of char
    char arr1[]="indonesia";
    char *ptr2;
    ptr2 = arr1;

    cout << "alamat yang ditunjuk pointer : " << ptr2 << endl;
    cout << "alamat yang ditunjuk array index 0: " << &arr[0] << endl;
    cout << "alamat yang ditunjuk array index 1: " << &arr[1] << endl;
    cout << "isi yang ditunjuk pointer: " << *ptr2 << endl;
    cout << "isi yang ditunjuk pointer+1: " << *(ptr2+1) << endl;

    //pointer to pointer
    string var="joko";
    string *ptr, **ptr_2;

    ptr= &var;
    ptr_2 = &ptr;

    cout << "nilai var : " << var << endl;
    cout << "nilai pointer 1 (0 bintang): " << ptr << endl;
    cout << "nilai pointer 1 (1 bintang): " << *ptr << endl;
    cout << "nilai pointer 2 (0 bintang): " << ptr_2 << endl;
    cout << "nilai pointer 2 (1 bintang): " << *ptr_2 << endl;
    cout << "nilai pointer 2 (2 bintang): " << **ptr_2 << endl;

    //pointer as parameter
    int a=10, b=5;
    cout << "hasil tambah biasa: " << tambahBiasa(a,b) << endl;
    cout << "nilai a setelah fungsi: " << a << endl << endl;

    cout << "hasil tambah pointer: " << tambahpointer(&a,&b) << endl;
    cout << "hasil a setelah penjumlahan: " << a << endl;

    //dynamic pointer
    int *ptr = new int;
    *ptr = 30;
 
    cout << "isi variabel ptr: " << *ptr << " dan alamatnya: " << &ptr << " alamat yang ditunjuk: "<< ptr <<endl;

    delete ptr; //deallocation
    cout << "isi variabel ptr: " << *ptr << " dan alamatnya: " << &ptr << " alamat yang ditunjuk: "<< ptr <<endl;
}