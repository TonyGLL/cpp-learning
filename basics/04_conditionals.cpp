#include <iostream>
using namespace std;

int main()
{
    int edad;
    cout << "Enter you age: ";
    cin >> edad;

    if (edad >= 18)
    {
        cout << "You are adult. Yeyyy. You an vote." << endl;
    }
    else if (edad > 0)
    {
        cout << "You are a minor." << endl;
    }
    else
    {
        cout << "Error: Cant have a negative age. has to be greater than 0." << endl;
    }

    return 0;
}