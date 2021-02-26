#include <iostream>
using namespace std;

int main() {
int elem;
cout << "Digite o tamanho do vetor: ";
cin >> elem;
  
int* c = new int[elem];
  
for (int i = 0; i < elem; i++) {
c[i] = 2*i;
}
for (int i = 0; i < elem; i++) {
cout << "c[" << i << "] = " << c[i] << "\n";
}

delete [] c;
  
return 0;
}
