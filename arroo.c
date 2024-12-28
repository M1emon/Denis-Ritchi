#include<stdio.h>
int main(){
/*int Final[6]={67,63,87,56,61,43};
int sum=0;
for(int i=0;i<6;i++){
    sum=sum+Final[i];
}
printf("The total sum of the final mark is: %d\n",sum);*/
int Final[6]={67,76,84,54,87,91};
int difference;
  int largest=Final[0];
  int smallest=Final[0];
for(int i=1;i<6;i++){
    if(Final[i]>largest){
        largest=Final[i];
    }
    if(Final[i]<smallest){
        smallest=Final[i];

    }
}
 difference=largest-smallest;
printf("The Largest element in the above array is:%d\n",largest);
printf("The Smallest elementin the above array is:%d\n ",smallest);
printf("The difference between largest and smallest element is :%d\n",difference);
return 0;



}

