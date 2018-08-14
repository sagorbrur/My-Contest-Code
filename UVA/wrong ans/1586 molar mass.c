#include<stdio.h>
#include<string.h>
double M(char x)
{
    if(x=='C')
    return 12.01;
    if(x=='H')
    return 1.008;
    if(x=='O')
    return 16.00;
    if(x=='N')
    return 14.01;
}
int main()
{
    char str[100];
    int N,i,j;
    double sum;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%s",str);
        sum=0;
        for(i=0;i<strlen(str);i++)
        {
            if(str[i]<='Z'&&str[i]>='A')
            {
                if(str[i+1]<='9'&&str[i+1]>='1')
                {
                    if(str[i+2]<='9'&&str[i+2]>='1')
                    {
                        sum=sum+M(str[i])*((str[i+1]-'0')*10+str[i+2]-'0');
                        i=i+2;
                    }
                    else
                    {
                        sum=sum+M(str[i])*(str[i+1]-'0');
                        i++;
                    }
                }
                else
                {
                    sum+=M(str[i]);
                }
            }
        }
        printf("%.3lf\n",sum);
    }
    return 0;
}
