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
    
    }
    int b[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        b[i][j]=a[j][i];
        }
    
    }

    cout<<"transpose:";

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cout<<b[i][j]<<" ";
        }
    cout<<endl;
    }
    










}