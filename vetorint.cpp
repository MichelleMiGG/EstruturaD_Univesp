#include <iostream>
using namespace std;

int main() {
int c[10] = {14,0,3};

c[5] = 30;
c[7] = 40;
c[8] = 50;

for (int i = 0; i < 10; i++) {
cout << "c[" << i << "] = " << c[i] << "\n";
}    
return 0;
}
