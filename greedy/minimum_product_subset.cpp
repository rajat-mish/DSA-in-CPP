
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int fun(vector<int> &v) {
    int c1 = 0, c2 = 0,cp=1,cn=1;
sort(v.begin(), v.end());
    // Count zeros and negative numbers
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == 0) {
            c1++;
        }
        if (v[i] < 0) {
            c2++;
            cn *=v[i];
        }
        if(v[i]>0){
        cp *=v[i];
        }
    }

    // If there are no negative numbers and at least one zero, the product is zero
    if (c2 == 0 && c1 != 0) {
        return 0;
    }
    if(c2==0 && c1==0){
        return v[0];
    }

    // Sort the array to handle negative numbers correctly
    

    int pro = 1;
    // If the number of negative numbers is even, multiply all non-zero elements
    if (c2 % 2 == 0) {
      int j=v.size()-1;
      
      while(v[j]>0){
        j--;
      }
      return (cn*cp)/(v[j]);
      
    } else {
        // If the number of negative numbers is odd, skip the smallest negative number
     
        for (int i = 0; i < v.size(); i++) {
            if (v[i] != 0) {
               
                pro *= v[i];
            }
        }
    }

    return pro;
}

int main() {
    vector<int> v = {4, -6,  -9, -8};
    cout << fun(v) << endl;
    return 0;
}
