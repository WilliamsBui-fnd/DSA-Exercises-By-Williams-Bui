// [Two Pointer]. Bài 11. Sum of three values
// Cho mảng A[] gồm N phần tử và số nguyên K, hãy kiểm tra xem trong mảng
// có 3 phần tử A[i], A[j], A[k] với i, j, k khác nhau và A[i] + A[j] + A[k]
// = K hay không ?
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int right = n - 1;
    for (int i = 0; i < n - 2; i++) // i phải nhỏ hơn n-2 để đảm bảo đủ 3 phần tử
    {
        int left = i + 1;

        while (left < right)
        {
            if (arr[i] + arr[left] + arr[right] == k)
            {
                cout << "YES" << endl;
                return 0;
            }
            if (arr[i] + arr[left] + arr[right] <= k)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        right = n - 1;
    }
    cout << "NO" << endl;
    return 0;
}