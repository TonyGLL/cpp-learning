#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
    vector<double> score_list;
    double result = 0.0;

    bool continueAsking = true;
    while (continueAsking)
    {
        double score = -1;
        string enterContinue = "";

        do
        {
            cout << "Enter score of subject (0-10): ";
            cin >> score;

            if (score < 0 || score > 10)
            {
                cout << "Error: Score must be between 0 and 10." << endl;
            }

        } while (score < 0 || score > 10);

        score_list.push_back(score);
        result += score;

        do
        {
            cout << "Do you want enter another subject (yes/no)?: ";
            cin >> enterContinue;

            transform(enterContinue.begin(), enterContinue.end(), enterContinue.begin(), [](unsigned char c)
                      { return std::tolower(c); });

            if (enterContinue != "yes" && enterContinue != "no")
            {
                cout << "Error: Response must be between yes or no." << endl;
            }
        } while (enterContinue != "yes" && enterContinue != "no");

        continueAsking = (enterContinue == "yes");
    }

    cout << "\n--- Notes resumen ---" << endl;
    for (int i = 0; i < score_list.size(); i++)
    {
        cout << "Subject " << i + 1 << ": " << score_list[i] << endl;
    }

    double avg = result / score_list.size();
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