//[Set Map]. Bài 2. Truy vấn phần tử trong mảng
// Cho dãy số A[] gồm có N phần tử, bạn hãy trả lời các truy vấn để xác định xem
// phần tử X nào đó có nằm trong mảng hay không? Bạn hãy thử giải bài này bằng 3
// cách : Set, Map, Binary Search.

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     set<int> search;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         if (search.find(arr[i]) == search.end())
//         {
//             search.insert(arr[i]);
//         }
//     }
//     int p;
//     cin >> p;
//     vector<int> find(p);
//     for (int i = 0; i < p; i++)
//     {
//         cin >> find[i];
//         if (search.find(find[i]) != search.end())
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
// }

// Binary Search
bool binarySearch(const vector<int> &arr, int x)
{
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == x)
        {
            return true;
        }
        if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else if (arr[mid > x])
        {
            right = mid - 1;
        }
    }
    return false;
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
    int p;
    cin >> p;
    vector<int> find(p);
    for (int i = 0; i < p; i++)
    {
        cin >> find[p];
        if (binarySearch(arr, find[p]))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}