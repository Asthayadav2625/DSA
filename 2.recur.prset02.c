#include<stdio.h>
int fact(int n){
//*************using recursion**********
    // if(n==0){
    //     return 1;
    // }
    // else{
    //     return fact(n-1)*n;
    // }
//******************using loop**************
int factorial=1;
for(int i=1;i<=n;i++){
    factorial=i*factorial;
    return factorial;
}
 
}
int main(){
    int result;
    result=fact(0);
    printf("The factorial of a number is:%d",result);
    return 0;
}