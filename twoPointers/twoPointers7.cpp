// [Two Pointer].Bài 7. 28Tech_SegCount2
// Cho mảng A[] gồm N số nguyên và số nguyên S, nhiệm vụ của bạn là đếm xem có bao
// nhiêu mảng con các phần tử liên tiếp trong mảng mà tổng ít nhất bằng S
// Tong >= S
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int left = 0;
    int sum = 0;
    int res = 0;
    for (int right = 0; right < n; right++)
    {
        sum += arr[right];
        while (sum >= s)
        {
            sum -= arr[left];
            res += (n - right);
            left++;
        }
    }
    cout << res << endl;
}