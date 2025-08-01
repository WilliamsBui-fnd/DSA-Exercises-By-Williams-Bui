// [Mảng Cộng Dồn - Mảng Hiệu].Bài 7. Pha Trà Sữa
//  Tèo mới lên đại học và kiếm được một công việc tại hàng trà sữa,
// có không quá 200000 cốc trà sữa xếp thành 1 hàng ngang, ban đầu mỗi cốc
// trà sữa có độ ngọt bằng 0. Tèo tiến hành liên tiếp N các thao tác, mỗi thao
// tác anh ta sẽ thêm 1 gam đường vào các cốc trà sữa từ vị trí L tới vị trí
// R.Sau cùng những cốc trà sữa có lượng đường >= K gam được chuyển đi để phục vụ
// khách hàng.Có nhiều câu hỏi, mỗi câu hỏi yêu cầu bạn trả lời trong các cốc trà
// từ thứ L tới thứ R có bao nhiêu cốc đạt chuẩn để bán cho khách hàng ?
// Input Format 62 5253 51 25 24
//  Dòng 1 gồm 3 số N, K, Q với Q là số truy vấn
//  N dòng tiếp theo mỗi dòng gồm 2 số L, R(thao tác)
//  Q dòng tiếp theo mỗi dòng là 2 số L, R(truy vấn)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> arr(200000, 0);
    vector<int> arr1(200002, 0);
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        arr1[l]++;
        arr1[r + 1]--;
    }
    vector<int> pref(200000, 0);
    pref[0] = arr1[0];
    for (int i = 1; i < 200000; i++)
    {
        pref[i] = pref[i - 1] + arr1[i];
    }
    for (int i = 0; i < 200000; i++)
    {
        arr[i] += pref[i];
    }
    vector<int> pref2(200000, 0);
    for (int i = 0; i < 200000; i++)
    {
        pref2[i] = (arr[i] >= k) ? 1 : 0;
    }
    vector<int> result(200000, 0);
    result[0] = pref2[0];
    for (int i = 1; i < 200000; i++)
    {
        result[i] = result[i - 1] + pref2[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (l == 0)
        {
            cout << result[r] << endl;
        }
        else
        {
            cout << result[r] - result[l - 1] << endl;
        }
    }
}