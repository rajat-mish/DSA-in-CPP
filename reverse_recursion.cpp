#include<iostream>
#include<vector>
using namespace std;

int reverse(int r,int n){
if(n==0){
    return r;
}
// r*=10;
// r+=n%10;
// n=n/10;
reverse(r*10 +n%10,n/10);
}

int main(){
    cout<<reverse(0,1234);
}