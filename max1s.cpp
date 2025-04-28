#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    int count;
    int a[4][4]={{0,1,1,1},
                   {0,0,1,1},
                   {1,1,1,1},
                   {0,0,0,0}};
    for(int i=0;i<4;i++){
        count=0;
        for(int j=0;j<4;j++){
            if(a[i][j]==1){
                count++;
            }
        }
        v.push_back(count);
    }
    //cout<<max_element(v);
    int max=*max_element(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(v[i]==max){
            cout<<i;
            break;
        }
    }
}