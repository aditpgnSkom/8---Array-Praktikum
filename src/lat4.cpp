#include <iostream>
using namespace std;

int main(){
  int jmlMhs, jmlMtkl;

  //Input Nilai
  cout << "Masukkan Jumlah Mahasiswa : "; cin >> jmlMhs;
  cout << "Masukkan Jumlah Matkul : "; cin >> jmlMtkl;
  char namaMhs[jmlMhs][10]; 
  float nilai[4][3];
  for (int i = 0; i < jmlMhs; i++){
    cout << "Masukkan Nama Mahasiswa Ke-" << i+1 << " : "; cin >> namaMhs[i];
    for (int j = 0; j < jmlMtkl; j++) {
      cout << "Masukkan Nilai P" << j+1 << " : "; cin >> nilai[i][j];
    }
  }

  

  // Mencetak nilai
  cout << "Daftar Nilai Praktikum Pemrograman Dasar: " << endl;
  for(int i = 0; i < jmlMhs;i++) {
    cout << namaMhs[i] << " : ";
    for(int j = 0; j < jmlMtkl; j++) {
      cout << "P" << j+1 << " " << nilai[i][j] <<"  ";
    }
    cout << endl;
  }

  return 0;
}