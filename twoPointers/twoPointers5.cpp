// [Two Pointer].Bài 5. Phát quà Noel 2 Nhân dịp lễ Giáng Sinh 2022,
// 28Tech tổ chức phát quà cho các bạn nhỏ.Có N món quà được xếp thành
// hàng ngang, mỗi món quà đều có khối lượng cho trước.Tí là một đứa trẻ
// không như nhiều đứa trẻ khác, Tí chỉ muốn chọn ít phần quà càng tốt
// miễn là tổng các phần quà này lớn hơn hoặc bằng S.Tí chỉ có thể lựa chọn
//  các phần quà đặt cạnh nhau, bạn hãy xác định xem Tí có thể chọn tối
//  thiểu bao nhiêu phần quà để tổng khối lượng của các phần quà lớn hơn
//   hoặc bằng S.
#include <iostream>
#include <vector>
#include <climits>
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
    int res = INT_MAX;
    int sum = 0;
    for (int right = 0; right < n; right++)
    {
        sum += arr[right];
        while (sum >= s)
        {
            res = min(res, right - left + 1);
            sum -= arr[left];
            left++;
        }
    }
    cout << res << endl;
}
// [Two Pointer].Bài 5. Phát quà Noel 2 Nhân dịp lễ Giáng Sinh 2022,
// 28Tech tổ chức phát quà cho các bạn nhỏ.Có N món quà được xếp thành
// hàng ngang, mỗi món quà đều có khối lượng cho trước.Tí là một đứa trẻ
// không như nhiều đứa trẻ khác, Tí chỉ muốn chọn ít phần quà càng tốt
// miễn là tổng các phần quà này lớn hơn hoặc bằng S.Tí chỉ có thể lựa chọn
//  các phần quà đặt cạnh nhau, bạn hãy xác định xem Tí có thể chọn tối
//  thiểu bao nhiêu phần quà để tổng khối lượng của các phần quà lớn hơn
//   hoặc bằng S.
#include <iostream>
#include <vector>
#include <climits>
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
    int res = INT_MAX;
    int sum = 0;
    for (int right = 0; right < n; right++)
    {
        sum += arr[right];
        while (sum >= s)
        {
            res = min(res, right - left + 1);
            sum -= arr[left];
            left++;
        }
    }
    cout << res << endl;
}
