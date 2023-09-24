#include<stdio.h>
int main(){

    int a[10]={3,5,4,9,1,7,12,11};
    int H[10]={0};
    int l,h,n,i,j;
    l=1;
    h=12;
    n=10;

    for(i=0;i<n;i++){
        j=a[i];
        H[j]++;
    }
    for(j=0;j<n;j++){
        if(H[j]==0){
            printf("The missing number is:%d\n",j);
        }
    }
    return 0;
}