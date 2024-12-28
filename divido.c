#include<stdio.h>
float divide(int num1,int num2){
    if(num2==0){
        printf("No divide here!");
        return 0;
    }
    return (float)num1/num2;
}

int main(){
    int a,b;
    float result;
    printf("Enter two integers:");
    scanf("%d %d",&a,&b);
    result=divide(a,b);
    if(b!=0){
    printf("The outcome  is : %.2f\n",result);
}
}