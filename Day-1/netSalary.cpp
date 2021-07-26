#include <iostream>
using namespace std;
int main()
{
  float basic_salary, allowences_percentage, deduction_percentage;
  float net_salary;
  cout << "Enter the basic salary\n";
  cin >> basic_salary;
  cout << "Enter the percentage of allowences\n";
  cin >> allowences_percentage;
  cout << "Enter the percentage of deductions\n";
  cin >> deduction_percentage;
  net_salary = basic_salary + basic_salary * allowences_percentage / 100 - basic_salary * deduction_percentage / 100;
  cout << "The net salary is " << net_salary << endl;
}