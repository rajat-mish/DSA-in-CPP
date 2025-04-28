#include<iostream>
using namespace std;

int main(){
    int x=73; // 34 se just small 2 ki power btani hai
    int temp;
   
    while(x!=0){
        temp=x;
       
        x=x&(x-1);  // 
    }
    cout<<temp<<endl;
   
}