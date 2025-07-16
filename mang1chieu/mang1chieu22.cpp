// [Mảng 1 chiều cơ bản]. Bài 23. Mảng cộng dồn

// Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là xây dựng mảng F cũng có N phần tử trong đó F[0] = A[0] và F[i] = F[i -1] + A[i] với mọi i >= 1. Như vậy bạn thử nghĩ xem F[i] lưu giá trị gì?
// Input Format
// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng
// Constraints
// 1<=N<=1000; 0<=A[i]<=10^3;
// Output Format
// In ra mảng cộng dồn F
// Sample Input 0
// 5
// 124 577 658 919 87
// Sample Output 0
// 124 701 1359 2278 2365
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> prefixSum(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    prefixSum[0] = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            prefixSum[i] = prefixSum[i - 1] + arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << prefixSum[i] << " ";
    }
    cout << endl;
    return 0;
}
