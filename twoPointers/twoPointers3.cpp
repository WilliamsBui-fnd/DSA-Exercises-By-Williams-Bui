// [Two Pointer].Bài 3. 28Tech_Numer_Of_Equal
// Cho 2 mảng A[] và B[] có N và M phần tử đã được sắp xếp theo thứ tự tăng dần, nhiệm
// vụ của bạn là hãy đếm xem trong 2 mảng tồn tại bao nhiêu cặp i, j sao cho
// A[i] = B[j]
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> A(n), B(m);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < m; i++)
        cin >> B[i];

    int i = 0, j = 0;
    long long total = 0;

    while (i < n && j < m)
    {
        if (A[i] < B[j])
        {
            i++;
        }
        else if (A[i] > B[j])
        {
            j++;
        }
        else
        {
            // A[i] == B[j]
            int val = A[i];
            int countA = 0;
            while (i < n && A[i] == val)
            {
                countA++;
                i++;
            }

            int countB = 0;
            while (j < m && B[j] == val)
            {
                countB++;
                j++;
            }

            total += 1LL * countA * countB;
        }
    }

    cout << total << endl;
    return 0;
}
