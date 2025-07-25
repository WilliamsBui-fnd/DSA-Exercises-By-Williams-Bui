// [Mảng 1 chiều cơ bản]. Bài 9. Tần suất

// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị xuất hiện trong mảng kèm theo tần suất tương ứng, mỗi giá trị chỉ liệt kê một lần theo thứ tự xuất hiện.
// Gợi ý : Xét từng chỉ số i trong mảng, đối với mỗi chỉ số i sẽ duyệt các phần tử đứng trước nó để xem nó đã xuất hiện trước đó hay chưa, nếu chưa xuất hiện thì tiến hành duyệt các phần tử đứng sau chỉ số i và đếm xem có bao nhiêu phần tử bằng với a[i]
// Input Format
// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng;
// Constraints
// 1<=N<=1000; 0<=A[i]<=10^3;
// Output Format
// In ra nhiều dòng, mỗi dòng gồm giá trị kèm theo tần suất tương ứng
// Sample Input 0
// 7
// 4 2 6 3 0 7 7
// Sample Output 0
// 4 1
// 2 1
// 6 1
// 3 1
// 0 1
// 7 2
// Sample Input 1
// 5
// 1 1 1 1 1
// Sample Output 1
// 1 5
// Sample Input 2
// 6
// 1 2 3 3 3 3
// Sample Output 2
// 1 1
// 2 1
// 3 4

// Cách 1 : FOR trâu
#include <iostream>
#include <vector>
#include <unordered_map>
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
//     }
//     for (int i = 0; i < n; i++)
//     {
//         bool flag = false;
//         for (int j = 0; j < i; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 flag = true;
//             }
//         }
//         if (!flag)
//         {
//             int count  = 0;
//             for (int m = i; m < n; m++)
//             {
//                 if (arr[m] == arr[i])
//                 {
//                     count++;
//                 }
//             }
//             cout << arr[i] << " " << count << endl;
//         }
//     }
// }

// CÁCH 2 : dùng kết hợp unordered_map và unordered_set
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    unordered_map<int, int> map1;
    unordered_set<int> set1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        map1[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (set1.find(arr[i]) == set1.end())
        {
            cout << arr[i] << " " << map1[arr[i]] << endl;
            set1.insert(arr[i]);
        }
    }
}