// [Mảng Cộng Dồn - Mảng Hiệu].Bài 2. Truy vấn tổng tĩnh
//     Cho mảng số nguyên A[] gồm N phần tử,
//     có Q truy vấn, mỗi truy vấn là 2 số L, R bạn hãy tính tổng các số từ chỉ số L tới chỉ số R của mảng.Input Format
//  Dòng 1 là N và Q
//  Dòng 2 là N số nguyên
//  Q dòng tiếp theo mỗi dòng là 1 truy vấn
#include <iostream>
#include <vector>
using namespace std;
int result(vector<int> &prefix, int &l, int &r)
{
    if (l == 0)
    {
        return prefix[r];
    }
    return prefix[r] - prefix[l - 1];
}

int main()
{
    int n;
    cin >> n;
    int q;
    cin >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> prefix(n);
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << result(prefix, l, r) << endl;
    }
}