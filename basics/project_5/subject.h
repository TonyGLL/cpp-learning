#ifndef MATTER_H // This avoid that the file is included twices by error
#define MATTER_H

#include <vector>
#include <string>

using namespace std;

// 1. Struct definition
struct Subject
{
    string name;
    double score;
};

// 2. Functions prototypes (we only declare that exists)
Subject askSubject();
bool askIfContinue();
void printResults(const vector<Subject> &list);

#endif