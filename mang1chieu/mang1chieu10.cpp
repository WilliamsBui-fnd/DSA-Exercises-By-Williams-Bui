// [Mảng 1 chiều cơ bản]. Bài 10. Cân bằng nguyên tố

// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các chỉ số i trong mảng thỏa mãn : Tổng các phần tử bên trái i và tổng các phần tử bên phải i là các số nguyên tố
// Input Format
// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng;
// Constraints
// 1<=N<=1000; 0<=A[i], X<=10^3;
// Output Format
// In ra các chỉ số thỏa mãn trên một dòng, các số cách nhau một khoảng trắng
// Sample Input 0
// 5
// 53 5 69 47 19
// Sample Output 0
// 3
#include <iostream>
#include <vector>
using namespace std;
bool checkPrime(const int n)
{
    if (n < 2)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         int leftSum = 0;
//         int rightSum = 0;
//         for (int j = 0; j < i; j++)
//         {
//             leftSum += arr[j];
//         }
//         for (int k = i + 1; k <= n; k++)
//         {
//             rightSum += arr[k];
//         }
//         if (checkPrime(leftSum) && checkPrime(rightSum))
//         {
//             cout << i << " ";
//         }
//     }
// }
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> prefix(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        prefix[i + 1] = prefix[i] + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int leftSum = prefix[i];
        int rightSum = prefix[n] - prefix[i + 1];
        if (checkPrime(leftSum) && checkPrime(rightSum))
        {
            cout << i << " ";
        }
    }
}