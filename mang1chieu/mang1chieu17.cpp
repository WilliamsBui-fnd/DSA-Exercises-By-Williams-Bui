// [Mảng 1 chiều cơ bản]. Bài 17. Mảng đối xứng
// Cho mảng số nguyên A[] gồm N phần tử, kiểm tra xem mảng có đối xứng hay không?
// Input Format
// Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.
// Constraints
// 1<=N<=10^6; 0<=A[i]<=10^6
// Output Format
// In ra YES hoặc NO tương ứng với mảng đối xứng hoặc không.
// Sample Input 0
// 20 870 1069 2363 375 2188 6059 6775 495 643 832 832 643 495 6775 6059 2188 375 2363 1069 870 Sample Output 0
// YES

// We can use method of comparing arr[i] and arr[n-1-i]
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
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
        return 0;
    }
    else
    {
        cout << "NO" << endl;
        return 0;
    }
}