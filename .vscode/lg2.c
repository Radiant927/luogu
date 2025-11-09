//P3811
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int is_prime(int x);
int mod_inverse(int a,int mod);
int main()
{
    int n,p;
    scanf("%d %d",&n,&p);
    while(is_prime(p)==0)
    {
        scanf("%d %d",&n,&p);
    }

    for(int i=1;i<=n;i++)
    {
        int temp=mod_inverse(i,p);
        printf("%d\n",temp);
    }


}
int is_prime(int x)
{
    if(x<2)
        return 0;
    else if(x==2)
        return 1;
    else if(x%2==0)
        return 0;
    else{
        for(int i=3;i<=(int)(sqrt(x))+1;i+=2)
        {
            if(x%i==0)
                return 0;
        }
    }
    return 1;
}
int mod_inverse(int a,int mod)
{
    int m0=mod;
    int x=1,y=0;

    if(mod==1) return 0;

    while(a>1)
    {
        int q=a/mod;
        int t=mod;

        mod=a%mod;
        a=t;
        t=y;

        y=x-q*y;
        x=t;
    }

    if(x<0)
        x+=m0;
    return x;
}