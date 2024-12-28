#include<stdio.h>

int gcd(int n1,int n2){
    while(n2!=0){
        int rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    return n1;

}

int lcm(int n1,int n2){
    return (n1*n2)/gcd(n1,n2);
}
int main(){
int num1,num2;
printf("Enter two numbers:");
scanf("%d %d",&num1,num2);
printf("GCD of %d and %d is: %d\n",num1,num2,gcd(num1,num2));
printf("LCM of %d and %d is :%d\n",num1,num2,lcm(num1,num2));
return 0;
}