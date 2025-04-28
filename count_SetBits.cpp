#include<iostream>
using namespace std;

int countSB(int n){
    return __builtin_popcount(n);  // ye builtin function h jo ki number of 1s  count krke deta h given number ki binary form me
}

int main(){
    cout<<countSB(12);
}