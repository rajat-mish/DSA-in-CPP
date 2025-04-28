#include<iostream>
#include<list>
#include<vector>
#include<unordered_set>
using namespace std;
unordered_set<int>visited;
vector<vector<int>>result;
vector<list<int>>graph;
int v;
void addEdge(int src,int des,bool bi_dir=true){
graph[src].push_back(des);
if(bi_dir){
    graph[des].push_back(src);
}
}

void dfs(int cur,int end,vector<int>&path){
    if(cur==end){
        path.push_back(cur);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(cur);
    path.push_back(cur);
    for(auto neighbour:graph[cur]){
        if(not visited.count(neighbour)){
         dfs(neighbour,end,path);
           // if any neighbour gives the path 
        }
    }
    path.pop_back();
    visited.erase(cur);
    return;  // all neighbours explored but no path found
}

void all_path(int cur,int end){
    vector<int>v;
     dfs(cur,end,v);
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
    all_path(x,y);
    for(auto path:result){
        for(auto ele:path){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
   // display();
}