#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m,n,p,q;
    
    cout<<"Enter the row number for first matrix:";
    cin>>m;
    cout<<"Enter the column for first matrix:";
    cin>>n;
int a[m][n];
    cout<<"Enter the elements :";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    
    }

for(int i=0;i<m;i++){
    if(i%2==0){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
    }else{
        for(int j=n-1;j>=0;j--){
            cout<<a[i][j]<<" ";
        }
    }
}










}