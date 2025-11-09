//p1226
#include<stdio.h>
#include<stdlib.h>

int tell(int a,int b,int mod);
int main()
{
    int a,b,p;
    scanf("%d %d %d",&a,&b,&p);
    int ans=tell(a,b,p);
    printf("%d^%d mod %d=%d",a,b,p,ans);
    return 0;
}
int tell(int a,int b,int mod)
{
    if(b==0) return 1;
    if(mod==1) return 0;
    long long res=1;
    long long base=a%mod;

    while(b!=0)
    {
        if(b&1)
           {
               res=(res*base)%mod;
           }
        base=(base*base)%mod;
        b>>=1;
    }
    
    return (int)res;
}
