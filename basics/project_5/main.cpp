#include "subject.h"

using namespace std;

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