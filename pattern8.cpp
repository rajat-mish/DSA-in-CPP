#include<iostream>
using namespace std;
int main(){
for(int i=1;i<=7;i++){
    if(i<=7/2 +1){
for(int j=1;j<=7-i  ;j++){
        cout<<" ";
    }for(int k=1;k<=i  ;k++){
        cout<<"*";
    }
    cout<<endl;
    }
    else{
        for(int j=1;j<=i-1  ;j++){
        cout<<" ";
    }for(int k=0;k<=7-i  ;k++){
        cout<<"*";
    }
    cout<<endl;
    }
}



}