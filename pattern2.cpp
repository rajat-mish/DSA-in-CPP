#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    for(int i=1;i<=n;i+=2){
        for(int j=1;j<=i;j++){
           if(j%2!=0){
             cout<<j<<" ";
           }
        }cout<<endl;
    }
}