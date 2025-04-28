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

    if(n==p){
       int res[m][q];

   for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        res[i][j]=0;
        for(int k=0;k<p;k++){
            res[i][j]=a[i][k]+b[k][j];
        }
    }
   }

   
   for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
       cout<<res[i][j]<<" ";
    }
    cout<<endl;
   }
   












    }else{
        cout<<"Multiplication not possible";
    }




}