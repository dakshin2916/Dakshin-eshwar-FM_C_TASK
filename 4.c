#include <stdio.h>

int main(){
    int i,n,pwd;
    pwd = 123;
    for(i=0;i<3;i++){
        printf("enter password");
        scanf("%d",&n);
        if(n==pwd){
            printf("login successful");
            break;
        }
        else
            if(i==3)
            printf("incorrect pwd. account locked /n");
            else
                printf("incorrect pwd. try again /n");
    }
}