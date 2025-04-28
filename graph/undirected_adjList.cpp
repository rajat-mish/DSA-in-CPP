#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;

vector<list<int>>graph;
int v;
void addEdge(int src,int des,bool bi_dir=true){
graph[src].push_back(des);
if(bi_dir){
    graph[des].push_back(src);
}
}

void bfs(){
    queue<int>q;
    vector<int>bfs;
    vector<int>visited(v,0);
    visited[0]=1;
    q.push(0);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        bfs.push_back(node);
        for(auto ele:graph[node]){
            if(!visited[ele]){
                visited[ele]=1;
                q.push(ele);
            }
        }
    }
   cout<<"BFS: ";
    for(auto ele:bfs){
        cout<<ele<<" ";
    }
   
}

void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto ele:graph[i]){
            cout<<ele<<",";
        }
        cout<<endl;
    }
}

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
    display();
    bfs();
}