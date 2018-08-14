#include<stdio.h>
#include<string.h>
int add_digit(int n)
{
    int rem,sum=0;
    if(n==0)
        return 0;
    while (n != 0)
   {
      rem = n % 10;
      sum = sum + rem;
      n = n / 10;
   }
   return sum;

}
int main()
{
    char s[25],c[25];
    int i,sum,l,j,sum1,l1,s1,s2;
    float result;
    while(scanf("%s%s",s,c)!=EOF){
    sum=0;
    sum1=0;
    l=strlen(s);
    l1=strlen(c);
    for(i=0;i<l;i++){
    if(s[i]>64&&s[i]<91)
    sum=sum+s[i]-38;
    else if(s[i]>96&&s[i]<123)
    sum=sum+s[i]-96;
    }
    for(j=0;j<l1;j++){
    if(c[j]>64&&c[j]<91)
    sum1=sum1+c[j]-38;
    else if(c[j]>96&&c[j]<123)
    sum1=sum1+c[j]-96;
    }
    s1=add_digit(sum);
    s2=add_digit(sum1);
    if(s1>s2)
        result=(float)s2*100/(float)s1;
    else
        result=(float)s1*100/(float)s2;
    printf("%.2f\n",result);
    }
    return 0;

}
