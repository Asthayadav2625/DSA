 #include<stdio.h>
struct search{
    int A[10];
    int size;
    int length;
};
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
int linearSearch(struct search *arr,int key){
   for(int i=0;i<arr->length;i++){
    if(key==arr->A[i]){
        swap(&arr->A[i],&arr->A[0]);
        return i;
    }
       
 }
    //return -1; 
}
void display(struct search arr){
    for(int i=0;i<arr.length;i++){
        printf("%d",arr.A[i]);
    }
}
int main(){
    struct search arr={{2,4,6,7,9},10,5};
    int r=linearSearch(&arr,6);
    printf("%d",r);
    return 0;
}