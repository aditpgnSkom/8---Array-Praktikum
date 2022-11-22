#include <iostream>
using namespace std;

int main() {
  int MatriksA[100][100], MatriksB[100][100], selisihAB[100][100];
  int i, j, barisAB, kolomAB;

  //Memasukkan Orde dari Matriks
  cout << "Jumlah Baris Matriks A dan B? ";  cin >> barisAB;
  cout << "Jumlah Kolom Matriks A dan B? ";  cin >> kolomAB;
  cout << endl;

  //Memasukkan data matriks A
  cout << "Masukkan nilai matriks A:\n";
  for(i = 0; i < barisAB; i++) {
    for(j = 0; j < kolomAB; j++) {
      cout << "A[" << i+1 << "][" << j+1 << "] = ";
      cin >> MatriksA[i][j];
    }
    cout << endl;
  }

  //Memasukkan data Matriks B
  cout << "Masukkan nilai matriks B:\n";
  for(i = 0; i < barisAB; i++) {
    for(j = 0;j < kolomAB; j++) {
      cout << "B[" << i+1 << "][" << j+1 <<"] = ";
      cin >> MatriksB[i][j];
    }
    cout << endl;
  }

  // Mencetak Matriks A baris ke 1 kolom ke 3
  cout << "A[1][3] =" << MatriksA[0][2] << endl;

  // Mencetak Matriks B baris ke 2 kolom ke 1
  cout << "A[2][1] =" << MatriksB[1][0] << endl;

  // Menghitung selisih dari Matriks A dan Matriks B
  for(i = 0; i < barisAB; i++) {
    for(j = 0; j < kolomAB; j++) {
      selisihAB[i][j] = MatriksA[i][j] - MatriksB[i][j];
    }
  }

  // Mencetak Selisih dari Matriks A dan Matriks B
  cout << "\nSelisih dari Matriks A dan Matriks B Adalah\n";
  for(i = 0; i < barisAB; i++) {
    for(j = 0; j < kolomAB; j++) {
      cout << selisihAB[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}