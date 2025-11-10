#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//P3717找范围数的问题。用到了covered来确定两个范围交集处的点不会被重复标记
//思路大概是，给每个点先初始化为0，再给对应的点赋值为1，最后再统计1的数量
int main()
{
    int n,m,r;
    scanf("%d %d %d",&n,&m,&r);

    int lst[100][2];
    for(int i=0;i<m;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        lst[i][0]=x;
        lst[i][1]=y;
    }

    int count=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            int covered=0;

            for(int k=0;k<m;k++)
            {
                int x0=lst[k][0];
                int y0=lst[k][1];
                int dx=i-x0;//涉及到平方和开方，先单独设置变量存放，再进行比较，避免浮点数问题
               int dy=j-y0;

                if((dx*dx+dy*dy)<=r*r )
                {
                    covered=1;
                    break;//跳出当前循环
                }
            }
            if(covered)
                count++;
        }
    printf("%d",count);
    return 0;
}
