// [Two Pointer].Bài 12. Sum of four values
// Cho mảng A[] gồm N phần tử và số nguyên K, hãy kiểm tra xem trong mảng có 3 phần tử
// A[i], A[j], A[k], A[l] với i, j, k, l khác nhau và A[i] + A[j] + A[k] + A[l] = K hay
//  không ?
#include <iostream>
#include <vector>
using namespace std;

// Method 1 : Using brute-force with two pointers : Time complexity : O(n^3)
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
//     for (int i = 0; i <= n - 4; i++)
//     {
//         for (int j = i + 1; j <= n - 3; j++)
//         {
//             int left = j + 1;
//             int right = n - 1;
//             while (left < right)
//             {
//                 if (arr[i] + arr[j] + arr[left] + arr[right] == k)
//                 {
//                     cout << "YES" << endl;
//                     return 0;
//                 }
//                 if (arr[i] + arr[j] + arr[left] + arr[right] < k)
//                 {
//                     left++;
//                 }
//                 else
//                 {
//                     right--;
//                 }
//             }
//         }
//     }
//     cout << "NO" << endl;
//     return 0;
// }

// Method 2 : Using vector pair : time complexity : O(n^2logn)