#include <iostream>

using namespace std;

int main()
{
    // Declare an array with 5 spaces
    int notes[5] = {10, 8, 9, 5, 7};

    // Access to an element (bagin at 0)
    cout << "First note is: " << notes[0] << endl;

    // Loop an array
    double sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += notes[i];
    }

    cout << "Average note is: " << sum / 5 << endl;

    return 0;
}