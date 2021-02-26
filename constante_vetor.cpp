#include <iostream>

using namespace std;

const int ELEM = 10;

int main() {
int c[ELEM];
for (int i = 0; i < ELEM; i++) {
c[i] = 2*i;
}
for (int i = 0; i < ELEM; i++) {
cout << "c[" << i << "] = " << c[i] << "\n";
}  
return 0;
}
