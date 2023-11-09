#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char opr;
    cout << "Enter first number\n";
    cin >> num1;
    cout << "Enter second number\n";
    cin >> num2;
    cout << "Enter operator(+,-,*,/)";
    cin >> opr;
    switch (opr)
    {
    case '+':
        cout << "Sum of " << num1 << " and " << num2 << " is " << (num1 + num2);
        break;
    case '-':
        cout << "Difference of " << num1 << " and " << num2 << " is " << (num1 - num2);
        break;
    case '*':
        cout << "Product of " << num1 << " and " << num2 << " is " << (num1 * num2);
        break;
    case '/':
        cout << "Quotient of " << num1 << " and " << num2 << " is " << (num1 / num2);
        break;
    }
}
