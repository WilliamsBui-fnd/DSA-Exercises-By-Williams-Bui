// [Mảng 1 chiều cơ bản].Bài 13. Tính tổng và tích các phần tử

//     Cho mảng số nguyên A[] gồm N phần tử,
//     hãy tính tổng, tích của các phần tử trong mảng và lấy dư với 10 ^ 9 + 7. Input Format Dòng đầu tiên là N : số lượng phần tử trong mảng;
// Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.Constraints 1 <= N <= 10 ^ 6;
// 0 <= A[i] <= 10 ^ 6 Output Format Dòng đầu tiên in ra tổng các phần tử trong mảng chia dư với 10 ^ 9 + 7;
// Dòng thứ hai in ra tích các phần tử trong mảng chia dư với 10 ^ 9 + 7;
// Sample Input 0 6 997893 995053 997553 996212 998316 992144 Sample Output 0 5977171 436766709
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    long long product = 1;
    long long sum = 0;
    int n;
    cin >> n;
    vector<int> arr(n);
    int temp = pow(10, 9) + 7;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = (sum + arr[i]) % temp;         // nen lay Modulo lien tuc de tranh tran so
        product = (product * arr[i]) % temp; // nen lay Modulo lien tuc de tranh tran so
    }
    cout << sum << endl;
    cout << product << endl;
}