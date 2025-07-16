// [Mảng 1 chiều cơ bản]. Bài 15. Số lớn thứ nhất và lớn thứ 2

// Cho mảng số nguyên A[] gồm N phần tử, tìm số lớn nhất và lớn thứ 2 trong mảng. Chú ý 2 giá trị này có thể giống nhau
// Input Format
// Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.
// Constraints
// 2<=N<=10^6; 0<=A[i]<=10^6
// Output Format
// In ra số lớn thứ nhất và lớn thứ 2 trong mảng
// Sample Input 0
// 4
// 996817 993012 990914 998837
// Sample Output 0
// 998837 996817
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int oMax = -1;
    int nMax = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] >= nMax)
        {
            oMax = nMax;
            nMax = arr[i];
        } // Time complexity : O(n)
    }
    cout << nMax << " " << oMax << endl;
}
