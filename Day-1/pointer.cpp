#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a;
  int *ptr; // pointer ptr declaration
  ptr = &a; //address of var a
  cin >> a;
  cout << a << endl;
  cout << ptr << endl;
  cout << *ptr << endl; //dereferencing
}