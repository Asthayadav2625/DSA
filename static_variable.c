#include<stdio.h>
//int x=0;//global declaration
int fun(int n){
    static int x=0; 
    if(n>0){
        x++; 
        return fun(n-1)+x;
        // printf("%d\n",n);

        }
    return 0;
}   
int main(){
    int r;
    r=fun(5);
    printf("%d\n",r);
    r=fun(5);
    printf("%d\n",r);
    return 0;
}