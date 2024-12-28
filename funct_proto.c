#include<stdio.h>
void add(int a,int b){
    printf("Add:%d\n",a+b);

}
int add1(int c,int d){
     int sum=c+d;
      return sum;
}
int add2(){
    int n1=36,n2=38;
    int addition=n1+n2;
    return addition;

}
void add3(){
    int e=57,f=67;
    int summation=e+f;
    printf("The summ is:%d\n",summation);

}

int main(){
    int num1,num2,num3,num4;
    printf("Enter 4 numbers: ");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    add(num1,num2);//just argument passing no return type
    int result=add1(num3,num4);//printf used as it has return type as well as argument 
    printf("The result is: %d\n",result);
    int output=add2();//printf function used as it has return type
    printf("The addition is: %d\n",output);
    add3();//only call the function ,passing it without to printf as it has no return type and argument as well
    return 0;

}