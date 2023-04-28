#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);

    if(n%5==0){
        printf("divisible of 5");
    }
    else{
        printf("not divisible of 5");
    }



    return 0;
}