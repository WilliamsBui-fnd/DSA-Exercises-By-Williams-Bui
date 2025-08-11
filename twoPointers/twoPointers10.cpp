// [Two Pointer].Bài 10. TwoSum
// Cho mảng A[] gồm N phần tử và số nguyên K, hãy kiểm tra xem trong mảng có 2 phần
//  tử A[i], A[j] với i khác j và A[i] + A[j] = K hay không ? Bài này các bạn có thể
//  giải theo 3 cách : Binary search, Hai con trỏ, Map.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Method 1  : Using two pointers
// int main()
// {
//     int n;
//     cin >> n;
//     int k;
//     cin >> k;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr.begin(), arr.begin() + n);
//     int left = 0;
//     int right = n - 1;
//     while (left < right)
//     {
//         if (arr[left] + arr[right] == k)
//         {
//             cout << "YES" << endl;
//             return 0;
//         }
//         if (arr[left] + arr[right] < k)
//         {
//             left++;
//         }
//         else
//         {
//             right++;
//         }
//     }
//     cout << "NO" << endl;
//     return 0;
// }

//  Method 2 : Using binary search
// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr.begin(), arr.end());
//     for (int i = 0; i < n; i++)
//     {
//         int need = k - arr[i];
//         int l = i + 1;
//         int r = n - 1;
//         while (l <= r)
//         {
//             int mid = (l + r) / 2;
//             if (arr[mid] == need)
//             {
//                 cout << "YES" << endl;
//                 return 0;
//             }
//             if (arr[mid] < need)
//             {
//                 l = mid + 1;
//             }
//             else
//             {
//                 r = mid - 1;
//             }
//         }
//     }
//     cout << "NO" << endl;
//     return 0;
// }

// Method 3 : Using map
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<int, int> check;
    for (int i = 0; i < n; i++)
    {
        int need = k - arr[i];
        if (check.count(need))
        {
            cout << "YES" << endl;
            return 0;
        }
        check[arr[i]]++;
    }
    cout << "NO" << endl;
}