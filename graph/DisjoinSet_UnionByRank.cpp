#include <iostream>
#include <vector>
using namespace std;

class DisjointSet {
public:
    vector<int> parent, rank;
    
    DisjointSet(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for(int i = 0; i < n; i++)
            parent[i] = i; // Initially, each node is its own parent
    }
    
    int findParent(int node) {
        if(parent[node] != node)
            parent[node] = findParent(parent[node]); // Path Compression
        return parent[node];
    }
    
    void unionByRank(int u, int v) {
        int parent_u = findParent(u);
        int parent_v = findParent(v);
        
        if(parent_u == parent_v) return; // Already in the same set
        
        if(rank[parent_u] < rank[parent_v]) {
            parent[parent_u] = parent_v;
        }
        else if(rank[parent_v] < rank[parent_u]) {
            parent[parent_v] = parent_u;
        }
        else {
            parent[parent_v] = parent_u;
            rank[parent_u]++;
        }
    }
};

int main() {
    int n = 5; // Number of elements
    DisjointSet ds(n);
    
    ds.unionByRank(0, 1);
    ds.unionByRank(1, 2);
    ds.unionByRank(3, 4);
    
    cout << "Parent of 0: " << ds.findParent(0) << endl; // Should be the same for 1 and 2
    cout << "Parent of 1: " << ds.findParent(1) << endl;
    cout << "Parent of 2: " << ds.findParent(2) << endl;
    cout << "Parent of 3: " << ds.findParent(3) << endl; // Should be different from 0, 1, 2
    cout << "Parent of 4: " << ds.findParent(4) << endl; // Should be the same as 3
    
    return 0;
}
