#include<stdio.h>
int main(){
    int A[10]={10,9,8,7,6,5,4,3,2,1};
    int n=10;
    int max=A[0];
    int min=A[0];
    for(int i=1;i<n;i++){
        if(A[i]<min){
            min=A[i];
        }
        else if(A[i]>max){
            max=A[i];
        }
    }
    printf("The max element is:%d\n" "and min element is:%d",max,min);
    return 0;
}