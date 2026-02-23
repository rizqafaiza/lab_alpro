#include <iostream>
using namespace std;

int main()
{
    system ("cls");

    int a,b;
    //assignment operator
    a = 5;
    b = 7;
    
    //Aritmethic operator (+ - * / %)
    int tambah = a+b;
    int kurang = a-b;
    int kali = a*b;
    int bagi = a/b;
    float bagi2 = float (a)/b;
    int mod = a%b;

    cout << "Hasil tambah : " << tambah << endl;
    cout << "Hasil kurang : " << kurang << endl;
    cout << "Hasil kali : " << kali << endl;
    cout << "Hasil bagi (bulat) : " << bagi << endl;
    cout << "Hasil bagi (pecahan) : " << bagi2 << endl;
    cout << "Hasil modulo : " << mod << endl;

    //Relational operator
    //Membandingkan kedua nilai operator ==, >,>=,<,<=,!=
    //Jika benar memberikan output 1 dan jika salah 0
    cout << (a==b) << endl;
    cout << (a>b) << endl;
    cout << (a>=b) << endl;
    cout << (a<b) << endl;
    cout << (a<=b) << endl;
    cout << (a!=b) << endl;

    //logical operator
    //and (&&)
    cout << (true&&true) << endl;
    cout << (true&&false) << endl;
    cout << (false&&true) << endl;
    cout << (false&&false) << endl;

    //or(||)
    cout << (true||true) << endl;
    cout << (true||false) << endl;
    cout << (false||true) << endl;
    cout << (false||false) << endl;

    //negasi(!)
    cout << !true << endl;
    cout << !false << endl;

    //bitwise operator (&,|,~,^)
    cout << (5&7) << endl;
    cout << (5|7) << endl;
    cout << (5^7) << endl;
    cout << (~7) << endl;
    cout << (7 << 2) << endl;
    cout << (7 >> 2) << endl;

    // Shorthand
    a += 2;
    cout << a << endl;

    a -= 2;
    cout << a << endl;

    a *= 2;
    cout << a << endl;

    a /= 2;
    cout << a << endl;

    //Increment dan Decrement
    //Pre Increment
    cout << a << endl;
    cout << ++a << endl;
    cout << a << endl;

    //Pre Decrement
    cout << a << endl;
    cout << --a << endl;
    cout << a << endl;

    //Post Increment
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;

    //Post Decrement
    cout << a << endl;
    cout << a-- << endl;
    cout << a << endl;

}