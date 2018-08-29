#include "utility.h"
#include "iostream"
using namespace std;

Utility::Utility()
{

}

void Utility::displayListInt(vector<int> listInt){
    for(size_t i=0; i<listInt.size(); ++i){
        cout << listInt[i] << " ";
    }
    cout << endl << endl;
}

/**
 * Compute the LCS algorithm
 *
 * @brief Utility::lcsMatrix
 * @param vectorX
 * @param vectorY
 * @return matrix
 */
vector<vector<int> > Utility::lcsMatrix(vector<int> vectorX, vector<int> vectorY)
{
    int n = vectorX.size() + 1;
    int m = vectorY.size() + 1;
    // initial matrix DTW
    vector< vector<int> > dtw;
    dtw.resize(n);
    for (int i = 0; i < n; ++i)
        dtw[i].resize(m);

    //====================
    dtw[0][0] = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == 0 || j == 0){
                dtw[i][j] = 0;
            }else{
                if(vectorX[i-1] == vectorY[j-1]){
                    dtw[i][j] = dtw[i-1][j-1] + 1;
                }else{
                    dtw[i][j] = 0;
                }
            }
        }
    }
    return dtw;
}

void Utility::displayMatrix(std::vector<std::vector<int> > matrix, std::vector<int> vectorX){
    // variables to keep track the longest common
    int max = 0;
    int indexMaxInX = 0;
    int indexMaxInY = 0;
    // ------
    int m = matrix[0].size();
    int n = matrix.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] > max){
                max = matrix[i][j];
                indexMaxInX = i-1;
                indexMaxInY = j-1;
            }
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // display longest common sub-sequence
    cout << "Longest common sub-sequence: ";
    if(max > 0){// ensure found the sub-sequence
        while(max>0){
            cout << vectorX[indexMaxInX-max+1] << " ";
            max--;
        }
    }
    cout << endl;
}
