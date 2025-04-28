//Write a program to print the matrix in wave form.

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


    for(int i=0;i<m;i++){
        
            if(i%2==0){
                for(int j=n-1;j>=0;j--){
                     cout<<a[j][i]<<" ";
                }
            }else{
                for(int j=0;j<n;j++){
                    cout<<a[j][i]<<" ";
                }
            }
        
    }












}