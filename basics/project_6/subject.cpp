#include <iostream>
#include <algorithm>
#include <cctype>

#include "subject.h" // Connected with header

Subject::Subject(std::string n)
{
    name = n;
    score = 0.0;
}

// GETTERS implementation
std::string Subject::getName() const
{
    return name;
}

double Subject::getScore() const
{
    return score;
}

// SETTERS implementarion
void Subject::setScore(double s)
{
    if (s < 0 || s > 10)
    {
        std::cout << "Error: Score must be between 0 and 10." << std::endl;
    }
    else
    {
        score = s;
    }
}

// 1. Function that create and return a full subject
Subject askSubject()
{
    std::string tmpName = "";
    double scoreInput = -1;

    std::cout << "Enter subject name: ";
    if (std::cin.peek() == '\n')
        std::cin.ignore();
    getline(std::cin, tmpName);

    Subject m(tmpName);

    do
    {
        std::cout << "Enter score of subject (0-10): ";
        std::cin >> scoreInput;

        // Validate
        if (scoreInput < 0 || scoreInput > 10)
        {
            std::cout << "Error: Score must be between 0 and 10." << std::endl;
        }
        else
        {
            // Save the object only if is valid
            m.setScore(scoreInput);
        }
    } while (scoreInput < 0 || scoreInput > 10);

    return m;
}

// 2. Function that return true if user types "yes"
bool askIfContinue()
{
    std::string response = "";
    do
    {
        std::cout << "Do you want enter another subject (yes/no)?: ";
        std::cin >> response;

        transform(response.begin(), response.end(), response.begin(), [](unsigned char c)
                  { return std::tolower(c); });

        if (response != "yes" && response != "no")
        {
            std::cout << "Error: Response must be between yes or no." << std::endl;
        }
    } while (response != "yes" && response != "no");

    return (response == "yes");
}

void printResults(const std::vector<Subject> &list)
{
    if (list.empty())
    {
        std::cout << "There is no subjects registered." << std::endl;
        return;
    }

    double result = 0.0;
    std::cout << "\n--- Notes resumen ---" << std::endl;
    for (int i = 0; i < list.size(); i++)
    {
        std::string name = list[i].getName();
        double score = list[i].getScore();

        std::cout << "Subject: [" << name << "] - Score: [" << score << "]" << std::endl;
        result += score;
    }

    double avg = result / list.size();
    if (avg >= 6)
    {
        std::cout << "Your average score is: " << avg << ". Great!!! you pass." << std::endl;
    }
    else
    {
        std::cout << "Your average score is: " << avg << ". Sorry!!! keep stuying." << std::endl;
    }
}