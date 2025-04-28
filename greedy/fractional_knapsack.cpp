#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// time complexity: O(nlogn)

bool cmp(pair<int,int>&p1 , pair<int,int>&p2){
    // in pair first is value and second is weight
    double r1=(p1.first*1.0)/(p1.second*1.0);
    double r2=(p2.first*1.0)/(p2.second*1.0);
    return r1 > r2;
}

double fractionalKnapsack(vector<int>&profit, vector<int>&weights,int n ,int w){
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        v.push_back(make_pair(profit[i],weights[i]));
    }

    sort(v.begin(),v.end(),cmp);
    double result=0;
    for(int i=0;i<n;i++){
        if(v[i].second<=w){
         result+=v[i].first;
         w-=v[i].second;
        }
        else{
            result+=((v[i].first*1.0)/(v[i].second*1.0))*w;
            w=0;
            break;
        }
    }

    return result;

}


int main(){
vector<int>profit={60,100,120};
vector<int>weights={10,20,30};
int n=3;
int w=50;
cout<<fractionalKnapsack(profit,weights,n,w);
}


