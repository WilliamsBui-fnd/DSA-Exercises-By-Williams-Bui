// [Mảng Cộng Dồn - Mảng Hiệu].Bài 5. Update Operation
// Cho mảng số nguyên A[] gồm N phần tử, có Q thao tác,
//  mỗi thao tác yêu cầu các bạn tăng tất cả các phần tử từ chỉ
//  số L tới chỉ số R lên K đơn vị. Bạn hãy in ra mảng sau khi thực
//  hiện các thao tác trên.
#include <iostream>
#include <vector>
using namespace std;
// Method 1 : Traditional way - Traversing from the beginning to the end of array
// int main()
// {
//     int n, q;
//     cin >> n >> q;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < q; i++)
//     {
//         int l, r, k;
//         cin >> l >> r >> k;
//         for (int i = l; i <= r; i++)
//         {
//             arr[i] = arr[i] + k;
//         }
//     }
//     for (const int x : arr)
//     {
//         cout << x << " ";
//     }
//     cout << endl;
// }

// Method 2 : Using difference array
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> dif(n + 1, 0);
    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;

        dif[l] += k;
        dif[r + 1] -= k;
    }
    vector<int> prefix(n, 0);
    prefix[0] = dif[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + dif[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] += prefix[i];
    }
    for (const int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}