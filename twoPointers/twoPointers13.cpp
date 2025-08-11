// [Two Pointer].Bài 13. Xâu 28
// 28tech rất yêu thích con số 28 vì thế anh ta có bài toán sau và nhờ bạn tìm lời
// giải. Cho một xâu kí tự S chỉ bao gồm kí tự 2 và kí tự 8, bạn hãy tìm xâu con
//  liên tiếp có độ dài lớn nhất mà trong đó chứa nhiều nhất X kí tự 2 và Y kí tự 8.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int x, y;
    cin >> x >> y;
    int n = s.length();
    int left = 0;
    int count2 = 0;
    int count8 = 0;
    int bestL = 0;
    int bestR = 0;
    for (int right = 0; right < n; right++)
    {
        count2 += (s[right] == '2');
        count8 += (s[right] == '8');
        while (count2 > x || count8 > y)
        {
            count2 -= (s[left] == '2');
            count8 -= (s[left] == '8');
            left++;
        }
        if ((right - left) > (bestR - bestL))
        {
            bestR = right;
            bestL = left;
        }
    }
    cout << bestR - bestL + 1 << endl;
    return 0;
}
