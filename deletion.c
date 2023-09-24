#include<stdio.h>
struct Array{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        printf("%d\n",arr.A[i]);
    }

}
int deletion(struct Array *arr,int index){
    int x=arr->A[index];
    if(index>=0 && index<arr->length){
        for(int i=index+1;i<arr->length;i++){
        arr->A[i-1]=arr->A[i];
        }
        arr->length--;
        }
        return x;
}

int main(){
    struct Array arr={{2,4,3,5,6},10,5};
    // append(&arr,9);
    //  Display(arr);
     int x=deletion(&arr,4);
     printf("The deleted value is:%d\n",x);
     Display(arr);
    return 0;
}