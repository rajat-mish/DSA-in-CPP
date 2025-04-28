#include<iostream>
#include<vector>
using namespace std;

int oddsum(int a,int b){ 
    if(a>b){
        return 0;
    }
    if(a%2==0){
        return  oddsum(a+1,b);
    }return a+oddsum(a+2,b);
}

int main(){
    cout<<oddsum(2,12);
}