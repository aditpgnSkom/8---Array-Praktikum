#include <iostream> 
using namespace std;

int main() {
  int A[5]; 
  int i;

  cout << "Input 5 bilangan : " << endl; 
  for(i = 0; i < 5; i++) {
    cout << "Bil" << i+1 <<" : "; cin >> A[i];
  }

  
  for(i = 0; i < 5; i++) {
    if(A[i] % 2 == 0)
      cout << A[i] << " ";
  }

  cout << endl;
  return 0;
}