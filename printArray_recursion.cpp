#include<iostream>
#include<vector>
using namespace std;

void rev(int a[],int n,int i){
    if(i<0)return ;
    cout<<a[i]<<" ";
    rev(a,n,i-1);
}

int main(){
    int a[]={4,5,6,7,8};
    int n=5;
    rev(a,n,n-1);
}