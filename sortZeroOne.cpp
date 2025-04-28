#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int> &a){ int n=a.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(a[i]==0) i++;
        if(a[j]==1) j--;
        if(i>j) break;
        if(a[i]==1 &&a[j]==0){
            a[i]=0;
            a[j]=1;
            i++;
            j--;
        }
    }

}

int main(){
 vector<int> v;
 v.push_back(0);
 v.push_back(1);
 v.push_back(0);
 v.push_back(1);
 v.push_back(0);
 v.push_back(1);

 sort(v);
 for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
 }
}
