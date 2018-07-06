#include <iostream>
using namespace std;
int multiplica(int x,int y)
{
  int c; 
  c = x*y;           
  return c;
}

int cuadrado(int x)
{
  int s; 
  s = x^2;     
  return s;
}

int main()
{
  int a1;
  int b1;
  a1 = 77;
  b1 = 4;
 
  int m = multiplica(a1,b1);
  int s1 = cuadrado(a1);
  cout << "Al multiplica : " << m << ", elevadando al cuadrado : " << s1 << endl;   
          
  return 0;
}
