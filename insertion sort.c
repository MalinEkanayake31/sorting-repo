#include <stdio.h>

int main() {
    int n=6;
    int arr[6]={10,6,1,33,21,32};
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    printf("sorted array \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
