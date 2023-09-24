#include<stdio.h>
int main(){
    int arr[11]={6,7,8,9,10,11,13,14,15,16,17};
    int diff,l,n,h;
    n=11;
    l=arr[0];
    h=arr[n];
    diff=l-0;
    for(int i=0;i<n;i++){
          if(arr[i]-i!=diff){
            printf("The missing element is:%d",diff+i);
            //break;
            diff++;//either break or apply diff++
          }
    }
    return 0;
}