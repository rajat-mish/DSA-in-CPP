#include<iostream>
using namespace std;
int main(){  // x ko y me convert krne k liye kitni bits ko palatna pdega
    int x=5;
    int y=11;
    int z=x^y;  // x and y ka xor nikal liya isse , xor 1 deta hai agar x and y me bits different h . To humne z me 1 ko count kar liya
    cout<<__builtin_popcount(z);
}