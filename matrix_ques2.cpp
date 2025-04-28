// Write a program to rotate the matrix by 90 degrees anti-clockwise.

// Write a program to print the elements of both the diagonals in a square matrix.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m,n;
    
    cout<<"Enter the row number:";
    cin>>m;
    cout<<"Enter the column:";
    cin>>n;
int a[m][n];
    cout<<"Enter the elements :";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
        cout<<endl;
    
    }


    for(int i=m-1;i>=0;i--){
        for(int j=0;j<n;j++){
           cout<<a[j][i]<<" ";
        }cout<<endl;
    
    }












}