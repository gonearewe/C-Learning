#include <stdio.h>
int main()
{
    int num=0,a[10]={},i=0,t=1;
    scanf("%d",&num);
    for(i=0;i<10;i++)
    {
        a[i]=num/t%10;
        t=t*10;
    }
    for(i=9;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    
    return 0;

}