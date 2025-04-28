#include<iostream>
#include<list>
#include<vector>
#include<queue>
#include<climits>
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

void bfs(int src,vector<int>&distance){
    queue<int>q;
    visited.clear();
    distance.resize(v,INT_MAX);
    distance[src]=0;
    q.push(src);
    visited.insert(src);
   while(not q.empty()){
    int cur=q.front();
    cout<<cur<<" ";
    q.pop();
     for(auto neighbour:graph[cur]){
    if(not visited.count(neighbour)){
      q.push(neighbour);
      visited.insert(neighbour);
      distance[neighbour]=distance[cur]+1;
    }}
   }
   cout<<endl;
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
    cout<<"Enter source "<<endl;
      int x;
      cin>>x;
      vector<int>distance;
    bfs(x,distance);
     for(int i=0;i<distance.size();i++){
        cout<<distance[i]<<" ";
     }
   // display();
}