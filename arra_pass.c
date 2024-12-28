#include<stdio.h>
void outcome(int arr[]){
    int i;
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int i;
    int num[]={10,20,30,40,55};
    outcome(num);
}