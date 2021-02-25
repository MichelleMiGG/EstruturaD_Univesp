#include <iostream>

using namespace std;

int main(){

int number1;
int number2;

std::cout <<"Digite o primeiro numero: ";
std::cin >> number1;

std::cout << "Digite o segundo numero: ";
std::cin >> number2;

int sun = number1 + number2;
int sub = number1 - number2;
int mul = number1 * number2;
int div = number1 / number2;
float real = (float)number1 / (float)number2;
int res = number1 % number2;

cout<< "A soma dos numeros:" <<number1<< "e" <<number2<< "=" <<sun<<"\n";
cout<< "A subtração dos numeros:" <<number1<< "e" <<number2<< "=" <<sub<<"\n";
cout<< "A multiplicacao dos numeros:" <<number1<< "e" <<number2<< "=" <<mul<<"\n";
cout<< "A divisao dos numeros:" <<number1<< "e" <<number2<< "=" <<div<<"\n";
cout<< "A divisao real dos numeros:" <<number1<< "e" <<number2<< "=" <<real<<"\n";
cout<< "O resto da divisao dos numeros:" <<number1<< "e" <<number2<< "=" <<res<<"\n";

}
