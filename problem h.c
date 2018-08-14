#include<stdio.h>
int main()
{
    int a,b,n[40000],m[40000];
    int i,j,count=0;
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++)
    for(j=0;j<b;j++)
    if(n[i]==m[j])
    count++;
    printf("%d",count);
}
