#include"stdio.h"
int judge(int x,int sum,int max)
{
    if(sum*2>x)    return 0;
    return x/max+1;
}
int main()
{
    int n;
    int p[111],max,sum;
    int i;
    while(scanf("%d",&n),n)
    {
        max=0;
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&p[i]);
            sum+=p[i];
            if(p[i]>max)    max=p[i];
        }
        printf("%d ",judge(50,sum,max));
        printf("%d ",judge(60,sum,max));
        printf("%d\n",judge(70,sum,max));
    }
    return 0;
}
