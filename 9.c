#include <stdio.h>

int main(){
    int i,j,n,m,matrix[4][4],sum,dsum1,dsum2;

    printf("Enter the matrix:");

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf(" %d ",matrix[i][j]);
        }
        printf(" \n ");
    }

    //total sum
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            sum+=matrix[i][j];
        }
    }
    printf("sum of all the elements is: %d\n", sum);

    //diagnol sum 1
    for(i=0;i<4;i++){
        for (j = 0; j < 4; j++){
            if(i=j){
                dsum1+=matrix[i][j];
            }
        }  
    }
    printf("sum of diagnol elements 1 is: %d\n", dsum1);

    //diagnol sum 2
    for(i=0;i<4;i++){
        for (j = 3; j > 0; j--){
            dsum2+=matrix[i][j];
        }  
    }
    printf("sum of diagnol elements 2 is: %d", dsum2);
    
}