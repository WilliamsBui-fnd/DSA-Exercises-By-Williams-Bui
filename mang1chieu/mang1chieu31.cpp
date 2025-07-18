// [Mảng 1 chiều cơ bản]. Bài 31. Chèn mảng

// Cho mảng A[], B[] gồm N và M phần tử, hãy chèn mảng B vào chỉ số P của mảng A và in ra mảng A[] sau khi chèn.
// Input Format
// Dòng 1 gồm N, M và P
// Dòng 2 gồm các phần trong mảng A[]
// Dòng 3 gồm các phần tử trong mảng B[]
// Constraints
// 1<=N<=M<=1000
// 0<=P<=N - 1
// 0<=A[i], B[i]<=1000
// Output Format
// In ra mảng A[] sau khi chèn
// Sample Input 0
// 10 7 5
// 64 94 78 99 50 21 57 41 68 16
// 73 91 15 89 2 85 61
// Sample Output 0
// 64 94 78 99 50 73 91 15 89 2 85 61 21 57 41 68 16
#include <iostream>
#include <vector>
using namespace std;
// int main()
// {
//     int n, m, p;
//     cin >> n >> m >> p;
//     vector<int> arr(n);
//     vector<int> arr1(m);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cin >> arr1[i];
//     }
//     arr.resize(m + n);
//     for (int i = n - 1; i >= p; i--)
//     {
//         arr[i + m] = arr[i];
//     }
//     for (int i = p; i < p + m; i++)
//     {
//         arr[i] = arr1[i - p];
//     }
//     for (int i = 0; i < m + n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// Method 2 : Using Insert function of STD::vector
int main()
{
    int n, m, p;
    cin >> n >> m >> p;
    vector<int> arr(n);
    vector<int> arr1(m);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    arr.insert(arr.begin() + p, arr1.begin(), arr1.end());
    for (int &x : arr)
    {
        cout << x << " ";
    }
}