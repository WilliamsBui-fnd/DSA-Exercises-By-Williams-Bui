// [Mảng 1 chiều cơ bản]. Bài 33. Xoay phải

// Cho mảng A[] gồm N phần tử, hãy dịch các phần tử trong mảng sang phải K vị trí, khi dịch phải thì phần tử cuối cùng của dãy sẽ quay vòng lại trở thành phần tử đầu tiên
// Input Format
// Dòng 1 gồm N và K
// Dòng 2 gồm N số của mảng A[]
// Constraints
// 1<=N<=1000
// 1<=K<=1000
// 0<=A[i]<=100
// Output Format
// In ra mảng sau khi xoay trái
// Sample Input 0
// 9 3
// 69 3 92 57 52 67 30 42 90
// Sample Output 0
// 30 42 90 69 3 92 57 52 67
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> temp;
    k = k % n;
    for (int i = n - k; i < n; i++)
    {
        temp.push_back(arr[i]);
    }
    for (int i = 0; i < n - k; i++)
    {
        temp.push_back(arr[i]);
    }
    for (const int &x : temp)
    {
        cout << x << " ";
    }
    cout << endl;
}