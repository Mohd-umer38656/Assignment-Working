#include<stdio.h>
void reversingArray(int arr[],int size){
    int si = 0;
    int ei = size - 1;
    while(si <= ei){
        int temp = arr[si];
        arr[si] = arr[ei];
        arr[ei] = temp;
        si++;
        ei--;
    }
}
void printingElements(int arr[],int size){
    for(int i = 0;i < size;i++){
        printf(" %d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[100];
    int size;
    printf("Enter the Size of the Array : ");
    scanf("%d",&size);
    printf("\n");
    printf("Enter the Elements : ");
    for(int i = 0 ;i < size;i++){
        scanf("%d",&arr[i]);
    }
      printf("\n");
    printf("\nPrinting the Elements : ");
    for(int i = 0;i < size;i++){
        printf(" %d ",arr[i]);
    }
    printf("\n");
    //calling the Reversing function
    reversingArray(arr,size);
    printingElements(arr,size);
}