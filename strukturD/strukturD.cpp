// strukturD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    string umur;
};

int main()
{
    mahasiswa mhs;
    cout << "Nomor Mahasiswa : " ;
    cin >> mhs.nim;
    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama;
    cout << "Alamat Mahasiswa : ";
    cin >> mhs.alamat;
    cout << "Umur Mahasiswa :";
    cin >> mhs.umur;

    
}

