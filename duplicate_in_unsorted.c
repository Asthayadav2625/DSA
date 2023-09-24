#include<stdio.h>
//finding duplicate in unsorted array
int main(){
    int n=10;
    int A[10]={8,3,6,4,6,5,6,8,2,7};
    int max=8;
    int H[9]={0};
    for(int i=0;i<n;i++){
        H[A[i]]++;
    }
    for(int i=0;i<9;i++){
        if(H[i]>1){
            printf("%d is appearing at %d times\n",i,H[i]);
        }
    }
    return 0;
}