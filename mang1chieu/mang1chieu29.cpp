// [Mảng 1 chiều cơ bản]. Bài 29. Mảng đánh dấu 4

// Cho mảng số nguyên A[] gồm N phần tử, hãy tìm giá trị có số lần xuất hiện nhiều nhất trong mảng, nếu có nhiều giá trị có cùng số lần xuất hiện thì lấy số có giá trị nhỏ nhất
// Input Format
// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng
// Constraints
// 1<=N<=1000; 0<=A[i]<=10^6;
// Output Format
// In ra giá trị có số lần xuất hiện nhiều nhất kèm theo tần suất của nó
// Sample Input 0
// 5
// 9 4 0 4 5
// Sample Output 0
// 4 2
// Sample Input 1
// 5
// 1 3 7 7 5
// Sample Output 1
// 7 2
// Sample Input 2
// 5
// 1 2 3 4 5
// Sample Output 2
// 1 1
#include <iostream>
#include <vector>
#include <map>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int, int> check1;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        check1[arr[i]]++;
    }
    int maxNum = arr[0];
    for (const auto &it : check1)
    {
        if (it.second == max && it.first < maxNum)
        {
            maxNum = it.first;
        }
        if (it.second > max)
        {
            max = it.second;
            maxNum = it.first;
        }
    }
    cout << maxNum << " " << max << endl;
}
