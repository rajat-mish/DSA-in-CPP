#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void hanoi(int n,int a,int b,int c){
    if(n==0)return ;
    hanoi(n-1,a,c,b);
    cout<<a<<"->"<<c<<endl;
    hanoi(n-1,b,a,c);
}

int main(){
    int n;
    cout<<"Enter number of rings "<<endl;
    cin>>n;
  
    hanoi(n,1,2,3);
    
}