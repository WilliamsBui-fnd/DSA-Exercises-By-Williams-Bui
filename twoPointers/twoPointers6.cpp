// [Two Pointer].Bài 6. 28Tech_SegCount1
// Cho mảng A[] gồm N số nguyên và số nguyên
//  S, nhiệm vụ của bạn là đếm xem có bao
//  nhiêu mảng con các phần tử liên tiếp
//  trong mảng mà tổng không vượt quá S.
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
    int res = 0;
    int left = 0;
    int sum = 0;
    for (int right = 0; right < n; right++)
    {
        sum += arr[right];
        while (sum > s && left <= right)
        {
            sum -= arr[left];
            left++;
        }
        res += (right - left + 1);
    }
    cout << res << endl;
}