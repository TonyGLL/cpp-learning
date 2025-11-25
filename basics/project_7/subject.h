#ifndef MATTER_H // This avoid that the file is included twices by error
#define MATTER_H

#include <vector>
#include <string>

class Subject
{
private:
    // No one outside the class can touch this
    std::string name;
    double score;

public:
    // Constructor: Special function fot initialize th object
    Subject(std::string n);

    // Getters: Function to read the data
    std::string getName() const;
    double getScore() const;

    // Setters: Functions to modify (validating)
    void setScore(double s);
};

// 2. Functions prototypes (we only declare that exists)
Subject askSubject();
bool askIfContinue();
void printResults(const std::vector<Subject> &list);
void saveResults(const std::vector<Subject> &list);

#endif