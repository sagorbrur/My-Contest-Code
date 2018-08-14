//time limit execeded
#include<stdio.h>
long int arr[2000005],n,c,d,swap;
 int main()
 {
     while(scanf("%ld",&n)!=EOF){
     if(n==0) break;
    for(c=0;c<n;c++)
     scanf("%d",&arr[c]);
     for(c=0;c<(n-1);c++)
     {
         for(d=0;d<(n-c-1);d++){
         if(arr[d]>arr[d+1])
         {
             swap=arr[d];
             arr[d]=arr[d+1];
             arr[d+1]=swap;
         }

         }
     }
     for(c=0;c<n;c++)
     printf("%ld ",arr[c]);
     printf("\n");
     }
     return 0;
 }
