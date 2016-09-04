#include<cstdio>
#include<cstring>
using namespace std;

const int maxn = 30;
int n, ans;
int a[maxn][maxn];
int dep[maxn];

void dfs(int id, int data)
{
    dep[id] = 1;
    int tmp = data;
    for(int i = 1; i <= n; i ++)
    {
        if(dep[i] == 0)
            tmp += a[i][id];
        else
            tmp -= a[i][id];
    }
    if(ans < tmp)
        ans = tmp;
    for(int i = id + 1; i <= n; i ++)
    {
        if(tmp > data)
        {
            dfs(i, tmp);
            dep[i] = 0;
        }
    }
}

int main()
{
    while(~scanf("%d", &n))
    {
        for(int i = 1; i <= n; i ++)
            for(int j = 1; j <= n; j ++)
                scanf("%d", &a[i][j]);
        memset(dep, 0, sizeof(dep));
        ans = 0;
        dfs(1, 0);
        printf("%d\n", ans);
    }
}
