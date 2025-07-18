// [Mảng 1 chiều cơ bản]. Bài 34. Unique

// Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn là xóa các phần tử trong mảng sao cho không có 2 phần tử liền kề có giá trị giống nhau. Ví dụ mảng A[] = {1, 1, 2, 2, 2, 3, 3, 2, 1, 4} sau khi xóa sẽ được A[] = {1, 2, 3, 2, 1, 4}
// Input Format
// Dòng 1 gồm N
// Dòng 2 gồm N số của mảng A[]
// Constraints
// 1<=N<=1000
// 0<=A[i]<=100
// Output Format
// In ra mảng sau khi xóa
// Sample Input 0
// 11
// 2 3 3 0 0 0 3 3 3 3 4
// Sample Output 0
// 2 3 0 3 4
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
    vector<int> temp;
    temp.push_back(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            temp.push_back(arr[i]);
        }
    }
    for (const int &x : temp)
    {
        cout << x << " ";
    }
    cout << endl;
}