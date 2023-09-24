#include<stdio.h>
int main(){
    int n=10;
    int A[]={3,6,8,8,10,12,15,15,15,20};
    int max=A[n-1];
    int H[20]={0};
    for(int i=0;i<n;i++){
        H[A[i]]++;
    }
    for(int i=0;i<max;i++){
        if(H[i]>1){
            printf("%d is appearing at %d times\n",i,H[i]);
        }
    }

    return 0;
}