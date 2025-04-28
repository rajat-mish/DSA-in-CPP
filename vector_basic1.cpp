#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(45);
     v.push_back(46);
      v.push_back(5);
       v.push_back(475);
        v.push_back(475);

        for(int i=0;i<v.size();i++){
            cout<<v.at(i)<<" ";
        }
        cout<<endl;

        sort(v.begin(),v.end());
         for(int i=0;i<v.size();i++){
            cout<<v.at(i)<<" ";
        }






}