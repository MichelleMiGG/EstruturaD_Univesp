#include <iostream>

int sum(int number1, int number2){
  return number1 + number2;
}

int sub(int number1, int number2){
  return number1 - number2;
}

int mul(int number1, int number2){
  return number1 * number2;
}

int idiv(int number1, int number2){
  return number1 / number2;
}

float fdiv(int number1, int number2){
  return (float)number1 / (float)number2;
}

int res(int number1, int number2){
  return number1 % number2;
}
using namespace std;
int main() {
  int number1;
  int number2;

  cout << "Digite o primeiro número: ";
  cin >> number1;

  cout << "Digite o segundo número: ";
  cin >> number2;

  cout << "Soma:            " << sum(number1, number2)  << std::endl;
  cout << "Subtração:       " << sub(number1, number2)  << std::endl;
  cout << "Multiplicação:   " << mul(number1, number2)  << std::endl;
  cout << "Divisão Inteira: " << idiv(number1, number2)  << std::endl;
  cout << "Divisão Real:    " << fdiv(number1, number2) << std::endl;
  cout << "Resto:           " << res(number1, number2)  << std::endl;

  return 0;
}
