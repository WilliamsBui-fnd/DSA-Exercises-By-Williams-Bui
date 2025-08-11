// [Two Pointer].Bài 2. 28Tech_Smaller
// Cho 2 mảng A[] và B[] có N và M phần tử đã được sắp xếp theo thứ tự
// tăng dần, nhiệm vụ của bạn là đối với mỗi phần tử trong mảng B[] hãy đếm xem trong
//  mảng A[] có bao nhiêu phần tử nhỏ hơn nó.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    int m;
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
    int i = 0;
    vector<int> result;
    for (int j = 0; j < m; j++)
    {
        while (arr2[j] > arr1[i] && i < n)
        {
            i++;
        }
        result.push_back(i);
    }
    for (int i = 0; i < (int)result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}