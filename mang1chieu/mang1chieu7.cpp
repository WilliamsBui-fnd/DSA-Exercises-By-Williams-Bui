// [Mảng 1 chiều cơ bản]. Bài 7. Cặp số 2
// Cho mảng số nguyên A[] gồm N phần tử, hãy tìm độ chênh lệch nhỏ nhất giữa 2 phần tử trong mảng.
// Input Format
// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng;
// Constraints
// 1<=N<=1000; 0<=A[i], X<=10^3;
// Output Format
// In ra độ chênh lệch nhỏ nhất giữa 2 phần tử bất kì trong mảng
// Sample Input 0
// 8
// 69 96 93 27 84 32 78 56
// Sample Output 0
// 3

// #include <iostream>
// #include <vector>
// #include <climits>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int minGap = INT_MAX;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (abs(arr[j] - arr[i]) < minGap)
//             {
//                 minGap = abs(arr[j] - arr[i]);
//             }
//         }
//     }
//     cout << minGap << endl;
// } //ĐỘ PHỨC TẠP Ở MỨC O(N^2)
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int minGap = INT_MAX;
    sort(arr.begin(), arr.end());   // ĐỘ PHỨC TẠP O(N LOGN)
    for (int i = 0; i < n - 1; i++) // ĐỘ PHỨC TẠP O(N)
    {
        int gap = arr[i + 1] - arr[i];
        if (gap < minGap)
        {
            minGap = gap;
        }
    }
    cout << minGap << endl;
}
// ==> ĐỘ PHỨC TẠP : O(N LOGN)