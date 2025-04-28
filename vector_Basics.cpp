#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(45);
     v.push_back(46);
      v.push_back(5);
       v.push_back(475);
        v.push_back(475);

       for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "<<endl;
       }
       cout<<"Size of the vector is :"<<v.size()<<endl;
       cout<<"Capacity of the vector is :"<<v.capacity()<<endl;
       v.pop_back();
       
       for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "<<endl;
       }

}