// [Mảng 1 chiều cơ bản]. Bài 25. Mảng chẵn lẻ
// Cho mảng số nguyên A[] có không quá 10000 phần tử. Hãy xác định xem mảng là mảng chẵn hay mảng lẻ, mảng chẵn được định nghĩa là mảng mà số lượng số chẵn nhiều hơn số lượng số lẻ, ngược lại. Trong trường hợp số lượng số chẵn bằng số lượng số lẻ thì mảng được gọi là mảng chẵn lẻ.
// Input Format
// Gồm nhiều dòng, mỗi dòng có nhiều số là các số trong mảng A[], không biết trước có bao nhiêu số nhưng không vượt quá 10000 số.
// Constraints
// 1<=A[i]<=1000
// Output Format
// In ra CHAN nếu mảng chẵn, LE nếu mảng lẻ, CHANLE nếu mảng chẵn lẻ
// Sample Input 0
// 3
// 9 7 9
// 7 5 5
// 3
// Sample Output 0
// LE

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int countE = 0;
    int countO = 0;
    int x;
    while (cin >> x)
    {
        if (x % 2 == 0)
        {
            countE++;
        }
        else
        {
            countO++;
        }
    }
    if (countE > countO)
    {
        cout << "CHAN" << endl;
        return 0;
    }
    if (countO > countE)
    {
        cout << "LE" << endl;
        return 0;
    }
    if (countO == countE)
    {
        cout << "CHANLE" << endl;
        return 0;
    }
}
// In this type of problem, when using while(cin >> x),
// it's important to note that the program stops when it encounters EOT
// (End of Transmission) — not when pressing Enter. On macOS, you need
// to press Ctrl + D, while on Windows, it's Ctrl + Z followed by Enter.