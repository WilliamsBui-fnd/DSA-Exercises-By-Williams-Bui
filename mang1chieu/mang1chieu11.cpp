// [Mảng 1 chiều cơ bản]. Bài 11. Liệt kê và đếm số fibonacci.
// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các số trong mảng là số Fibonacci.
// Input Format
// Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.
// Constraints
// 1<=N<=10^6; 0<=A[i]<=10^18
// Output Format
// In ra các số là số Fibonacci trong dãy theo thứ tự xuất hiện. Nếu trong mảng không tồn tại số Fibonacci nào thì in ra "NONE".
// Sample Input 0
// 6
// 1597 25358 7318 5878 0 2634
// Sample Output 0
// 1597 0

#include <iostream>
#include <cmath>
#include <vector>
#include <unordered_set>
using namespace std;

// Cach 1 : Brute-force : Do everything until it works
// bool check(const long long a)
// {
//     if (a == 0)
//     {
//         return true;
//     }
//     long long prev = 0;
//     long long cur = 1;
//     while (cur < a)
//     {
//         long long temp;
//         temp = cur;
//         cur += prev;
//         prev = temp;
//     }
//     if (cur == a)
//     {
//         return true;
//     }
//     return false;
// }
// int main()
// {
//     unordered_set<long long> arr1;
//     int n;
//     cin >> n;
//     vector<long long> arr(n);
//     bool flag = false;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         if (check(arr[i]) && arr1.find(arr[i]) == arr1.end())
//         {
//             cout << arr[i] << " ";
//             flag = true;
//             arr1.insert(arr[i]);
//         }
//     }
//     if (!flag)
//     {
//         cout << "NONE" << endl;
//         return 0;
//     }
// }

// Cach 2 : dung tinh chat 5n^2+4 hoac 5n^2-4 la so chinh phuong
bool isPerfectSquare(const long long &a)
{
    long long temp = sqrt(a);
    return temp * temp == a;
}
bool isFibonacci(const long long &a)
{
    long long val1 = 5 * a * a - 4;
    long long val2 = 5 * a * a + 4;
    return isPerfectSquare(val1) || isPerfectSquare(val2);
}
int main()
{
    int n;
    cin >> n;
    unordered_set<long long> arr1;
    vector<long long> arr(n);
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (isFibonacci(arr[i]) && arr1.find(arr[i]) == arr1.end())
        {
            cout << arr[i] << " ";
            flag = true;
            arr1.insert(arr[i]);
        }
    }
    if (!flag)
    {
        cout << "NONE" << endl;
        return 0;
    }
}