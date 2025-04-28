#include<iostream>
#include<vector>
using namespace std;

bool pow2(int a){
    if(a==1){
        return true;
    }
    if(a%2==0){
        return pow2(a/2);
    }
    return false;
}

int main(){
cout<<pow2(8);
}