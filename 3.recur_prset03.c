//to find the power of a number

int power(int m,int n){
    if(n==0){
        return 1;
    }
    else{
        return power(m,n-1)*m;
    }
}
int power1(int m,int n){
    if(n==0){
        return 1;
    }
    else if(n%2==0){
        return power1(m*m,n/2);
    }
    else{
        return m*power1(m*m,(n-1)/2);
    }
}
#include<stdio.h>
int main(){
    int result;
    result=power(2,5);
    
    printf("%d\n",result);
    result=power1(2,5);
    printf("%d",result);
    return 0;
}