#include<stdio.h>
//function with no return ,no argument
void greet(){
    printf("Hello world to the programming era!");
}
//function with no return,but argument
void calculateSum(int a,int b){
    int sum=a+b;
    printf("The sum of %d and %d is : %d\n",a,b,sum);
}

//function with return ,but no argument
int getCurrentyear(){
    return 2024;
}

//function with return and argument
int findGCD(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main(){
    greet();
    calculateSum(10,20);
    int year=getCurrentyear();
    printf("The current year is:%d\n",year);
    int gcd= findGCD(58,96);
    printf("The gcd of 58 and 96 is: %d\n",gcd);
    return 0;

}