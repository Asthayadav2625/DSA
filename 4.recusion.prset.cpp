#include<iostream>
#include<stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}
int ncr(int n,int r){
    int t1,t2,t3;
    t1=fact(n);
    t2=fact(r);
    t3=fact(n-r);

    return t1/(t2*t3);
}
int NCR(int n,int r){
    if(r==0||r==n){
        return 1;
    }
    else{
        return NCR(n-1,r-1)+NCR(n-1,r);
    }
}
int main(){
int result=ncr(3,2);
 printf("%d",result);

 result=NCR(4,3);
 printf("%d",result);
 return 0;
}