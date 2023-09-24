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
// void append(struct Array *arr,int key){
//     if(arr->length < arr->size){
//         arr->A[arr->length]=key;
//         arr->length++;
//     }

//}
void insert(struct Array *arr,int index,int key){
    if(index>=0 && index<arr->length){
        for(int i=arr->length;i>index;i--){
                arr->A[i+1]=arr->A[i];
            }
            arr->A[index]=key;
            arr->length++;
    }
}
int main(){
    struct Array arr={{2,4,3,5,6},10,5};
    // append(&arr,9);
    //  Display(arr);
    insert(&arr,3,8);
     Display(arr);
    return 0;
}