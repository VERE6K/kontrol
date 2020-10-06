#include <iostream>
#include <vector>
#include <fstream>
 
using namespace std;
 
int main()
{
    int x = 1, counter = -1, y = 0, max = 0, Max = 0;
    ifstream FILE("D:\\A.txt");
    vector <int> file1;
    while (!FILE.eof()) {
        FILE >> y;
        if (y != 0) {
            file1.push_back(y);
            counter++;
        }
        else break;
    }
 
    for (int i = 0; i < counter; i++) {
        if (file1[i] % 7 == 0) {
            if (file1[i] > max)
                max = file1[i];
        }
        if (file1[i] % 7 != 0) {
            if (file1[i] > Max)
                Max = file1[i];
 
        }
        
    }
    if (max == 0 || Max == 0)
        cout << 1;
    else
        cout << "pervoe - " << max * Max;
}
