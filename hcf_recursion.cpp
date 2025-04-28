#include<iostream>
#include<vector>
using namespace std;

int hcf(int a,int b){
    if(b%a==0){
        return a;
    }
    return hcf(b%a,a);
}

int main(){
    cout<<hcf(10000,10001);
}