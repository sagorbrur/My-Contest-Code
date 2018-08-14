#include<stdio.h>
#include<string.h>
char original[200000+5];
bool is_palin(int a,int b)
{
    while(a<b)
    {
        if(original[a]!=original[b-1])
        return false;
        a++,b--;
    }
    return true;
}
int main()
{
    int t,len,i;
    bool f;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",original);
        //int len=strlen(original);*/
        f=false;
        len=strlen(original);
        for(i=0;i<len-1;i++)
        if(f=(is_palin(0,i)&& is_palin(i+1,len-1))) break;
        if(f) printf("alindrome\n");
        else if(is_palin(0,len-1))
        printf("palindrome\n");
        else
        printf("simple\n");


    }
    return 0;
}

