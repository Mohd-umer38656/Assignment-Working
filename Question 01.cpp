#include<iostream>
using namespace std;
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

    cout<<"Printing the Elements : "<<endl;
    for(int i =0;i < size;i++){
        cout<<arr[i]<<" "<<i<<" ";
        cout<<endl;
    }
    cout<<endl;
}