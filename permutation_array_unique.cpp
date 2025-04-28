#include<iostream>
#include<vector>
using namespace std;

void permu(vector<vector<int>>&ans,vector<int>v,int idx){
    if(idx==v.size()){
       ans.push_back(v);
       return;
    }
    for(int i=idx;i<v.size();i++){
        swap(v[i],v[idx]);
        permu(ans,v,idx+1);
        swap(v[i],v[idx]);
    }
    return ;
}

int main(){
    vector<int>v={1,2,3};
    int idx=0;
    vector<vector<int>>ans;
    permu(ans,v,idx);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}