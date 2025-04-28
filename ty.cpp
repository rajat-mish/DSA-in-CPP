// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){
//     // int a[3];
//     // for(int i=0;i<3;i++){
//     //     cin>>a[i];

//     // }
//     // for(int i=0;i<3;i++){
//     //     if(a[i]==0){
//     //         cout<<"yes";
//     //     }
//     //     else{
//     //         cout<<"no";
//     //     }
//     //     //cout<<a[i];
//     // }

//     // int a;
//     // cin>>a;
//     // cout<<(char)a;
//     // string s;
//     // cin>>s;
//     // cout<<s;

//     unsigned char a[6];
// 	    for(int i=0;i<6;i++){
// 	        cin>>a[i];
// 	    }
// 	    bool flag=false;
// 	    for(int j=0;j<6;j++){
// 	        if((a[j]=='w') &&(a[j+1]=='w')&&(a[j+2]=='w')){
// 	            flag=true;
// 	            cout<<"yes"<<endl;
// 	            break;
// 	        }
// 	    }
// 	    if(flag==false){
// 	        cout<<"no"<<endl;
// 	    }

   
// }


#include <bits/stdc++.h>
using namespace std;
// int helper(string s){ int count=0;
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='1'){
//             count++;
//         }
//     }
//     return count;
// }

// bool isp(int n){
//     if(n==1)return false;
//     for(int i=2;i<(n);i++){
//         if(n%i==0)return false;
//     }
//     return true;
// }
int main() {
	// your code goes here
  // vector<int>v={3 ,9,56,2,4};
  // sort(v.rbegin(),v.rbegin()+5);

  // for(int i=0;i<5;i++){
  //   cout<<v[i]<<" ";
  // }
// string s="010";
// //sort(s.begin(),s.end());
//  sort(s.begin(),s.end());
//      for(int i=0;i<s.size();i++){
//          if(s[i]=='1' && i!=s.size()-1){
//              s[i]='0';
//              s[0]='1';
//              break;

//          }
//      }
//      reverse(s.begin(),s.end());
// cout<<s;
// int left=10;
// int right=15;
// int count=0;
//  for(int i=left;i<=right;i++){
//             string s="";
//             int n=i;
//             while(n>0){
//                 int x=n%2;
//                 string e=to_string(x);
//                 s+=e;
//                 n=n/2;
//             }
//             cout<<s<<endl;
//            int a=helper(s);
//            cout<<a<<endl;
//            if(isp(a))count++;
           
//         }
//         cout<<"count"<<count<<endl;
// // s.pop_back();
// // s.pop_back();
// int a=stoi(s.substr(11,12));
// cout<<a+5;

  // int count=0;
  //       int n=3;
  //       while(n!=1){
  //        for(int x=1;x<n;x++){
  //           if(n%x==0){
  //               count++;
  //             n=n-x;
  //           }}}
  //       cout<<count<<endl;
  //       if(count%2!=0){
  //           cout<<"true";
  //       }
  //       else{
  //           cout<<"false";
  //       }
//         vector<int>nums={1,2,3,4,5};
//  int i=1;
//         int j=i+1;
//         int sum=nums[0]+nums[1];
//         vector<int>v;
//         v.push_back(sum);
//         while(j<nums.size()&& i<nums.size()){
//            if(j==nums.size())break; 
//           v.push_back(sum);
//           i++;j++;
//         }
//         sort(v.begin(),v.end());
//         for(int i=0;i<v.size();i++){
//             // if(v[i]==v[i+1])return true;
//             cout<<v[i]<<" ";
//         }
      
        //  if(nums.size()==1)return nums[0];
        // int c1=0;
        // int c2=0;
        // for(int i=0;i<nums.size();i+=2){
        //     c1 +=nums[i];
        // }
        // for(int i=1;i<nums.size();i++){
        //     c2 +=nums[i];
        // }
        // cout<<max(c1,c2);
        // string s="bhka";
        // sort(s.begin(),s.end());
        // cout<<s;
     float a=348;
     float b=568;
        double d=a/b;
        cout<<d;
    }

