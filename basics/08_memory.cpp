#include <iostream>

using namespace std;

// Pass value (create a copy, dont midify original)
void tryChange(int x)
{
    x = 100;
}

// Pass reference (modify original using &)
void trulyChange(int &x)
{
    x = 90;
}

int main()
{
    int number = 10;
    int *pointer = &number; // Pointer save address of 'number'

    cout << "Initial value: " << number << endl;
    cout << "Memory address: " << pointer << endl;

    tryChange(number);
    cout << "After tryChange(): " << number << " (Dont change)" << endl;

    trulyChange(number);
    cout << "After trulyChange(): " << number << " (Change)" << endl;

    return 0;
}