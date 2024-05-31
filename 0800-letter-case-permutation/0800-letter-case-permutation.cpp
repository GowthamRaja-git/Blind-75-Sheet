class Solution {
public:
    void solve(int i,int &n,string &s,vector<string> &ans){
        if(i>=n){
            ans.push_back(s);
            return;
        }
        if(s[i]>='0'&&s[i]<='9'){
            solve(i+1,n,s,ans);
        }else{
            if(s[i]>='A'&&s[i]<='Z'){
                solve(i+1,n,s,ans);
                s[i] = s[i]-'A'+'a';
                solve(i+1,n,s,ans);
                s[i] = s[i]-'a'+'A';
            }else{
                solve(i+1,n,s,ans);
                s[i] = s[i]+'A'-'a';
                solve(i+1,n,s,ans);
                s[i] = s[i]+'a'-'A';
            }
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        int n = s.length();
        solve(0,n,s,ans);
        return ans;
    }
};