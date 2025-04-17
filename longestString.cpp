class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int result = 0;
        set<int> store;
        for (int i=0;i<s.length();i++){
            if (store.count(s[i])==0){
                store.insert(s[i]);
                result = max(result, i-left+1);
            }
            else{
                while(store.count(s[i])){
                    store.erase(s[left]);
                    left++;
                }
                store.insert(s[i]);
            }
        }
        return result;
    }
};
