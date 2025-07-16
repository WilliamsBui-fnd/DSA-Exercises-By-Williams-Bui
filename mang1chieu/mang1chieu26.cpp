// [Mảng 1 chiều cơ bản]. Bài 26. Mảng đánh dấu 1

// Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem có bao nhiêu giá trị khác nhau trong mảng?
// Input Format
// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng
// Constraints
// 1<=N<=1000; 0<=A[i]<=10^6;
// Output Format
// In ra số lượng các giá trị khác nhau xuất hiện trong mảng
// Sample Input 0
// 5
// 3 9 4 0 9
// Sample Output 0
// 4
// Sample Input 1
// 5
// 1 7 8 1 7
// Sample Output 1
// 3
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unordered_set<int> mySet;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (mySet.find(arr[i]) == mySet.end())
        {
            mySet.insert(arr[i]);
        }
    }
    cout << mySet.size();
}
//using set is the easiest way