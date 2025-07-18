// [Mảng 1 chiều cơ bản].Bài 32. Xoay trái

//     Cho mảng A[] gồm N phần tử,
//     hãy dịch các phần tử trong mảng sang trái K vị trí, khi dịch trái thì phần tử đầu tiên của dãy sẽ quay vòng lại trở thành phần tử cuối cùng Input Format Dòng 1 gồm N và K Dòng 2 gồm N số của mảng A[] Constraints 1 <= N <= 1000 1 <= K <= 1000 0 <= A[i] <= 100 Output Format In ra mảng sau khi xoay trái Sample Input 0 8 6 16 66 96 73 11 13 99 82 Sample Output 0 99 82 16 66 96 73 11 13
#include <iostream>
#include <vector>
using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int k;
//     cin >> k;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     vector<int> temp;
//     k = k % n;
//     for (int i = k; i < n; i++)
//     {
//         temp.push_back(arr[i]);
//     }
//     for (int i = 0; i < k; i++)
//     {
//         temp.push_back(arr[i]);
//     }
//     for (int i = 0; i < (int)temp.size(); i++)
//     {
//         cout << temp[i] << " ";
//     }
// }

// Method 2 : Using 3-steps reverse
void reverse(vector<int> &arr, int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void rotateLeft(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, n - 1);
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rotateLeft(arr, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}