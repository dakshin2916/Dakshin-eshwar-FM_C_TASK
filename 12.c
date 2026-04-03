#include <stdio.h>

int main(){
    int i,j,n;
    printf("enter no of products:");
    scanf("%d",&n);

    struct inventory{
        int Product_ID;
        char Product_Name[100];
        int Quantity;
        float Price;
    };

    for(i = 0; i < n; i++){
        for (j = 0; j < 2; j++){
            scanf("%d %s %d %d",&inventory.Product_ID,&inventory.Product_Name,&inventory.Quantity,&inventory.Price);
        }
        
    }

    //to find the product with highest quantity
    for(i = 0; i < n; i++){
        for (j = 0; j < 2; j++){
            scanf("%d %s %d %d",&inventory.Product_ID,&inventory.Product_Name,&inventory.Quantity,&inventory.Price);
        }
        
    //to find the product with highest price
    for(i = 0; i < n; i++){
        for (j = 0; j < 2; j++){
            scanf("%d %s %d %d",&inventory.Product_ID,&inventory.Product_Name,&inventory.Quantity,&inventory.Price);
        }
        

    }
    
}