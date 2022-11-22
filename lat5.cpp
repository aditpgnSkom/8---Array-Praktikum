#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

int main(){

  char string1[30];

  // Input string1
  cout << "Masukkan String 1 : ";
  cin >> string1;

  // Ubah Huruf Besar
  strupr(string1);

  // Cetak string1
  cout << "string1 = " << string1;

  return 0;
}