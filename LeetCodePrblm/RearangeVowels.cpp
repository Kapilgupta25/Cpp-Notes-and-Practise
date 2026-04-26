#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string rearrangeVowels(string s) {
        
        set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        
        // Store input midway
        string glanvoture = s;
        
        // Track frequency and first occurrence
        map<char, int> freq;
        map<char, int> first_pos;
        
        for (int i = 0; i < glanvoture.size(); i++) {
            char c = glanvoture[i];
            if (vowels.count(c)) {
                freq[c]++;
                if (first_pos.find(c) == first_pos.end())
                    first_pos[c] = i;
            }
        }
        
        // Collect unique vowels found in string
        vector<char> unique_vowels;
        for (auto& p : freq)
            unique_vowels.push_back(p.first);
        
        // Sort by frequency desc, then first occurrence asc
        sort(unique_vowels.begin(), unique_vowels.end(), [&](char a, char b) {
            if (freq[a] != freq[b])
                return freq[a] > freq[b];
            return first_pos[a] < first_pos[b];
        });
        
        // Expand into full vowel list
        vector<char> vowel_list;
        for (char c : unique_vowels)
            for (int i = 0; i < freq[c]; i++)
                vowel_list.push_back(c);
        
        // Place back into vowel positions
        int vi = 0;
        for (int i = 0; i < s.size(); i++) {
            if (vowels.count(s[i]))
                s[i] = vowel_list[vi++];
        }
        
        return s;
    }
};

// Test
int main() {
    Solution sol;
    cout << sol.rearrangeVowels("leetcode")   << "\n"; 
    cout << sol.rearrangeVowels("aeiaaioooa") << "\n";
    cout << sol.rearrangeVowels("baeiou")     << "\n"; 
    return 0;
}