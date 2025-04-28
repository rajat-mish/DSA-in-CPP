#include<iostream>
using namespace std;

int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f=f*i;
    }
    return f;
}

int combination(int n,int r){
int ncr=fact(n)/(fact(r)*fact(n-r));
return ncr;


}

int permutation(int n,int r){
    int npr=fact(n)/fact(n-r);
    return npr;
}



int main(){
    int n,r;
    cout<<"Enter the value of n and r:";
    cin>>n>>r;

    cout<<"The value of ncr is:"<<combination(n,r)<<endl;

     cout<<"The value of npr is:"<<permutation(n,r);

}