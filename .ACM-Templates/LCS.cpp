/// LCS 最长子序列
namespace LCS
{
const int MAXLEN_A = 512;
const int MAXLEN_B = 512;
int dp[MAXLEN_A][MAXLEN_B];
int deal(const char* a,const char* b)
{
    int lena=strlen(a);
    int lenb=strlen(b);
    for(int i=0;i<=lenb;i++)
    {
        for(int j=0;j<=lena;j++)
        {
            if(i==0) dp[i][j]=0;
            else if(j==0) dp[i][j]=0;
            else if(b[i-1]==a[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[lenb][lena];
}
}//End of namespace LCS
