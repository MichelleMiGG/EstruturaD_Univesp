#include <iostream>

using namespace std;

void alocando_mem(int* m)
{
m = new int;
*m = 4;
}
void modificando_mem(int* m)
{
*m = 5;
}
void refer(int*& m)
{
m = new int;
*m = 6;
}

int main()
{
int a  = 1;
int b  = 2;
int c  = 3; 
int* m1 = &a;
int* m2 = &b;
int* m3 = &c;

cout <<"Antes: "<<  m1 <<" "<<  m2 <<" "<<  m3 << endl;
cout <<"Antes: "<< *m1 <<" "<< *m2 <<" "<< *m3 << endl;
cout << endl;
  
alocando_mem(m1); 
modificando_mem(m2);
refer(m3);  

cout << "Depois: "<<  m1 <<" "<<  m2 <<" "<<  m3 << endl;
cout << "Depois: "<< *m1 <<" "<< *m2 <<" "<< *m3 << endl;
cout << "Depois: "<< a <<" "<< b <<" "<< c << endl;

return 0;
}
