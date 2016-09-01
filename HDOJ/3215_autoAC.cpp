#include<stdio.h>
#include<math.h>
#include<string.h>
#define eps 1e-12
int ans[10005][10];
void init()
{
    double t,x,a;
    int i,k;
    ans[0][1]=1;
    for(i=1;i<=10000;i++)
    {
        x=(double)i;
        t=x*log10(2.0)-floor(x*log10(2.0));
        a=pow(10.0,t);
        k=(int)(a+eps);
        if(k==1)
        {
            ans[i][1]=ans[i-1][1]+1;
            ans[i][2]=ans[i-1][2];
            ans[i][3]=ans[i-1][3];
            ans[i][4]=ans[i-1][4];
            ans[i][5]=ans[i-1][5];
            ans[i][6]=ans[i-1][6];
            ans[i][7]=ans[i-1][7];
            ans[i][8]=ans[i-1][8];
            ans[i][9]=ans[i-1][9];
        }
        if(k==2)
        {
            ans[i][1]=ans[i-1][1];
            ans[i][2]=ans[i-1][2]+1;
            ans[i][3]=ans[i-1][3];
            ans[i][4]=ans[i-1][4];
            ans[i][5]=ans[i-1][5];
            ans[i][6]=ans[i-1][6];
            ans[i][7]=ans[i-1][7];
            ans[i][8]=ans[i-1][8];
            ans[i][9]=ans[i-1][9];
        }
        if(k==3)
        {
            ans[i][1]=ans[i-1][1];
            ans[i][2]=ans[i-1][2];
            ans[i][3]=ans[i-1][3]+1;
            ans[i][4]=ans[i-1][4];
            ans[i][5]=ans[i-1][5];
            ans[i][6]=ans[i-1][6];
            ans[i][7]=ans[i-1][7];
            ans[i][8]=ans[i-1][8];
            ans[i][9]=ans[i-1][9];
        }
        if(k==4)
        {
            ans[i][1]=ans[i-1][1];
            ans[i][2]=ans[i-1][2];
            ans[i][3]=ans[i-1][3];
            ans[i][4]=ans[i-1][4]+1;
            ans[i][5]=ans[i-1][5];
            ans[i][6]=ans[i-1][6];
            ans[i][7]=ans[i-1][7];
            ans[i][8]=ans[i-1][8];
            ans[i][9]=ans[i-1][9];
        }
        if(k==5)
        {
            ans[i][1]=ans[i-1][1];
            ans[i][2]=ans[i-1][2];
            ans[i][3]=ans[i-1][3];
            ans[i][4]=ans[i-1][4];
            ans[i][5]=ans[i-1][5]+1;
            ans[i][6]=ans[i-1][6];
            ans[i][7]=ans[i-1][7];
            ans[i][8]=ans[i-1][8];
            ans[i][9]=ans[i-1][9];
        }
        if(k==6)
        {
            ans[i][1]=ans[i-1][1];
            ans[i][2]=ans[i-1][2];
            ans[i][3]=ans[i-1][3];
            ans[i][4]=ans[i-1][4];
            ans[i][5]=ans[i-1][5];
            ans[i][6]=ans[i-1][6]+1;
            ans[i][7]=ans[i-1][7];
            ans[i][8]=ans[i-1][8];
            ans[i][9]=ans[i-1][9];
        }
        if(k==7)
        {
            ans[i][1]=ans[i-1][1];
            ans[i][2]=ans[i-1][2];
            ans[i][3]=ans[i-1][3];
            ans[i][4]=ans[i-1][4];
            ans[i][5]=ans[i-1][5];
            ans[i][6]=ans[i-1][6];
            ans[i][7]=ans[i-1][7]+1;
            ans[i][8]=ans[i-1][8];
            ans[i][9]=ans[i-1][9];
        }
        if(k==8)
        {
            ans[i][1]=ans[i-1][1];
            ans[i][2]=ans[i-1][2];
            ans[i][3]=ans[i-1][3];
            ans[i][4]=ans[i-1][4];
            ans[i][5]=ans[i-1][5];
            ans[i][6]=ans[i-1][6];
            ans[i][7]=ans[i-1][7];
            ans[i][8]=ans[i-1][8]+1;
            ans[i][9]=ans[i-1][9];
        }
        if(k==9)
        {
            ans[i][1]=ans[i-1][1];
            ans[i][2]=ans[i-1][2];
            ans[i][3]=ans[i-1][3];
            ans[i][4]=ans[i-1][4];
            ans[i][5]=ans[i-1][5];
            ans[i][6]=ans[i-1][6];
            ans[i][7]=ans[i-1][7];
            ans[i][8]=ans[i-1][8];
            ans[i][9]=ans[i-1][9]+1;
        }
    }
}
int main()
{
    init();
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==-1)
            break;
        for(i=1;i<9;i++)
            printf("%d ",ans[n][i]);
        printf("%d\n",ans[n][9]);
    }
    return 0;
}
