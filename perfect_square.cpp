#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n=100;
    bool flag=false;
    for(int i=0;i<18;i++){
        if(i*i==n){
            flag=true;
            break;
        }
    }
    if(flag==true){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
     
   
}

















