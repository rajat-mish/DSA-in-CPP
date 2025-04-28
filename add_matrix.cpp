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
cout<<"Enter the row number for second matrix:";
    cin>>p;
    cout<<"Enter the column for second matrix:";
    cin>>q;
 int b[p][q];

    cout<<"Enter the elements :";
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    
    }

    int c[n][p];
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
           c[i][j]=a[i][j]+b[i][j];
        }
    
    }
cout<<"Sum is:";
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
           cout<<c[i][j]<<" ";
        }
        cout<<endl;
    
    }


}