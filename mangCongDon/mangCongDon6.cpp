// Mảng Cộng Dồn - Mảng Hiệu]. Bài 6. Tổng lớn nhất
// Tèo đang làm các bài toán với truy vấn tổng trên đoạn, mỗi truy vấn yêu cầu
// các bạn tính tổng các phần tử từ chỉ số L tới chỉ số R, tuy nhiên bài toán
// này đã quá quen thuộc và dễ dàng có thể dùng mảng cộng dồn để giải quyết vì
// thế Tèo đưa ra thêm 1 yêu cầu cho bài toán.
// Cho trước các truy vấn tổng từ chỉ số L tới chỉ R, bây giờ bạn đã biết trước tất
// cả Q truy vấn bạn được phép thay đổi thứ tự các phần tử trong mảng 1 lần duy nhất
// trước khi thực hiện các truy vấn. Hãy thay đổi mảng sao cho tổng các truy vấn trên
//  đoạn đạt được giá trị lớn nhất. Một cách rõ ràng hơn, bạn hãy tính tổng mọi mảng
//  con trong từng truy vấn sau đó cộng lại để đạt được giá trị lớn nhất.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> arr1(n + 2);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        arr1[l]++;
        arr1[r + 1]--;
    }
    vector<int> pref(n);
    pref[0] = arr1[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + arr1[i];
    }
    sort(pref.begin(), pref.begin() + n, greater<int>());
    sort(arr.begin(), arr.begin() + n, greater<int>());
    long long result = 0;
    for (int i = 0; i < n; i++)
    {
        result += (arr[i] * pref[i]);
    }
    cout << result;
}