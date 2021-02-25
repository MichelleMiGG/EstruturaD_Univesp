#include <iostream>

using namespace std;

int main() {

int number;
int valores[10];
int sum = 0;

for (int count = 0; count < 10; count++) {
cout << "Insira umn novo numero: " << endl;
cin >> number;

sum += number;
valores[count] = number;
}

float average = float(sum)/10.0;
float variance = 0.0;

for (int count = 0; count <10; count++) {
int value = valores[count];
float term = float(value) - average;
variance += term * term;
}
variance = variance / 10;
cout << "A media da serie e: " << average << endl;
cout << "A variancia da derie e: " << variance << endl;

return 0;
}
