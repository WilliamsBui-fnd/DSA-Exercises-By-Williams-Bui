// Bài 4. Lớn hơn, nhỏ hơn
// Cho mảng số nguyên A[] gồm N phần tử và số nguyên X, hãy đếm xem trong mảng có bao nhiêu số lớn hơn X và bao nhiêu số nhỏ hơn X.
// Input Format
// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng; Dòng thứ 3 là số nguyên X
// Constraints
// 1<=N<=1000; -10^3<=A[i], X<=10^3;
// Output Format
// Dòng 1 in ra các số nhỏ hớn X, dòng 2 in ra các số lớn hơn X
// Sample Input 0
// 5
// -798 183 434 850 555
// 135
// Sample Output 0
// 1
// 4
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
    int x;
    cin >> x;
    int countBigger = 0;
    int countLower = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            continue;
        }
        if (arr[i] > x)
        {
            countBigger++;
        }
        else
        {
            countLower++;
        }
    }
    cout << countLower << endl;
    cout << countBigger << endl;
}