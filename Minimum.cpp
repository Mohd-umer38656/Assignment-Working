#include<stdio.h>
#include<limits.h>
int MinimumElements(int arr[],int size){
    int maxi = INT_MIN;
    for(int i =0;i < size;i++){
        if(arr[i] > maxi){
            maxi = arr[i]; 
        }
    }
    return maxi;
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