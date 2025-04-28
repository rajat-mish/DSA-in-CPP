#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int>m;
    pair<string ,int>p1;
    p1.first="Rajat";
    p1.second=13;

     pair<string ,int>p2;
    p2.first="Steve";
    p2.second=14;

     pair<string ,int>p3;
    p3.first="Joe";
    p3.second=15;

    m.insert(p1);
    m.insert(p2);
    m.insert(p3);

    // for(auto p: m){
    //     cout<<p.first<<endl;
    // }


    // another method of insertion into maps
    m["Alas"]=16;
    m["Kyle"]=17;
    for(auto p: m){
        cout<<p.first<<endl;
    }


    // for deleting Joe
    m.erase("Joe");

}