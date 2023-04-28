#include<stdio.h>
int main(){
    int sp;
    printf("Enter the selling price:");
    scanf("%d",&sp);
    int cp;
    printf("Enter the cost price:");
    scanf("%d",&cp);

    if(sp>cp){
        printf("profit");
    }
    if(sp=cp){
        printf("not profit not loss");
    }
    else{
        printf("loss");
    }
    return 0;
}