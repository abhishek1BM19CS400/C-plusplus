#include <iostream>
using namespace std;
int main()
{
  float height, base, area;
  cout << "Enter the height and base of the triangle\n";
  cin >> height >> base;
  area = (height * base) / 2;
  cout << "The area of the triangle is " << area;
}