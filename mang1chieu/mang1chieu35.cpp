// [Mảng 1 chiều cơ bản]. Bài 35. Cộng trừ

// Cho mảng A[] gồm N phần tử là các số nguyên, bạn hãy thực hiện phép tính cộng hoặc trừ N số nguyên này theo hướng dẫn. Bạn được cấp 1 mảng B[] gồm N - 1 phần tử đại diện cho N - 1 phép toán giữa N phần tử ban đầu trong mảng, trong đó 1 tương ứng với phép cộng và 2 tương ứng với phép trừ. Ví dụ A[] = {1, 2, 3, 4, 5} và B[] = {1, 1, 2, 1} ta sẽ tính giá trị của mảng A[] = 1 + 2 + 3 - 4 + 5
// Input Format
// Dòng 1 gồm N
// Dòng 2 gồm N số của mảng A[]
// Dòng 3 gồm N - 1 phần tử của mảng B[]
// Constraints
// 1<=N<=1000
// 0<=A[i]<=100
// Output Format
// In ra kết quả của bài toán
// Sample Input 0
// 7
// 2 1 4 4 1 2 1
// 2 2 2 1 2 1
// Sample Output 0
// -7
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> arr1(n - 1);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int result = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr1[i];
        if (arr1[i] == 1)
        {
            result += arr[i + 1];
        }
        if (arr1[i] == 2)
        {
            result -= arr[i + 1];
        }
    }
    cout << result;
}