#include<stdio.h>
#define pf printf
#define sf scanf

int main() {
    int a,b,sum,sub,mul;
    float div;
    pf("enter a number 1:");   
    sf("%d",&a);
    pf("enter a number 2:");
    sf("%d",&b);
    sum = a+b;
    sub = a-b;
    mul =a*b;
    div =a/b;
    pf("%d \n",sum);
    pf("%d \n",sub);
    pf("%d \n",mul);
    pf("%f \n",div);

    return 0;
}