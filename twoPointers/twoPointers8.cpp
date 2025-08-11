// [Two Pointer].Bài 8. 28Tech_SegCount3
// Cho mảng A[] gồm N số nguyên và số nguyên K, nhiệm vụ của bạn là đếm xem có bao
// nhiêu mảng con các phần tử liên tiếp trong mảng mà số lượng phần từ khác nhau
// trong mảng con này không vượt quá K.
#include <iostream>
#include <vector>
#include <unordered_map>
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
    int left = 0, res = 0;
    int freq = 0;
    unordered_map<int, int> check;
    for (int right = 0; right < n; right++)
    {
        check[arr[right]]++;
        if (check[arr[right]] == 1)
        {
            freq++;
        }
        while (freq > k)
        {
            check[arr[left]]--;
            if (check[arr[left]] == 0)
            {
                freq--;
            }
            left++;
        }
        res += (right - left + 1);
    }
    cout << res;
}