#include<stdio.h>

int main(){
    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    int value=30;
    int found=0;
    for(int i=0;i<size;i++){
        if(arr[i]==value){
            found=1;
            printf("value %d found at index %d\n",value,i);
            break;
        }

    }
    if(!found){
        printf("value %d not found in the array.",value);
    }
    return 0;
}

