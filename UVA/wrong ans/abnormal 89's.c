#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    char a[200000],b[200000];
    scanf("%d",&t);
    while(t--){
    scanf("%s",a);
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
    printf("palindrome\n");
    else
    printf("simple\n");
    }
    return 0;

}
