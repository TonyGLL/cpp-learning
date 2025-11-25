#include <iostream>

using namespace std;

// Function declaration (always before main)
// int: What type returns
// sum: Function name
// (int a, int b)> Parameters that recieve
int sum(int a, int b)
{
    return a + b;
}

// Function tha dont return anything
void greet(string name)
{
    cout << "Hello " << name << ", welcome!" << endl;
}

int main()
{
    greet("Tony");

    int result = sum(4, 22);
    cout << "Sum of 4 + 22 is: " << result << endl;

    return 0;
}