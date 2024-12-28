#include<stdio.h>

/*int add(int num1,int num2){
    int s=num1+num2;
    return s;

}
int main(){
    int n1,n2,sum;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    sum=add(n1,n2);
    printf("sum=%d",sum);
    return 0;
    
}*/
void add(int num1,int num2){
    printf("add:%d\n",num1+num2);
}

int main(){
    int n1,int n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    add(n1,n2);
    return 0;
}