// [Mảng 1 chiều cơ bản]. Bài 12. Vị trí số lớn nhất, nhỏ nhất
// Cho mảng số nguyên A[] gồm N phần tử, hãy tìm vị trí(bắt đầu từ 0) cuối cùng của giá trị nhỏ nhất trong mảng và vị trí đầu tiên của giá trị lớn nhất trong mảng. Tức là nếu có nhiều số có cùng giá trị nhỏ nhất bạn phải in ra ví trí cuối cùng, và có nhiều số có cùng giá trị lớn nhất trong mảng bạn phải in ra vị trí đầu tiên lớn nhất đó.
// Input Format
// Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.
// Constraints
// 1<=N<=10^6; 1<=A[i]<=10^6
// Output Format
// In trên 1 dòng 2 chỉ số mà bạn tìm được.
// Sample Input 0
// 9
// 936 234 471 168 834 82 280 674 881
// Sample Output 0
// 5 0
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int minPos = 0;
    int maxPos = 0;
    int min = INT_MAX;
    int max = INT_MIN;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
            maxPos = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            minPos = i;
        }
    }
    cout << minPos << " " << maxPos << endl;
}