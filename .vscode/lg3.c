#include<stdio.h>
#include<stdlib.h>

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

    int m[n+1][n+1];

}