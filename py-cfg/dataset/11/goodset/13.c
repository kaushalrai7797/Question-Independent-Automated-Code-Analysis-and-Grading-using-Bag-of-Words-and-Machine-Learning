#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <set>
#include <map>
#include <limits>
#include <numeric>
#include <regex>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <chrono>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    cin.ignore();
    for(int t = 0; t < T; ++t)
    {
        string recipes[2];
        cin >> recipes[0] >> recipes[1];
        cin.ignore();

        set<char> chars[2];
        map<char, int> occ[2];
        for(int i = 0; i < 2; ++i)
        {
            for(char c : recipes[i])
            {
                chars[i].insert(c);
                ++occ[i][c];
            }
        }
        if((chars[0] == chars[1]) == (occ[0] == occ[1]))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}