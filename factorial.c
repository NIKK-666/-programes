#include<stdio.h>
#define pf printf
#define sf scanf

int main(){
    int n,i,fact=1;
    pf("enter a no. : ");
    sf("%d",&n);
    for(i=n;i>=1;i--){
        fact=fact*i;
    }
    pf("%d",fact);
    return 0;

}