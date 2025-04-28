#include<iostream>
using namespace std;
int main(){
    int a=1,n;
    cout<<"Enter any number:";
    cin>>n;
    if(n==0){
        cout<<"Factorial is "<<1;
    }else{
        for(int i=1;i<=n;i++){
            a=a*i;
        }
        cout<<"Factorial is "<<a;
    }
}