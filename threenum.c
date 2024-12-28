#include<stdio.h>
float add(int a,int b,float c){
    float sum=(float)a+(float)b+c;
    return sum;
}

int main(){
    int n1,n2;
    float n3;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number:");
    scanf("%d",&n2);
    printf("Enter third number:");
    scanf("%f",&n3);
    float result=add(n1,n2,n3);
    printf("The outcome is :%.2f",result);
    return 0;
}
