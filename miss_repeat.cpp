#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>v;
        vector<int>a;
      //   int n=grid.size();
      // int arr[n*n +1];
      //   for(int i=0;i<n*n +1;i++){
      //       arr[i]=0;
      //   }
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                a.push_back(grid[i][j]);
                if(grid[i]==grid[j]){
                    v.push_back(grid[i][j]);
                }
            }
        }
        sort(a.begin(),a.end());
        for(int i=1;i<a.size();i++){
            if(a[i-1]!=i)
            v.push_back(i);
        }
        return v;
    }
int main(){

}