#include <stdio.h>

int main() {
    int n=6;
    int arr[6]={10,6,1,33,21,32};
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("sorted array \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
