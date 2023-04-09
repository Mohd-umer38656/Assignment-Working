#include<iostream>
using namespace std;
void multiplicationMatrix(int arr[][3],int row,int col,int arr2[][3],int row1,int col1){
  int k;
  
     
}
int main()
{
    int  arr[100][3],arr1[100][3];
    int row,col,row1,col1;
    cout<<"Enter the Row Size : ";
    cin>>row;
    cout<<"Enter the Col Size : ";
    cin>>col;
    cout<<endl;
    cout<<"Enter the Elements : "<<endl;
    for(int i = 0;i < row;i++){
        for(int j =0;j < col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"Printing the Elements : "<<endl;
        for(int i = 0;i < row;i++){
        for(int j =0;j < col;j++){
            cout<<arr[i][j]<<" ";
        }
    }
     cout<<"Enter the Row 1 Size : ";
     cin>>row1;
     cout<<endl;
     cout<<"Enter the Col 1 Size : ";
     cin>>col1;
     cout<<endl;
     for(int i = 0;i < row1;i++){
        for(int j =0;j < col1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"Printing the Elements : "<<endl;
        for(int i = 0;i < row1;i++){
        for(int j =0;j < col1;j++){
            cout<<arr[i][j]<<" ";
        }
    } 
    //callin the multiplication matrix
    multiplicationMatrix(arr,row,col,arr1,row1,col1);  
}