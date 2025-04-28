#include<iostream>
#include<list>
#include<vector>
#include<unordered_set>
using namespace std;
unordered_set<int>visited;

vector<list<int>>graph;
int v;
void addEdge(int src,int des,bool bi_dir=true){
graph[src].push_back(des);
if(bi_dir){
    graph[des].push_back(src);
}
}

bool dfs(int cur,int end){
    if(cur==end)return true;
    visited.insert(cur);
    for(auto neighbour:graph[cur]){
        if(not visited.count(neighbour)){
         bool result=dfs(neighbour,end);
         if(result)return true;  // if any neighbour gives the path 
        }
    }
    return false;  // all neighbours explored but no path found
}

bool any_path(int cur,int end){
    return dfs(cur,end);
}

// void display(){
//     for(int i=0;i<graph.size();i++){
//         cout<<i<<"->";
//         for(auto ele:graph[i]){
//             cout<<ele<<",";
//         }
//         cout<<endl;
//     }
// }

int main(){
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    while(e--){
        int src,des;
        cin>>src>>des;
        addEdge(src,des);
    }
    cout<<"Enter two vertices"<<endl;
    int x,y;
    cin>>x>>y;
    cout<<any_path(x,y);
   // display();
}