//printing n-natural numbers using recursion
 
#include<stdio.h>
int sumofNum(int n){
    //***********by recursion *************
    if(n==0){
        return 0;
    }
    else
       return n+sumofNum(n-1);
    //**************by using loop****************
//    int sum=0;
//    for(int i=0;i<=n;i++){
//     sum=sum+i;
//    }
//    return sum;
//*********************using formula*******************
        // int sum=n*(n+1)/2;
        // return sum;

}
int main(){
    int a,result;
    // cout<<"Enter the number:";
    // cin>>a;
    printf("Enter the number:");
    scanf("%d",&a);
    result=sumofNum(a);
    //cout<<"sum is:"<<result;
    printf("The sum is:%d",result);
    return 0;
}