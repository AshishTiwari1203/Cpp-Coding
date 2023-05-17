#include <bits/stdc++.h>
using namespace std;
/* auth : sayan_shaw */
bool identical(int n, int m)
{
    if (n % 10 == m % 10)
        return true;
    return false;
}
int main(void)
{
    vector<int> H, M;
    for (int i = 0; i <= 9; i++)
    {
        H.push_back(i);
        M.push_back(i);
    }
    for (int i = 1; i <= 9; i++)
    {
        H.push_back(i * 10 + i);
        M.push_back(i * 10 + i);
    }
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int h, m, count = 0;
        cin >> h >> m;
        for (int i = 0; (H[i] < h) && (i < 19); i++)
        {
            for (int j = 0; (M[j] < m) && (j < 19); j++)
            {
                if (identical(H[i], M[j]))
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}