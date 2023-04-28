#include<stdio.h>
void SouthAfrica(){
    printf("you are in South Africa\n");
    return;
}
 
void england(){
    printf("you are in England\n");
    SouthAfrica();
    return;
}

void australia(){
    printf("you are in Australia\n");//called australia
    england();//call england
    return;
}

void india(){
    printf("You are in India\n");//called india
    australia();//now call australia
    return;
}
int main(){
    india();//calling india
    return 0;

}