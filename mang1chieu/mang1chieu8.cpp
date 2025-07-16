// [Mảng 1 chiều cơ bản]. Bài 8. Liệt kê các giá trị khác nhau

// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị khác nhau trong mảng theo thứ tự xuất hiện, mỗi giá trị chỉ liệt kê 1 lần. Ở thời điểm hiện tại các bạn có thể for trâu để giải bài này, sau này sẽ dùng cách tối ưu hơn.
// Gợi ý : Duyệt qua từng chỉ số i của mảng, nếu kiểm tra được đây là giá trị đầu tiên mà bạn gặp thì sẽ in ra giá trị này, tức là trước đó trong đoạn từ 0 tới chỉ số i - 1 ko có giá trị nào giống A[i], ví dụ mảng A = {1, 1, 3, 1, 5, 1, 8}, khi bạn xét số 5 bạn sẽ ra nó vì trước nó ko có giá trị nào giống nó cả. Để mà kiểm tra có in ra giá trị A[i] hay không bạn làm 1 vòng for duyệt từ chỉ số 0 tới chỉ số i - 1 và kiểm tra xem có giá trị nào bằng với A[i] hay ko, nếu ko có thì hãy in ra, có thể kiểm tra bằng cách sử dụng 1 biến đánh dấu.

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         bool flag = false;
//         for (int j = 0; j <= i - 1; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 flag = true;
//             }
//         }
//         if (!flag)
//         {
//             cout << arr[i] << " ";
//         }
//     }
// }

// dùng set
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    unordered_set<int> arr1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr1.find(arr[i]) == arr1.end())
        {
            cout << arr[i] << " ";
            arr1.insert(arr[i]);
        }
    }
}