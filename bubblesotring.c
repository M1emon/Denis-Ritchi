#include<stdio.h>
void sortArrayAscending(int A[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }

        }
    }

}

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int A[n];//Declaration of array
    printf("Enter the elemnets:");
    for(int i=0;i<n;i++){
    scanf("%d",&A[i]);
    }
    sortArrayAscending(A,n);
    printf("Sorted array in ascending order:");
    for(int i=0;i<n;i++){
        printf("%d",A[i]);

    }
    printf("\n");


}