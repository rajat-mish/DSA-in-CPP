#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=n+1-i;j--){
            cout<<"* ";
        }cout<<endl;
    }
    
    }