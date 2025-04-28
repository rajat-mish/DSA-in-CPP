// Can the same function name be used for different functions without any conflict?

#include<iostream>
using namespace std;
int  sum(int a,int b){
    return a+b;
}

float sum(float a,float b){
return a+b;
}
int main(){  int a,b; 
float r,n;
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
    cin>>r>>n;
    cout<<sum(r,n);


}
