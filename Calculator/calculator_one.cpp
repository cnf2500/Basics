/*
 * Author: Christopher Forte
 * Date: October 19, 2022
 * Title: Calculator (C++)
 * Description: First attempt at a basic calculator in C++. 
 */

#include <iostream>
using namespace std;

int main()
{

  int num1, num2, total;
  char op;

  cout << "Enter First Operand: ";
  cin >> num1;
  
  cout << "Enter Operator: ";
  cin >> op;
  
  cout << "Enter Second Operand: ";
  cin >> num2;

  if (op == '+')
  {
    total = num1 + num2;
    cout << total;
  }

  if (op == '-')
  {
    total = num1 - num2;
    cout << total;
  }

  if (op == '*')
  {
    total = num1 * num2;
    cout << total;
  }

  if (op == '/')
  {
    total = num1 / num2;
    cout << total;
  }

  if (op == '%')
  {
    total = num1 % num2;
    cout << total;
  }

  return 0;
}
