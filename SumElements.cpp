#include<iostream>
using namespace std;
void sumAllElements(int *arr,int size){
    int sum = 0;
    for(int i = 0;i < size;i++){
        sum += arr[i];
    }
    cout<<endl;
    cout<<"This is a All Elements Sum : "<<sum<<endl;
}
int main()
{
    int arr[100];
    int size;
    cout<<"Enter the Size of The Array : ";
    cin>>size;
    cout<<endl;
    cout<<"Enter the Elements : "<<endl;
    for(int i = 0;i < size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Printing the Elements : "<<endl;
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sumAllElements(arr,size);
    return 0;
}