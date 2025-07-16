// Mảng 1 chiều cơ bản]. Bài 19.1. Lật ngược mảng

// Cho mảng số nguyên A[] gồm N phần tử, hãy lật ngược mảng A[] và in ra kết quả
// Input Format
// Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.
// Constraints
// 1<=N<=1000; 0<=A[i]<=10^3;
// Output Format
// In ra mảng sau khi đã đảo ngược các phần tử
// Sample Input 0
// 5
// 69 94 77 28 81
// Sample Output 0
// 81 28 77 94 69
#include <iostream>
#include <vector>
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

    // Reverse Traversing by Index
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     cout << arr[i] << endl;
    // }
    // cout << endl;

    // Reverse traversing by using reverse iterator
    // for (auto it = arr.rbegin(); it != arr.rend(); it++)
    // {
    //     cout << *it << endl;
    // }

    // Reverse traversing by using for-each + STD:: reverse
    // reverse(arr.begin(), arr.end());
    // for (auto const &x : arr)
    // {
    //     cout << x << endl;
    // }
}
