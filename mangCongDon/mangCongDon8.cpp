// [Mảng Cộng Dồn - Mảng Hiệu].Bài 8. PrefixPrefix
// Cho mảng A[] có N phần tử và M thao tác, mỗi thao tác yêu cầu bạn tăng các phần tử
// ở vị trí L tới R của mảng lên D đơn vị (1<=L<=R<=N). Các thao tác này được đánh số
// từ 1 đến M, ngoài ra Tèo lại muốn thực hiện K truy vấn, mỗi truy vấn Tèo lại thực
// hiện các thao tác từ x tới y theo số thứ tự thao tác (1<=x<=y<=M). Bạn hãy giúp Tèo
//  in ra mảng A[] sau K truy vấn
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<long long> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    vector<int> l(m + 1);
    vector<int> r(m + 1);
    vector<int> d(m + 1);
    for (int i = 1; i <= m; i++)
    {
        cin >> l[i] >> r[i] >> d[i];
    }
    vector<int> cnt_op(m + 2, 0);
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        cnt_op[x] += 1;
        cnt_op[y + 1] -= 1;
    }
    vector<int> cnt(m + 1, 0);
    for (int i = 1; i <= m; i++)
    {
        cnt[i] = cnt[i - 1] + cnt_op[i];
    }
    vector<long long> diff(n + 2, 0);
    for (int i = 1; i <= m; i++)
    {
        int times = cnt[i];
        diff[l[i]] += d[i] * times;
        diff[r[i] + 1] -= d[i] * times;
    }
    for (int i = 1; i <= n; i++)
    {
        diff[i] += diff[i - 1];
        arr[i] += diff[i];
        cout << arr[i] << " ";
    }
    cout << endl;
}