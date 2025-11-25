#include <iostream>

using namespace std;

int main()
{
    int topics = 0;

    while (topics <= 0)
    {
        cout << "How many classes do you have: ";
        cin >> topics;

        if (topics <= 0)
            cout << "Please enter a number greater than 0.";
    }

    double result = 0.0;
    for (int i = 0; i < topics; i++)
    {
        double score = -1;

        do
        {
            cout << "Enter score of subject " << i + 1 << " (0-10): ";
            cin >> score;

            if (score < 0 || score > 10)
            {
                cout << "Error: Score must be between 0 and 10." << endl;
            }

        } while (score < 0 || score > 10);

        result += score;
    }

    double avg = result / topics;
    if (avg >= 6)
    {
        cout << "Your average score is: " << avg << ". Great!!! you pass." << endl;
    }
    else
    {
        cout << "Your average score is: " << avg << ". Sorry!!! keep stuying." << endl;
    }

    return 0;
}