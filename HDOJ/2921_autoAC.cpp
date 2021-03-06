#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<string>
#include<map>
#include<cmath>
using namespace std;
int f[410][820], val[410][810];
int main()
{
    int n, kase = 0;
    while (cin >> n)
    {
        if (n == 0) break;
        for (int i = 1; i <= n; i++)
        {
            f[i][0] = 0;
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                scanf("%d", &val[i][j]);
                f[i][j] = f[i][j - 1] + val[i][j];
            }
        }
        int ans = -0x3f3f3f3f;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= 2 * i - 1; j += 2)
            {
                int tmp = 0;
                for (int k = i; k <= n; k++)
                {
                    if (j + 2 * (k  - i) > 2 * k - 1) break;
                    tmp += f[k][j + 2 * (k - i)] - f[k][j - 1];
                    if (tmp > ans) ans = tmp;
                }
            }
        for (int i = n; i >= 1; i--)
        {
            for (int j = 2; j <= 2 * i - 1; j += 2)
            {
                int tmp = 0;
                for (int k = i; k >= 1; k--)
                {
                    if (j - 2  * (i - k) < 1) break;
                    if (j > 2 * k - 1) break;
                    tmp += f[k][j] - f[k][j - 2 * (i - k) - 1];
                    if (tmp > ans) ans = tmp;
                }
            }
        }
        kase++;
        cout << kase << ". " << ans << endl;
    }
}
