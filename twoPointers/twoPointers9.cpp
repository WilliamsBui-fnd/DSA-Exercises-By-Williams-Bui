// [Two Pointer].Bài 9. 28Tech_SegCount4
// Cho mảng A[] gồm N số nguyên và số nguyên K, nhiệm vụ của bạn là đếm xem có bao
// nhiêu mảng con các phần tử liên tiếp trong mảng mà độ chênh lệch giữa phần tử lớn
//  nhất và phần tử nhỏ nhất trong mảng con đó không vượt quá K

// Method 1 : Using multiset
#include <iostream>
#include <vector>
#include <set>
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
    multiset<int> check;
    int left = 0;
    int res = 0;
    for (int right = 0; right < n; right++)
    {
        check.insert(arr[right]);
        while (!check.empty() && (*check.rbegin() - *check.begin()) > k)
        {
            check.erase(check.find(arr[left]));
            left++;
        }
        res += right - left + 1;
    }
    cout << res << endl;
    return 0;
}