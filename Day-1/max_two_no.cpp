#include <iostream>
using namespace std;
int main()
{
  int a, b;
  cout << "Enter 2 numbers\n";
  cin >> a >> b;
  if (a > b)
  {
    cout << "The greater number is " << a;
  }
  else
  {
    cout << "The greater number is " << b;
  }
  return 0;
}