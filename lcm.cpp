#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
    long long g=1;
    for(long long i=min(a,b);i>=0;i--){
        if(a%i==0 && b%i==0){
            g=i;
            break;
        }
    }
    return g;
}

long long lcm(long long a,long long b){
    return (a*b)/gcd(a,b);
}

int main(){
      long long a,b;
    cin>>a>>b;
    cout<<lcm(a,b);
}