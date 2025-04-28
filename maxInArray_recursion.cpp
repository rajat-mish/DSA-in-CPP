#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int max(int a[],int n,int i,int m){
    if(i==n){
        cout<<m;
        return 0;}
    if(a[i]>m){
        m=a[i];
    }
    max(a,n,i+1,m);
}
int main(){
    int a[]={4,5,6,7,8};
    int n=5;
    ;
    max(a,n,0,INT_MIN);
  //cout<<"Maximum element is "<< max(a,n,0,INT_MIN)<<endl;

}