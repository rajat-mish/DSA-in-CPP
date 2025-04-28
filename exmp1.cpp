#include<bits/stdc++.h>
using namespace std;
void reverse(vector<char>& s, int start, int end) {
    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}


void reverseWords(vector<char>& s) {
    int n = s.size();
    int start = 0;

  
    for (int end = 0; end < n; end++) {
        if (s[end] == ' ') {
            reverse(s, start, end - 1); 
            start = end + 1;          
        } else if (end == n - 1) {
            reverse(s, start, end);   
        }
    }

   
    reverse(s, 0, n - 1);
}
int main(){
    vector<char>s = {'t','h','e',' ','s','k','y',' ','i','s',' ','b','l','u','e'};
    reverseWords(s);
    for(int i = 0; i < s.size(); i++) {
        cout << s[i];
    }
    return 0;
}
