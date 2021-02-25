#include <iostream>

using namespace std;

void t_valor_referencia(int &a, int &b){
int temp;
temp = a;
a = b;
b = temp;
}

int main() {
int a = 2, b = 3;
cout << "Antes a = " << a << " b = " << b << endl;
cout << "Depois a = " << a << " b = " << b << endl;
return 0;
}
