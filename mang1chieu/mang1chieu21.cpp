// [Mảng 1 chiều cơ bản].Bài 22. Xóa

//     Cho mảng số nguyên A[] gồm N phần tử và số nguyên X,
//     nhiệm vụ của bạn là tìm kiếm xem X có xuất hiện trong mảng hay không, nếu X xuất hiện trong mảng thì thực hiện xóa vị trí xuất hiện đầu tiên của X trong mảng, ngược lại in ra "NOT FOUND" nếu X không xuất hiện.Input Format Dòng đầu tiên là 2 số nguyên dương N, X;
// Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng
//         Constraints 1 <= N <= 1000;
// - 10 ^ 3 <= A[i], X <= 10 ^ 3;
// Output Format
//     In ra mảng sau khi xóa hoặc in ra NOT FOUND nếu X không xuất hiện trong mảng
//         Sample Input 0 9 212 359 523 428 952 752 195 613 6 122 Sample Output 0 NOT FOUND
//             Sample Input 1 5 3 1 3 3 2 5 Sample Output 1 1 3 2 5

#include <vector>
#include <iostream>
using namespace std;

// Method 1 : Overwite the element equal to k
// Time complexity : O(n)
// int main()
// {
//     int n;
//     cin >> n;
//     int k;
//     cin >> k;
//     bool flag = false;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == k && flag == false)
//         {

//             for (int m = i; m < n - 1; m++)
//             {
//                 arr[m] = arr[m + 1];
//             }
//             flag = true;
//         }
//     }
//     if (flag)
//     {
//         for (int i = 0; i < n - 1; i++)
//         {
//             cout << arr[i] << " ";
//         }
//     }
//     else
//     {
//         cout << "NOT FOUND" << endl;
//     }
//     cout << endl;
// }

// Method 2 : Using erase function
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    bool flag = false;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k && flag == false)
        {
            arr.erase(arr.begin() + i);
            flag = true;
        }
    }
    if (flag)
    {
        for (int i = 0; i < n - 1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        return 0;
    }
    else
    {
        cout << "NOT FOUND" << endl;
    }
}