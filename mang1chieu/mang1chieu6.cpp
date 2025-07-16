// [Mảng 1 chiều cơ bản]. Bài 6. Cặp số 1
// Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem trong mảng A[] tồn tại bao nhiêu cặp số A[i], A[j] với i khác j sao cho tổng của 2 phần tử này bằng số K cho trước.
// Input Format
// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng; Dòng thứ 3 là số nguyên K
// Constraints
// 1<=N<=1000; 0<=A[i], X<=10^3;
// Output Format
// In ra số lượng cặp thỏa mãn
// Sample Input 0
// 5
// 1 2 3 1 2
// 3
// Sample Output 0
// 4

// CÁCH 1
//  #include <iostream>
//  #include <vector>
//  using namespace std;
//  int main()
//  {
//      int n;
//      cin >> n;
//      vector<int> arr(n);
//      for (int i = 0; i < n; i++)
//      {
//          cin >> arr[i];
//      }
//      int k;
//      cin >> k;
//      int count = 0;
//      for (int i = 0; i < n; i++)
//      {
//          for (int j = i + 1; j < n; j++)
//          {
//              if (arr[i] + arr[j] == k)
//              {
//                  count++;
//              }
//          }
//      }
//      cout << count << endl;
//  }
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;

    unordered_map<int, int> freq;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int needed = k - arr[i];
        if (freq.find(needed) != freq.end())
        {
            count += freq[needed];
        }
        freq[arr[i]]++; // cập nhật số lần xuất hiện
    }

    cout << count << endl;
    return 0;
}
