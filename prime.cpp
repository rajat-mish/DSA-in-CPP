#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number :";
    cin>>n;

    bool flag=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
if(n==1){
    cout<<"Neither prime nor composite";
}

    if(flag==true){
        cout<<"Prime number";
    }
    else{
        cout<<"Not a prime number";
    }
}