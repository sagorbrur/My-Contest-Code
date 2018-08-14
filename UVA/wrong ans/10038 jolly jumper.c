#include<stdio.h>
int main()
{
    int a[50],i;
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++){
        if(a[i]<0){
        printf("not");
        }
        else{
        printf("jolly");
        }
    }
    return 0;
}
