#include<stdio.h>
 
int main(){
    int arr[11]={6,7,8,9,10,11,13,14,17};
    int diff,l,n,h;
    n=9;
    l=arr[0];
    h=arr[n];
    diff=l-0;
    for(int i=0;i<n+1;i++){
          if(arr[i]-i!=diff){
            while(diff<arr[i]-i){
            printf("The missing element is:%d\n",diff+i);
            //break;
            diff++;//either break or apply diff++
          }
    }
}
    return 0;
}
     