// [Mảng Cộng Dồn - Mảng Hiệu].Bài 4. Mảng hiệu
// Cho mảng số nguyên A[] gồm N phần tử,
// mảng hiệu của mảng a là mảng D[] với
// D[0] = A[0] và D[i] = A[i] - A[i - 1].Nhiệm vụ của bạn là xây dựng mảng hiệu của mảng A[]
// Input Format
//  Dòng 1 là N
//  Dòng 2 là N số nguyên
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> difArr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    difArr[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        difArr[i] = arr[i] - arr[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << difArr[i] << " ";
    }
    cout << endl;
}