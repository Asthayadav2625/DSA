#include<stdio.h>
int main(){
     
    int sum=0,s;
    int n=10;
    int arr[10]={1,2,3,4,5,6,7,9,10};
    s=n*(n+1)/2;
    for(int i=0;i<10;i++){
        sum=sum+arr[i];
    }
    int num=s-sum;
    printf("The missing number is:%d",num);
    return 0;
}