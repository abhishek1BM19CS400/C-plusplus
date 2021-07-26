#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  float a, b, c, r1, r2;
  cout << "Enter the numbers for a\n";
  cin >> a;
  cout << "Enter the numbers for b\n";
  cin >> b;
  cout << "Enter the numbers for c\n";
  cin >> c;
  r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
  r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
  cout << "The roots are\n"
       << r1 << r2;
  return 0;
}