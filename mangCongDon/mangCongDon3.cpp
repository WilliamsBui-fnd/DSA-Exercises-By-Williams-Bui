// [Mảng Cộng Dồn - Mảng Hiệu].Bài 3. Thu hoạch cà rốt
// Tèo hiện tại đã bỏ làm lập trình viên và trở về về quê trồng rau nuôi cá,
//  anh ta có một mảnh vườn hình chữ nhật có kích thước NxM. Anh ta chia vườn
//  của mình thành NXM ô vuông và trồng vào đó một cây cà rốt, tới vụ thu hoạch
//  có những cây cà rốt bị chết và có những cây cà rốt có củ, anh ta muốn biết với
//   mỗi mảnh vườn hình chữ nhật bắt đầu từ hàng x1 tới hàng x2 và từ cột y1 tới
//   cột y2 thì số cà rốt thu hoạch được là bao nhiêu.
//   Biết rằng mảnh vườn được mô tả bởi một ma trận nhị phân, 0 tương ứng với cây cà
//   rốt chất và 1 tương ứng với cây cà rốt có củ.
// Input Format
//  Dòng 1 là N và M
//  N dòng tiếp theo mỗi dòng M số mô tả mảnh vườn
//  Dòng tiếp theo là Q : số lượng truy vấn
//  Q dòng tiếp theo mỗi dòng gồm 4 số : x1, x2, y1, y2
// Output Format
// Đối với mỗi truy vấn in ra số lượng cà rốt thu hoạch
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    vector<vector<int>> prefix(n + 1, vector<int>(m + 1, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + arr[i - 1][j - 1];
        }
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;
        cout << prefix[x2][y2] - prefix[x1 - 1][y2] - prefix[x2][y1 - 1] + prefix[x1 - 1][y1 - 1] << endl;
    }
}