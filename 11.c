#include <stdio.h>

int main(){
    int i,j,n;

    printf("enter array size:");
    scanf("%d",&n);
    int arr[n];

    printf("enter array:");
    for (i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    

    //bubble sort
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
/*
    //selection sort
    for(i=0;i<n;i++){
        int current_min = i;
        for(j=i+1;j<n;j++){
            current_min = j;
        }
    swap(arr[i],arr[current_min]);
    }
*/

//printing sorted array
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    //binary search
    int left, right, mid, target;
    left=0;
    right=sizeof(arr)/sizeof(arr[0]);
    printf("enter target:");
    scanf("%d",&target);

    while(left<=right){
        mid=left+right/2;
        if(arr[mid]==target){
            printf("element found at %d",mid);
            break;
        }
        else if(arr[mid]<target){
            left = mid+1;
        }
        else if(arr[mid]>target){
            right=mid-1;
        }
        else
            printf("target not found");
            break;
    }

}