#include <vector>
#include <unordered_map>
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    ;
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> appear;
    unordered_map<int, int> check;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (check[arr[i]] == 0)
        {
            appear.push_back(arr[i]);
        }
        check[arr[i]]++;
    }
    int max = INT_MIN;
    int maxFreq = INT_MIN;
    for (const int &x : appear)
    {
        if (check[x] > maxFreq)
        {
            maxFreq = check[x];
            max = x;
        }
    }
    cout << max << " " << maxFreq << endl;
}