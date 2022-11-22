#include <iostream>
using namespace std;

int main() {
  int A[5]; 
  int i=0, X=0;

  cout << "Input bilangan(akhiri	input dengan 999):" << endl;
  while(X != 999) {
    cin >> X; 
    if (i >= 5) {
      cout << "Array penuh!"; 
    }else if (X == 999) {
      cout << "Program berakhir."; 
    }else if (X%2==1) {
      A[i] = X;
      i++;
    }
  }

  for(i=0; i<5; i++) {
    cout << A[i] << " ";
  }

  cout << endl;

  return 0;
}