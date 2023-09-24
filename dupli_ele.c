#include<stdio.h>
int main(){
    int n=10;
    int A[10]={3,6,8,8,10,12,15,15,15,20};
    int Lastdupli=0;
    for(int i=0;i<n;i++){
        if(A[i]==A[i+1])//&& A[i]!=Lastdupli)
        {
            printf("Duplicate element:%d\n",A[i]);
            Lastdupli=A[i];
        }
    }
    return 0;
}