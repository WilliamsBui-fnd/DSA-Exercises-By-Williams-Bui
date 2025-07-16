// [Mảng 1 chiều cơ bản]. Bài 16. Liệt kê
// Cho mảng số nguyên A[] gồm N phần tử, hãy đếm số lượng các phần tử thỏa mãn các yêu cầu sau
// Số lượng số nguyên tố trong dãy
// Số lượng số thuận nghịch trong dãy
// Số lượng số chính phương trong dãy
// Số lượng số có tổng chữ số của nó là số nguyên tố.
// Input Format
// Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.
// Constraints
// 1<=N<=100; 0<=A[i]<=10000;
// Output Format
// In ra 4 dòng số lượng số tương ứng với 4 yêu cầu trên
// Sample Input 0
// 6
// 4 1682 5972 6331 9872 3956
// Sample Output 0
// 0
// 1
// 1
// 4
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool nguyenTo(const int &n)
{
    if (n < 2)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
bool thuanNghich(const int &n)
{
    int rev = 0;
    int temp = n;
    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}
bool chinhPhuong(const int &n)
{
    int temp = sqrt(n);
    return temp * temp == n;
}
bool tongNT(const int &n)
{
    int temp = n;
    int sum = 0;
    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }
    if (nguyenTo(sum))
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int count1, count2, count3, count4;
    count1 = 0;
    count2 = 0;
    count3 = 0;
    count4 = 0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (nguyenTo(arr[i]))
        {
            count1++;
        }
        if (thuanNghich(arr[i]))
        {
            count2++;
        }
        if (chinhPhuong(arr[i]))
        {
            count3++;
        }
        if (tongNT(arr[i]))
        {
            count4++;
        }
    }
    cout << count1 << endl;
    cout << count2 << endl;
    cout << count3 << endl;
    cout << count4 << endl;
}