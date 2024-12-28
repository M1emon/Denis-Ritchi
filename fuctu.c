#include<stdio.h>
int factorial(int n){
    int i,fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n,fact;
    printf("Enter any number to find factorial: ");
    scanf("%d",&n);
    if(n<0){
        printf("Factorial isn't defined for negative numbers.\n");
    }
    else{
        fact=factorial(n);
        printf("Factorial of %d: %d\n",n,fact);
    }
    return 0;
}