// [Set Map].Bài 4. Truy vấn trên mảng
//     Cho dãy số A[] gồm có N phần tử,
//     có 3 thao tác như sau :
//  Thao tác 1 : Thêm 1 phần tử X vào mảng.
//  Thao tác 2 : Xóa 1 phần tử X khỏi mảng.Trong trường hợp phần tử X không xuất hiện trong mảng, sẽ không thực hiện xóa, nếu trong mảng có nhiều phần tử X thì chỉ xóa đi 1 phần tử X trong mảng.
//  Thao tác 3 : Truy vấn xem phần tử X có xuất hiện trong mảng hay không ? Ban đầu mảng A có N phần tử, với các truy vấn phần tử X trong mảng, in ra YES nếu X xuất hiện trong mảng, ngược lại in ra NO.nput Format
//  Dòng đầu tiên là số nguyên N.
//  Dòng thứ 2 gồm N số nguyên A[i].
//  Dòng thứ 3 là số lượng thao tác Q.
//  Q dòng tiếp theo mỗi dòng là thông tin của một thao tác, gồm 2 số, số đầu tiên là loại thao tác, số tiếp theo là phần tử X trong thao tác.Constraints 1≤ N ≤ 10 ^ 4;
// 0 ≤ A[i], X ≤ 10 ^ 9;
// 1≤ Q ≤ 1000;
// 0 ≤ X ≤ 10 ^ 9;
// Output Format
//     Đối với mỗi thao tác loại 3,
//     in ra YES nếu X xuất hiện trong mảng, ngược lại in ra NO.
#include <iostream>
#include <vector>
#include <set>
using namespace std;
void INSERT(vector<int> &arr, int &x)
{
    arr.insert(arr.begin(), x);
}
void ERASE(vector<int> &arr, int &x)
{
    for (int i = 0; i < (int)arr.size(); i++)
    {
        if (arr[i] == x)
        {
            arr.erase(arr.begin() + i);
            break;
        }
    }
}
void FIND(vector<int> &arr, int &x)
{
    for (const int &a : arr)
    {
        if (a == x)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
void Function(vector<int> &arr, int &a, int &b)
{
    if (a == 1)
    {
        INSERT(arr, b);
    }
    if (a == 2)
    {
        ERASE(arr, b);
    }
    if (a == 3)
    {
        FIND(arr, b);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int f;
    cin >> f;
    for (int i = 0; i < f; i++)
    {
        int a, b;
        cin >> a >> b;
        Function(arr, a, b);
    }
}
