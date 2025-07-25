// [Mảng 1 chiều cơ bản]. Bài 28. Mảng đánh dấu 3
// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị xuất hiện trong mảng theo thứ tự xuất hiện trong mảng kèm theo tần suất của nó, mỗi giá trị chỉ liệt kê một lần.
// Gợi ý : Dùng map hoặc mảng đánh dấu để đếm tần suất sau đó thì duyệt mảng và gặp a[i] thì in ra a[i] kèm tần suất, sau đó có thể xóa a[i] hoặc reset tần suất a[i] về 0 để tránh in trùng
// Input Format
// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng
// Constraints
// 1<=N<=1000; 0<=A[i]<=10^6;
// Output Format
// In ra nhiều dòng, mỗi dòng gồm giá trị và tần suất viết cách nhau một khoảng trắng
// Sample Input 0
// 9
// 1 6 6 9 0 6 4 9 3
// Sample Output 0
// 1 1
// 6 3
// 9 2
// 0 1
// 4 1
// 3 1
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    // using Map and Sub_array to save appearance order
    unordered_map<int, int> myMap;
    vector<int> appear;
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (myMap[arr[i]] == 0)
        {
            appear.push_back(arr[i]);
        }
        myMap[arr[i]]++;
    }
    for (const int &it : appear)
    {
        cout << it << " " << myMap[it] << endl;
    }
}