// [Set Map].Bài 3. Phần tử riêng biệt.
// Cho dãy số A[] gồm có N phần tử, bạn hãy liệt kê các giá trị xuất hiện trong dãy theo thứ tự xuất hiện, mỗi giá trị chỉ liệt kê một lần.
// Gợi ý : Dùng set để lưu các phần tử đã được in ra trước đó, gặp phần tử a[i] thì kiểm tra nhanh trong set có giá trị a[i] chưa để in ra
// Input Format
// Dòng đầu tiên là số nguyên N. Dòng thứ 2 gồm N số nguyên A[i]
// Constraints
// 1≤ N ≤ 10^5; 0 ≤ A[i], X ≤ 10^9;
// Output Format
// In ra các giá trị xuất hiện trong mảng theo thứ tự xuất hiện.
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    set<int> arr1;
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr1.find(arr[i]) == arr1.end())
        {
            arr1.insert(arr[i]);
            temp.push_back(arr[i]);
        }
    }
    for (const int &x : temp)
    {
        cout << x << " ";
    }
    cout << endl;
}