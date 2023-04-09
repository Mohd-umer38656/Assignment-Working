#include<iostream>
using namespace std;
void transpose(int arr[][100],int row,int col){
    cout<<"Transpose of Matrix : "<<endl;
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[100][100];
    int row,col;
    cout<<"Enter the Row Size : ";
    cin>>row;
    cout<<endl;
    cout<<"Enter the Col Size : ";
    cin>>col;
    cout<<endl;
    cout<<"Enter the Elements : "<<endl;
    for(int i =0;i < row;i++){
        for(int j = 0;j < col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"Printing the Elements : "<<endl;
    for(int i =0;i < row;i++){
        for(int j = 0;j < col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //calling the Transpose Function
    transpose(arr,row,col);

}