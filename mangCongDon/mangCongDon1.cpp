// Bài 1. Xây dựng mảng cộng dồn
// Cho mảng số nguyên A[] gồm N phần tử, mảng cộng dồn của A[] là mảng F[] với tính chất F[i] lưu tổng các phần tử từ chỉ số 0 tới chỉ số i của mảng A[]. Bạn hãy xây dựng mảng cộng dồn F[]
// Input Format
//  Dòng 1 là N
//  Dòng 2 là N số nguyên Constraints
//  1<=N<=10^6
//  1<=A[i]<=10^9 Output Format
// In ra mảng cộng dồn
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
    vector<int> prefix(n);
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    for (int &x : prefix)
    {
        cout << x << " ";
    }
    cout << endl;
}