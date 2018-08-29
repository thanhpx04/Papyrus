#ifndef UTILITY_H
#define UTILITY_H

#include "vector"

class Utility
{
public:
    Utility();
    void displayListInt(std::vector<int> listInt);
    std::vector<std::vector<int> > lcsMatrix(std::vector<int> vectorX, std::vector<int> vectorY);
    void displayMatrix(std::vector<std::vector<int> > matrix, std::vector<int> vectorX);
};

#endif // UTILITY_H
