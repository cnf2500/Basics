
#Author: Christopher Forte
#Date: October 21, 2022
#Title: Calculator (Python)
#Description: First attempt at a basic calculator in Python.


num1 = int(input("Enter First Operand: "))
ch = input("Enter Operator: ")
num2 = int(input("Enter Second Operand: "))

output = 0 

if ch == '+':
  output = num1 + num2

elif ch == '-':
  output = num1 - num2

elif ch == '*':
  output = num1 * num2

elif ch == '/':
  output = num1 / num2

elif ch == '%':
  output = num1 % num2

else:
  print("Invalid Input")

print(output)
