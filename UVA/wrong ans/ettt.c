#include<stdio.h>
int main()
{
      int n,a[10],i,j,k,sum=0,count;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      for(i=0;i<n;i++)
      {
          sum=sum+a[i];
      }
      for(j=0;j<n;j++){
          {
              count=sum/a[j];
          }
      if(count==n)
      printf("%d",a[j])
          /*count=0;
      for(k=0;k<n;k++)
      if(k!=sum)
      count++;
      }
      }
    printf("%d",count);*/
    return 0;
}
