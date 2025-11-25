#include <iostream>

using namespace std;

int main()
{
    // FOR Loop: Use it when you known exact how many times do you want repeat something
    cout << "--- Counting with FOR ---" << endl;
    for (int i = 1; i <= 5; i++)
    {
        cout << "Number: " << i << endl;
    }

    // WHILE Loop: Use it when you dont know when its going to finish (depends of a condition)
    cout << "\n--- Guess the number (WHILE) ---" << endl;
    int secret = 7;
    int guess = 0;

    while (guess != secret)
    {
        cout << "Guess the number (1-10): ";
        cin >> guess;

        if (guess != secret)
            cout << "Incorrect, try again." << endl;
    }

    cout << "You won!!!" << endl;

    return 0;
}