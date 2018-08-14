#include<stdio.h>
int main()
{
    int t,i,count=0;
    double len,wid,dep,weight;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {

        scanf("%lf%lf%lf%lf",&len,&wid,&dep,&weight);

        if(((len<=56&&wid<=45&&dep<=25)||(len+wid+dep<=125))&&weight<=7){
        printf("1\n");
        count++;
        }
        else
        printf("0\n");
    }
    printf("%d\n",count);
    return 0;
}
