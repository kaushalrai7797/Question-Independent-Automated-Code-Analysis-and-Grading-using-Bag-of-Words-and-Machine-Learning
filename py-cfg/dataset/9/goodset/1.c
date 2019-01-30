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

    int N;
    cin >> N;
    cin.ignore();

    vector<int> values(N);
    for(int& v : values)
    {
        cin >> v;
        cin.ignore();
    }
    sort(values.begin(), values.end());
    for(int i = 1; i < N; ++i)
        values[i] += values[i - 1];

    int Q;
    cin >> Q;
    cin.ignore();

    for(int q = 0; q < Q; ++q)
    {
        int K;
        cin >> K;
        cin.ignore();

        cout << values[(N + K) / (K + 1) - 1] << endl;
    }

    return 0;
}