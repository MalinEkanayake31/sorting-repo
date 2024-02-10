#include <stdio.h>

int main() {
    int n=6;
    int arr[6]={10,6,1,33,21,32};
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    printf("sorted array \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
