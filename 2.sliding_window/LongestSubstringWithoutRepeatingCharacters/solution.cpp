#include <iostream>
using namespace std;

int main() {
    cout << "Hello" << endl;
    return 0;
}class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> freq;
        int left = 0;
        int maxlen = 0;
        for(int right = 0;right<s.length();right++){
            int ch = s[right];
            if(freq.find(ch) != freq.end()){
                left = max(left,freq[ch]+1);
            }
            freq[ch] = right;
            maxlen = max(maxlen,right-left+1);
        }
        return maxlen;
    }
};