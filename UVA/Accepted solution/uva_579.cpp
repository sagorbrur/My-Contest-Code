#include<cmath>
#include<cstdio>

using namespace std;



int main() {

    float H, M;
    while(scanf("%f:%f", &H, &M)==2) {
        if(H == 0 && M == 0) break;

        if(H == 12) H = 0;
        float hangle = 30.0 * H + (M / 60) * 30.0;
        float mangle = M * 6.0;
        float result=
        printf("%.3f\n", abs(hangle - mangle) > 180? \
            360.0 - abs(hangle - mangle) : abs(hangle - mangle));
    }
}
