#include<stdio.h>
int fun(int n){
    if(n>100) {
        return n-10;
    }else{
        return fun(fun(fun(n+11)));
    }
}
int main(){
    int t;
    t=fun(95);
    printf("%d",t);
    return 0;
}