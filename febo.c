#include<stdio.h>
void PrintFibo(){
    int a=0,b=1,next;
    printf("Enter first 10 Fibonacci number: ");
    for(int i=1;i<=10;i++){
        printf("%d ",a);
        next=a+b;
        a=b;
        b=next;
    
        
    }
    printf("\n");

}

int main(){
    PrintFibo();
    return 0;

}