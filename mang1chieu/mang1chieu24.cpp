// [Mảng 1 chiều cơ bản]. Bài 21.1. Chèn 1.

// Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là chèn phần tử X vào vị trí K trong mảng sau đó in ra mảng.
// Input Format
// Dòng đầu tiên là 3 số nguyên dương N, X, K; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng
// Constraints
// 1<=K<=N<=1000; -10^3<=A[i], X<=10^3;
// Output Format
// In ra mảng sau khi chèn
// Sample Input 0
// 8 292 5
// 343 473 572 525 210 2 874 318
// Sample Output 0
// 343 473 572 525 292 210 2 874 318
#include <iostream>
#include <vector>
using namespace std;

// Method 1 :Shift elements using for loop
//  int main()
//  {
//  int n;
//  cin >> n;
//  int x, k;
//  cin >> x >> k;
//  vector<int> arr(1001);
//  for (int i = 0; i < n; i++)
//  {
//      cin >> arr[i];
//  }
//      for (int i = n; i >= k; i--)
//      {
//          arr[i] = arr[i - 1];
//      }
//      arr[k - 1] = x;
//      for (int i = 0; i <= n; i++)
//      {
//          cout << arr[i] << " ";
//      }
//      cout << endl;
//  }

// Method 2 : using insert function
int main()
{
    int n;
    cin >> n;
    int x, k;
    cin >> x >> k;
    vector<int> arr(1001);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arr.insert(arr.begin() + k - 1, x);
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
