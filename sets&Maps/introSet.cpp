#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
// all elements are randomly inserted in unordered set
s.insert(5);  // It stores unique elements only

    for(int ele:s){
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;; // it will give 5 , not 6
    s.erase(4);
     for(int ele:s){
        cout<<ele<<" ";
    }

    // to find whether 5 exists in this set or not
 cout<<endl;
    int target=5;
    if(s.find(target)!=s.end()){
        cout<<"exists"<<endl;
    }
    else{
        cout<<"no";
    }
}