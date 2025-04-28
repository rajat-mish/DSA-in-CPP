#include<iostream>
using namespace std;
int main(){ int p,r,sum;
    for(int i=1;i<=500;i++){
         sum=0;
         int t=i;
    while(t>0){
        r=t%10;
        p=r*r*r;
        sum=sum+p;
        t=t/10;
    }
    if(i==sum){
        cout<<i<<endl;
    }
    }
}