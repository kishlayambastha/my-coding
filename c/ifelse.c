#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);

    if(n%4==0){
        printf("leap year");
    }
    else{
        printf("non leap year");
    }



    return 0;

}