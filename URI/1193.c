#include<stdio.h>
#include<string.h>
int decimal_binary(int n)  
{
    int rem, i=1, binary=0;
    while (n!=0)
    {
        rem=n%2;
        n/=2;
        binary+=rem*i;
        i*=10;
    }
    return binary;
}

int binary_decimal(int n) 

{
    int decimal=0, i=0, rem;
    while (n!=0)
    {
        rem = n%10;
        n/=10;
        decimal += rem*pow(2,i);
        ++i;
    }
    return decimal;
}
int bin_hex(int bin){
	int rem,hex=0,j=1,rem;
	while(bin!=0){
		rem=bin%10;
		hex=hex+rem*j;
		j=j*2;
		bin=bin/10;
	}
	return hex;
}
