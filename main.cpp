#include <QCoreApplication>
#include "utility.h"
#include "iostream"
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Utility util;

    // initialize vectorX
    vector<int> vectorX;
    vectorX.push_back(0);
    vectorX.push_back(2);
    vectorX.push_back(2);
    vectorX.push_back(3);
    vectorX.push_back(1);
    vectorX.push_back(1);
    vectorX.push_back(0);
    vectorX.push_back(1);
    vectorX.push_back(3);
    vectorX.push_back(3);

    // initialize vectorY
    vector<int> vectorY;
    vectorY.push_back(0);
    vectorY.push_back(2);
    vectorY.push_back(2);
    vectorY.push_back(3);
    vectorY.push_back(1);
    vectorY.push_back(0);
    vectorY.push_back(1);
    vectorY.push_back(1);
    vectorY.push_back(3);
    vectorY.push_back(3);

    // show sequence X
    cout << "sequence X: ";
    util.displayListInt(vectorX);

    // show sequence Y
    cout << "sequence Y: ";
    util.displayListInt(vectorY);

    // compute the LCS algorithm
    vector<vector<int> > lcs = util.lcsMatrix(vectorX,vectorY);

    // show result matrix and Longest common sub-sequence in vectorX
    util.displayMatrix(lcs, vectorX);

    return a.exec();
}

