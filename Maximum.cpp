#include<stdio.h>
#include<limits.h>
int MinimumElements(int arr[],int size){
    int mini = INT_MAX;
    for(int i =0;i < size;i++){
        if(arr[i] < mini){
            mini = arr[i]; 
        }
    }
    return mini;
}
int main()
{
    int arr[100];
    int size;
    printf("Enter the Size of the Array : ");
    scanf("%d",&size);
    printf("\n");
    printf("Enter the Elements : \n");
    for(int i = 0;i < size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("Printing the Elements : \n");
    for(int i = 0;i < size;i++){
        printf(" %d ",arr[i]);
    }
    printf("\n");
    //calling the maximum Function
    int ans = MinimumElements(arr,size);
    printf("This is a Smallest Element in the Array : %d",ans);
}