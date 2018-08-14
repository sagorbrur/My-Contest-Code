/*accepted*/
#include<stdio.h>
int main()
{
    char ch[10],i=1;
    while(scanf("%s",&ch)==1){
        if(ch[0]=='*') break;
    if(ch[0]=='H')
    printf("Case %d: Hajj-e-Akbar\n",i);
    else
    printf("Case %d: Hajj-e-Asghar\n",i);
    i++;
    }
    return 0;
}
