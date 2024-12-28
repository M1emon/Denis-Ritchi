#include<stdio.h>
void callbyValue(int a){
    a=a+5;
    printf("Inside callbyValue method: %d\n",a);
}

void callbyReference(int *a){
    *a=*a+5;
    printf("Inside callbyreference method: %d\n",*a);
}

int main(){
    int num=10;
    printf("Original number:%d\n",num);
    callbyValue(num);
    printf("Value after callbyvalue:%d\n",num);
    callbyReference(&num);
    printf("Value after callbyreference:%d\n",num);
    return 0;
}