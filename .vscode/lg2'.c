#include<stdio.h>
#include<stdlib.h>>

int mod_inverse(int a,int m);
int main()
{
    int a,m;
    scanf("%d %d",&a,&m);
    int inverse=mod_inverse(a,m);
    printf("%d",inverse);
}
int mod_inverse(int a,int m)
{
    int m0=m;
    int y=0,x=1;

    if(m==0)
        return 0;
    
    while(a>1)
    {
        int q=a/m;   
        int t=m;   //暂存

        m=a%m;
        a=t;
        t=y;  //暂存
  
        y=x-q*y;  //底层思路是用下一层的x，y计算本层的x和y
        x=t;
    }
    if(x<0)
        x+=m0;  //确保得到的逆元是正数。在模的运算中m加上k倍的模再取模得到的结果相同，因为m mod m==0

    return x;
}