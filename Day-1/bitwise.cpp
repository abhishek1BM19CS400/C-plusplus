#include <iostream>
using namespace std;
int main()
{
  int a = 10, b = 12;
  int c1, c2, c3, c4, c5;
  c1 = a & b;  //And
  c2 = a | b;  //or
  c3 = ~a;     //not
  c4 = a >> b; //right shift
  c5 = a << b; //left shift
  cout << c1 << endl;
  cout << c2 << endl;
  cout << c3 << endl;
  cout << c4 << endl;
  cout << c5 << endl;
}