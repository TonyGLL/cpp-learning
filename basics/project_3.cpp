#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

struct Subject
{
    string name;
    double score;
};

int main()
{
    vector<Subject> subjects_list;

    bool continueAsking = true;
    while (continueAsking)
    {
        double score = -1;
        string enterContinue = "";
        Subject m;

        cout << "Enter subject name: ";
        if (cin.peek() == '\n')
            cin.ignore();
        getline(cin, m.name);

        do
        {
            cout << "Enter score of subject (0-10): ";
            cin >> score;

            if (score < 0 || score > 10)
            {
                cout << "Error: Score must be between 0 and 10." << endl;
            }
        } while (score < 0 || score > 10);
        m.score = score;
        subjects_list.push_back(m);

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

    double result = 0.0;
    cout << "\n--- Notes resumen ---" << endl;
    for (int i = 0; i < subjects_list.size(); i++)
    {
        cout << "Subject: [" << subjects_list[i].name << "] - Score: [" << subjects_list[i].score << "]" << endl;
        result += subjects_list[i].score;
    }

    double avg = result / subjects_list.size();
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