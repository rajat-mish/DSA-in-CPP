#include<iostream>
using namespace std;

int main() {
    string s = "1010101";
    string temp = s;

    // Set the least significant bit of each character in s to 1
    for(int i = 0; i < s.size(); i++) {
        s[i] = s[i] | 1;
    }

    // Toggle the bits in s based on the bitwise NOT of temp
    for(int i = s.size() - 1; i >= 0; i--) {
        s[i]=( s[i]-'0')xor(temp[i]-'0')+'0';
    }

    cout << s;

    return 0;
}
