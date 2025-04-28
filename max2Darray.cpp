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
int max=INT_MIN;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
        
    }
    cout<<"The maximum element is:";
    cout<<max;
}