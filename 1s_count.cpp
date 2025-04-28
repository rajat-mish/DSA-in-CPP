#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a = {0,0,0,0,1,1};
    int l=0;
    int h=a.size()-1;
    int count=-1;
    while(l<=h){
        int m=l+(h-l)/2;
        
      
        if(a[m]==1){
            count=m;
            h=m-1;
        }
        else{
            l=m+1;
        }
    }
    cout<<a.size()-l;
}