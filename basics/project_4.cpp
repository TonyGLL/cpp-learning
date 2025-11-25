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

// 1. Function that create and return a full subject
Subject askSubject()
{
    double score = -1;
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

    return m;
}

// 2. Function that return true if user types "yes"
bool askIfContinue()
{
    string response = "";
    do
    {
        cout << "Do you want enter another subject (yes/no)?: ";
        cin >> response;

        transform(response.begin(), response.end(), response.begin(), [](unsigned char c)
                  { return std::tolower(c); });

        if (response != "yes" && response != "no")
        {
            cout << "Error: Response must be between yes or no." << endl;
        }
    } while (response != "yes" && response != "no");

    return (response == "yes");
}

void printResults(const vector<Subject> &list)
{
    if (list.empty())
    {
        cout << "There is no subjects registered." << endl;
        return;
    }

    double result = 0.0;
    cout << "\n--- Notes resumen ---" << endl;
    for (int i = 0; i < list.size(); i++)
    {
        cout << "Subject: [" << list[i].name << "] - Score: [" << list[i].score << "]" << endl;
        result += list[i].score;
    }

    double avg = result / list.size();
    if (avg >= 6)
    {
        cout << "Your average score is: " << avg << ". Great!!! you pass." << endl;
    }
    else
    {
        cout << "Your average score is: " << avg << ". Sorry!!! keep stuying." << endl;
    }
}

int main()
{
    vector<Subject> subjects_list;
    bool continueAsking = true;

    while (continueAsking)
    {
        subjects_list.push_back(askSubject());
        continueAsking = askIfContinue();
    }

    printResults(subjects_list);

    return 0;
}