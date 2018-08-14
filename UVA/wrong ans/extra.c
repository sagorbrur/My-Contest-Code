#include <stdio.h>
long f(int x){
    long int m;
    if(!x) return 0;
    m = x % 10;
    return (x / 10) * 45 + (m * m + m) / 2 + f(x / 10);
}
int main(){
    long int p,q;
    while(scanf("%ld%ld", &p, &q) ==2){
        if(p < 0 && q < 0) break;
        printf("%ld\n", f(q) - f(p - 1));
    }
    return 0;
}
