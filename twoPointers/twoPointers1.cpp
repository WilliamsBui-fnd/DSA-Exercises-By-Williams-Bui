//[Two Pointer]. Bài 1. Trộn 2 dãy
// Cho 2 mảng A[] và B[] có N và M phần tử đã được sắp xếp theo thứ tự tăng dần, nhiệm
// vụ của bạn là trộn 2 mảng này thành một mảng và sắp xếp theo thứ tự tăng dần. Độ
// phức tạp mong muốn là tuyến tính.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int i = 0, j = 0;
    vector<int> result;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            result.push_back(arr1[i]);
            i++;
        }
        else
        {
            result.push_back(arr2[j]);
            j++;
        }
    }
    if (i == n)
    {
        for (int a = j; a < m; a++)
        {
            result.push_back(arr2[a]);
        }
    }
    if (j == m)
    {
        for (int a = i; a < n; a++)
        {
            result.push_back(arr1[a]);
        }
    }
    for (i = 0; i < m + n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
