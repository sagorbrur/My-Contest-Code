#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,n;
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c&&b+c>a&&c+a>b){
        s=(float)(a+b+c);
    printf("Perimetro = %.1f\n",s);
    }
    else{
     n=(float)((a+b)/2)*c;
    printf("Area = %.1f\n",n);
    }
    return 0;

}
