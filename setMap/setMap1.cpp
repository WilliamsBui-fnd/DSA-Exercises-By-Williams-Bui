// [Set Map]. Bài 1. Phần tử phân biệt
// Cho dãy số A[] gồm có N phần tử, bạn hãy đếm xem trong mảng có bao nhiêu phần tử phân biệt? Chú ý giải bài này với 3 cách : Sử dụng set, map, sắp xếp.
// Input Format
// Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]
// Constraints
// 1≤ N ≤ 10^5; -10^9 ≤ A[i] ≤ 10^9
// Output Format
// In ra số lượng phần tử khác nhau trong mảng.
// Sample Input 0
// 5 2 1 2 1 3
// Sample Output 0
// 3

// Method 1 : Using set
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     set<int> arr1;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         if (arr1.find(arr[i]) == arr1.end())
//         {
//             arr1.insert(arr[i]);
//         }
//     }
//     cout << arr1.size() << endl;
// }

// Method 2 : Using map
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     map<int, int> freq;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         freq[arr[i]]++;
//     }
//     cout << freq.size();
// }

// Method 3 : Order array
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] != arr[i])
        {
            count++;
        }
    }
    cout << count;
}