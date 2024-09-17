#include<iostream>
using namespace std;

int main() {

char ab;
float num1 , num2;
cout << "Enter the operator : + , - , * , / :" ;
cin >> ab;

cout << "Enter two operands :" ;
cin >> num1 >> num2;

switch(ab) {

case '+':
cout << num1 << " + " << num2 << " = " << num1 + num2;
break;

case '-':
cout << num1 << " - " << num2 << " = " << num1 + num2;
break;

case '*':
cout << num1 << " * " << num2 << " = " << num1 + num2;
break;

case '/':
cout << num1 << " / " << num2 << " = " << num1 + num2;
break;
}

return 0;
}